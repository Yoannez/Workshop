// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : MemorySumming
// Git hash  : 89d7543c7219f82d1991c9174f1b313aba4435ca

`timescale 1ns/1ps 

module MemorySumming (
  input               io_wr_en,
  input      [7:0]    io_wr_addr,
  input      [15:0]   io_wr_data,
  input               io_sum_start,
  output reg          io_sum_done,
  output     [15:0]   io_sum_value,
  input               io_wr_clk,
  input               io_sum_clk,
  input               io_sum_reset
);

  wire       [15:0]   myRam_io_rd_data;
  reg        [7:0]    sumArea_addrCounter;
  reg                 sumArea_isStart;
  wire                when_MemorySumming_l64;
  wire                when_MemorySumming_l69;
  reg                 sumArea_rdValid;
  reg        [15:0]   sumArea_sum;
  reg                 sumArea_rdValid_regNext;
  wire                when_MemorySumming_l82;

  Ram_1w_1r_2c #(
    .addressWidth(8),
    .wordWidth(16) 
  ) myRam (
    .io_wr_clk     (io_wr_clk                 ), //i
    .io_wr_en      (io_wr_en                  ), //i
    .io_wr_addr    (io_wr_addr[7:0]           ), //i
    .io_wr_data    (io_wr_data[15:0]          ), //i
    .io_rd_clk     (io_sum_clk                ), //i
    .io_rd_en      (sumArea_isStart           ), //i
    .io_rd_addr    (sumArea_addrCounter[7:0]  ), //i
    .io_rd_data    (myRam_io_rd_data[15:0]    )  //o
  );
  assign when_MemorySumming_l64 = (! sumArea_isStart);
  assign when_MemorySumming_l69 = (sumArea_addrCounter == 8'hff);
  always @(*) begin
    io_sum_done = 1'b0;
    if(when_MemorySumming_l82) begin
      io_sum_done = 1'b1;
    end
  end

  assign when_MemorySumming_l82 = ((! sumArea_rdValid) && sumArea_rdValid_regNext);
  assign io_sum_value = sumArea_sum;
  always @(posedge io_sum_clk or posedge io_sum_reset) begin
    if(io_sum_reset) begin
      sumArea_isStart <= 1'b0;
      sumArea_rdValid <= 1'b0;
      sumArea_rdValid_regNext <= 1'b0;
    end else begin
      if(when_MemorySumming_l64) begin
        sumArea_isStart <= io_sum_start;
      end else begin
        if(when_MemorySumming_l69) begin
          sumArea_isStart <= 1'b0;
        end
      end
      sumArea_rdValid <= sumArea_isStart;
      sumArea_rdValid_regNext <= sumArea_rdValid;
    end
  end

  always @(posedge io_sum_clk) begin
    if(when_MemorySumming_l64) begin
      sumArea_addrCounter <= 8'h0;
    end else begin
      sumArea_addrCounter <= (sumArea_addrCounter + 8'h01);
    end
    sumArea_sum <= 16'h0;
    if(sumArea_rdValid) begin
      sumArea_sum <= (sumArea_sum + myRam_io_rd_data);
    end
  end


endmodule
