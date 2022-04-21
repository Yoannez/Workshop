package workshop.counter

import spinal.core._

case class Counter(width: Int) extends Component {
  val io = new Bundle {
    val clear    = in  Bool()
    val value    = out UInt(width bits)
    val full     = out Bool()
  }

  //TODO define the logic

  val counter = Reg(UInt(width bits)) init(0)
  counter := counter + 1
  when(io.clear){
    counter := 0
  }

  io.value := counter

  io.full := False
  when(counter === (1 << width) - 1){
    io.full := True
  }




}