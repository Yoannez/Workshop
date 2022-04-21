// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : Counter
// Git hash  : 89d7543c7219f82d1991c9174f1b313aba4435ca

`timescale 1ns/1ps 

module Counter (
  input               io_clear,
  output     [3:0]    io_value,
  output reg          io_full,
  input               clk,
  input               reset
);

  reg        [3:0]    counter_1;
  wire                when_Counter_l23;

  assign io_value = counter_1;
  always @(*) begin
    io_full = 1'b0;
    if(when_Counter_l23) begin
      io_full = 1'b1;
    end
  end

  assign when_Counter_l23 = (counter_1 == 4'b1111);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      counter_1 <= 4'b0000;
    end else begin
      counter_1 <= (counter_1 + 4'b0001);
      if(io_clear) begin
        counter_1 <= 4'b0000;
      end
    end
  end


endmodule
