// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : PrimeUsage
// Git hash  : 89d7543c7219f82d1991c9174f1b313aba4435ca

`timescale 1ns/1ps 

module PrimeUsage (
  input      [4:0]    io_value,
  output              io_isPrime
);

  wire       [4:0]    _zz_io_isPrime;
  wire                _zz_io_isPrime_1;
  wire       [0:0]    _zz_io_isPrime_2;
  wire       [5:0]    _zz_io_isPrime_3;

  assign _zz_io_isPrime = 5'h11;
  assign _zz_io_isPrime_1 = (io_value == 5'h0d);
  assign _zz_io_isPrime_2 = (io_value == 5'h0b);
  assign _zz_io_isPrime_3 = {(io_value == 5'h07),{(io_value == 5'h05),{(io_value == 5'h03),{(io_value == 5'h02),{(io_value == 5'h01),(io_value == 5'h0)}}}}};
  assign io_isPrime = ({(io_value == 5'h1f),{(io_value == 5'h1d),{(io_value == 5'h17),{(io_value == 5'h13),{(io_value == _zz_io_isPrime),{_zz_io_isPrime_1,{_zz_io_isPrime_2,_zz_io_isPrime_3}}}}}}} != 13'h0);

endmodule
