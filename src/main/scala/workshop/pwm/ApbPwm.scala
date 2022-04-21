package workshop.pwm

import spinal.core._
import spinal.lib._

//APB configuration class (generic/parameter)
case class ApbConfig(addressWidth : Int,
                     dataWidth    : Int,
                     selWidth     : Int)

//APB interface definition
case class Apb(config: ApbConfig) extends Bundle with IMasterSlave {
  //TODO define APB signals
  val PADDR = UInt(config.addressWidth bits)
  val PSEL = Bits(config.selWidth bits)
  val PENABLE = Bool()
  val PWRITE = Bool()
  val PWDATA = Bits(config.dataWidth bits)
  val PRDATA = Bits(config.dataWidth bits)
  val PREADY = Bool()
  // sMaster override is must required?
  // Answer: yes if you use the IMasterSlave topology, you need to define asMaster to give the io direction.
  override def asMaster(): Unit = {
    //TODO define direction of each signal in a master mode
    out(PADDR,PSEL,PENABLE,PWDATA,PWRITE)
    in(PRDATA,PREADY)
  }
}

case class ApbPwm(apbConfig: ApbConfig,timerWidth : Int) extends Component{
  // What's the function of require?
  // require is to check if the dataWidth is equal to 32 or if the selWidth is to 1,
  // otherwise it will give an exception
  require(apbConfig.dataWidth == 32)
  require(apbConfig.selWidth == 1)

  val io = new Bundle{
    val apb = slave(Apb(apbConfig))//TODO
    val pwm = out Bool() //TODO
  }

  // What's the function of Area?
  // Answer: Define a groupe of signals/logic
  val logic = new Area {
    //TODO define the PWM logic
    val enable = Reg(Bool()) init(False)
    val dutyCycle = Reg(UInt(timerWidth bits))
    val timer = Reg(UInt(timerWidth bits)) init(0)
    val output = Reg(Bool()) init(False)

    when(enable){
      timer := timer + 1
    }

    output := (timer < dutyCycle)

    io.pwm := output
  }
  
  val control = new Area{
    //TODO define the APB slave logic that will make PWM's registers writable/readable
    val isWrite = io.apb.PSEL(0) && io.apb.PWRITE && io.apb.PENABLE
    // Give the initial value of PRDATA and PREADY
    io.apb.PRDATA := 0
    io.apb.PREADY := True
    switch(io.apb.PADDR){
      is(0){
        io.apb.PRDATA(0) := logic.enable
        when(isWrite){
          logic.enable := io.apb.PWDATA(0)
        }
      }
      is(4){
        io.apb.PRDATA := logic.dutyCycle.asBits.resized
        when(isWrite){
          logic.dutyCycle := io.apb.PWDATA.asUInt.resized
        }
      }
    }
  }
}