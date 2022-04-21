package workshop.timer

import spinal.core._
import spinal.lib._
import spinal.lib.bus.misc.BusSlaveFactory


case class Timer(width : Int) extends Component {
  val io = new Bundle {
    val tick = in Bool()
    val clear = in Bool()
    val limit = in UInt (width bits)

    val full  = out Bool()
    val value = out UInt (width bits)
  }

  //TODO phase 1
  val counter = Reg(UInt(width bits)) init(0)
  when(io.tick && !io.full){
    counter := counter + 1
  }
  when(io.clear){
    counter := 0
  }
  io.full := counter === io.limit
  io.value := counter

  def driveFrom(busCtrl : BusSlaveFactory,baseAddress : BigInt)(ticks : Seq[Bool],clears : Seq[Bool]) = new Area {
    //TODO phase 2
    val ticksEnable = busCtrl.createReadAndWrite(Bits(ticks.length bits), baseAddress + 0,0) init(0)
    val clearsEnable = busCtrl.createReadAndWrite(Bits(clears.length bits), baseAddress + 0, 16) init(0)
    val busClear = False

    io.clear := (clears.asBits() & clearsEnable).orR | busClear
    io.tick := (ticks.asBits() & ticksEnable).orR

    busCtrl.driveAndRead(io.limit, baseAddress + 4, 0)
    busClear.setWhen(busCtrl.isWriting(baseAddress + 4))

    busCtrl.read(io.value, baseAddress + 8)
    busClear.setWhen(busCtrl.isWriting(baseAddress + 8))
  }
}
