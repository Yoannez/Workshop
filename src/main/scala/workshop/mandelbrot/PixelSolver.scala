package workshop.mandelbrot

import spinal.core._
import spinal.lib._

case class PixelSolverGenerics(fixAmplitude : Int,
                               fixResolution : Int,
                               iterationLimit : Int){
  val iterationWidth = log2Up(iterationLimit+1)
  def iterationType = UInt(iterationWidth bits)
  def fixType = SFix(
    peak = fixAmplitude exp,
    resolution = fixResolution exp
  )
}

case class PixelTask(g : PixelSolverGenerics) extends Bundle{
  val x,y = g.fixType
}

case class PixelResult(g : PixelSolverGenerics) extends Bundle{
  val iteration = g.iterationType
}

case class PixelSolver(g : PixelSolverGenerics) extends Component{
  val io = new Bundle{
    val cmd = slave  Stream(PixelTask(g))
    val rsp = master Stream(PixelResult(g))
  }

  //TODO implement the mandelbrot algorithm
  val x,y = Reg(g.fixType) init(0)
  val iteration = Reg(g.iterationType) init(0)
  val xx = x*x
  val yy = y*y
  val xy = x*y

  io.cmd.ready := False
  io.rsp.valid := False
  io.rsp.iteration := iteration



  when(io.cmd.valid){
    when(xx + yy < 4 && iteration < g.iterationLimit){
      x := (xx - yy + io.cmd.x).truncated
      y := ((xy<<1) + io.cmd.y).truncated
      iteration := iteration + 1
    }otherwise{
      io.rsp.valid := True
      when(io.rsp.ready){
        x := 0
        y := 0
        iteration := 0
        io.cmd.ready := True
      }
    }
  }
}

