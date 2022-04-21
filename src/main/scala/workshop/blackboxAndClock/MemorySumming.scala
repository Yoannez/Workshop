package workshop.blackboxAndClock

import spinal.core._
import spinal.lib._


// Define a Ram as a BlackBox
case class Ram_1w_1r_2c(wordWidth: Int, addressWidth: Int,writeClock : ClockDomain,readClock : ClockDomain) extends BlackBox {
  // TODO define Generics
  val generic = new Generic{
    val addressWidth = Ram_1w_1r_2c.this.addressWidth
    val wordWidth = Ram_1w_1r_2c.this.wordWidth
  }
  // TODO define IO
  val io = new  Bundle{
    val wr = new Bundle{
      val clk = in Bool()
      val en = in Bool()
      val addr = in UInt(addressWidth bits)
      val data = in Bits(wordWidth bits)
    }
    val rd = new Bundle{
      val clk = in Bool()
      val en = in Bool()
      val addr = in UInt(addressWidth bits)
      val data = out Bits(wordWidth bits)
    }
  }
  // TODO define ClockDomains mappings
  mapClockDomain(writeClock, io.wr.clk)
  mapClockDomain(readClock, io.rd.clk)
}

// Create the top level and instanciate the Ram
case class MemorySumming(writeClock : ClockDomain,sumClock : ClockDomain) extends Component {
  val io = new Bundle {
    val wr = new Bundle {
      val en   = in Bool()
      val addr = in UInt (8 bits)
      val data = in Bits (16 bits)
    }

    val sum = new Bundle{
      val start = in Bool()
      val done  = out Bool()
      val value = out UInt(16 bits)
    }
  }

  // TODO define the ram
  val myRam = new Ram_1w_1r_2c(16,8, writeClock, sumClock)
  // TODO connect the io.wr port to the ram
  io.wr.en <> myRam.io.wr.en
  io.wr.addr <> myRam.io.wr.addr
  io.wr.data <> myRam.io.wr.data
  val sumArea = new ClockingArea(sumClock){
    // TODO define the memory read + summing logic
    val addrCounter = Reg(UInt(8 bits))
    val isStart = RegInit(False)

    myRam.io.rd.en := isStart
    myRam.io.rd.addr := addrCounter

    when(!isStart){
      isStart := io.sum.start
      addrCounter := 0
    }otherwise{
      addrCounter := addrCounter + 1
      when(addrCounter === addrCounter.maxValue) {
        isStart := False
      }
    }

    val rdValid = RegNext(isStart) init(False)
    val sum = Reg(UInt(16 bits))
    sum := 0
    when(rdValid){
      sum := sum + myRam.io.rd.data.asUInt
    }

    io.sum.done := False
    when(rdValid.fall(initAt = False)) {
      io.sum.done := True
    }
  }

  io.sum.value := sumArea.sum
}
