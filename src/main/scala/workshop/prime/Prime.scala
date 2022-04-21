package workshop.prime

import spinal.core._
import spinal.lib._


object Prime{
  //Pure scala function which return true when the number is prime
  def apply(n : Int) =  ! ((2 until n-1) exists (n % _ == 0))

  //Should return True when the number is prime.
  def apply(n : UInt) : Bool = {
    //TODO
    val valueRange = 0 until (1 << widthOf(n))
    val valuePrimeInRange = valueRange.filter(i => Prime(i))
    val primeHits = valuePrimeInRange.map(primeValue => n === primeValue)
    val isPrime = primeHits.orR
    isPrime
  }
}


