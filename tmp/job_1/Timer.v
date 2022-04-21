// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : Timer
// Git hash  : 89d7543c7219f82d1991c9174f1b313aba4435ca

`timescale 1ns/1ps 

module Timer (
  input               io_tick,
  input               io_clear,
  input      [7:0]    io_limit,
  output              io_full,
  output     [7:0]    io_value,
  input               clk,
  input               reset
);

  reg        [7:0]    counter;
  wire                when_Timer_l20;

  assign when_Timer_l20 = (io_tick && (! io_full));
  assign io_full = (counter == io_limit);
  assign io_value = counter;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      counter <= 8'h0;
    end else begin
      if(when_Timer_l20) begin
        counter <= (counter + 8'h01);
      end
      if(io_clear) begin
        counter <= 8'h0;
      end
    end
  end


endmodule
