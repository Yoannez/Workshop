// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : Apb3Decoder
// Git hash  : cf6312381553847f5e80d147d807b25f6b43ed95

`timescale 1ns/1ps 

module Apb3Decoder (
  input      [15:0]   io_input_PADDR,
  input      [0:0]    io_input_PSEL,
  input               io_input_PENABLE,
  output              io_input_PREADY,
  input               io_input_PWRITE,
  input      [31:0]   io_input_PWDATA,
  output     [31:0]   io_input_PRDATA,
  output              io_input_PSLVERROR,
  output     [15:0]   io_outputs_0_PADDR,
  output     [0:0]    io_outputs_0_PSEL,
  output              io_outputs_0_PENABLE,
  input               io_outputs_0_PREADY,
  output              io_outputs_0_PWRITE,
  output     [31:0]   io_outputs_0_PWDATA,
  input      [31:0]   io_outputs_0_PRDATA,
  input               io_outputs_0_PSLVERROR,
  output     [15:0]   io_outputs_1_PADDR,
  output     [0:0]    io_outputs_1_PSEL,
  output              io_outputs_1_PENABLE,
  input               io_outputs_1_PREADY,
  output              io_outputs_1_PWRITE,
  output     [31:0]   io_outputs_1_PWDATA,
  input      [31:0]   io_outputs_1_PRDATA,
  input               io_outputs_1_PSLVERROR,
  output     [15:0]   io_outputs_2_PADDR,
  output     [0:0]    io_outputs_2_PSEL,
  output              io_outputs_2_PENABLE,
  input               io_outputs_2_PREADY,
  output              io_outputs_2_PWRITE,
  output     [31:0]   io_outputs_2_PWDATA,
  input      [31:0]   io_outputs_2_PRDATA,
  input               io_outputs_2_PSLVERROR,
  output     [15:0]   io_outputs_3_PADDR,
  output     [0:0]    io_outputs_3_PSEL,
  output              io_outputs_3_PENABLE,
  input               io_outputs_3_PREADY,
  output              io_outputs_3_PWRITE,
  output     [31:0]   io_outputs_3_PWDATA,
  input      [31:0]   io_outputs_3_PRDATA,
  input               io_outputs_3_PSLVERROR
);

  reg                 _zz_io_input_PREADY;
  reg        [31:0]   _zz_io_input_PRDATA;
  reg                 _zz_io_input_PSLVERROR;
  wire                addressHit_0;
  wire                addressHit_1;
  wire                addressHit_2;
  wire                addressHit_3;
  wire                _zz_addressHitIndex;
  wire                _zz_addressHitIndex_1;
  wire       [1:0]    addressHitIndex;

  always @(*) begin
    case(addressHitIndex)
      2'b00 : begin
        _zz_io_input_PREADY = io_outputs_0_PREADY;
        _zz_io_input_PRDATA = io_outputs_0_PRDATA;
        _zz_io_input_PSLVERROR = io_outputs_0_PSLVERROR;
      end
      2'b01 : begin
        _zz_io_input_PREADY = io_outputs_1_PREADY;
        _zz_io_input_PRDATA = io_outputs_1_PRDATA;
        _zz_io_input_PSLVERROR = io_outputs_1_PSLVERROR;
      end
      2'b10 : begin
        _zz_io_input_PREADY = io_outputs_2_PREADY;
        _zz_io_input_PRDATA = io_outputs_2_PRDATA;
        _zz_io_input_PSLVERROR = io_outputs_2_PSLVERROR;
      end
      default : begin
        _zz_io_input_PREADY = io_outputs_3_PREADY;
        _zz_io_input_PRDATA = io_outputs_3_PRDATA;
        _zz_io_input_PSLVERROR = io_outputs_3_PSLVERROR;
      end
    endcase
  end

  assign io_outputs_0_PADDR = io_input_PADDR;
  assign io_outputs_0_PWRITE = io_input_PWRITE;
  assign io_outputs_0_PENABLE = io_input_PENABLE;
  assign io_outputs_0_PWDATA = io_input_PWDATA;
  assign io_outputs_1_PADDR = io_input_PADDR;
  assign io_outputs_1_PWRITE = io_input_PWRITE;
  assign io_outputs_1_PENABLE = io_input_PENABLE;
  assign io_outputs_1_PWDATA = io_input_PWDATA;
  assign io_outputs_2_PADDR = io_input_PADDR;
  assign io_outputs_2_PWRITE = io_input_PWRITE;
  assign io_outputs_2_PENABLE = io_input_PENABLE;
  assign io_outputs_2_PWDATA = io_input_PWDATA;
  assign io_outputs_3_PADDR = io_input_PADDR;
  assign io_outputs_3_PWRITE = io_input_PWRITE;
  assign io_outputs_3_PENABLE = io_input_PENABLE;
  assign io_outputs_3_PWDATA = io_input_PWDATA;
  assign addressHit_0 = ((16'h0 <= io_input_PADDR) && (io_input_PADDR < 16'h1000));
  assign addressHit_1 = ((16'h1000 <= io_input_PADDR) && (io_input_PADDR < 16'h2000));
  assign addressHit_2 = ((16'h4000 <= io_input_PADDR) && (io_input_PADDR < 16'h6000));
  assign addressHit_3 = ((16'h6000 <= io_input_PADDR) && (io_input_PADDR < 16'h9000));
  assign _zz_addressHitIndex = (addressHit_1 || addressHit_3);
  assign _zz_addressHitIndex_1 = (addressHit_2 || addressHit_3);
  assign addressHitIndex = {_zz_addressHitIndex_1,_zz_addressHitIndex};
  assign io_outputs_0_PSEL[0] = (addressHit_0 && io_input_PSEL[0]);
  assign io_outputs_1_PSEL[0] = (addressHit_1 && io_input_PSEL[0]);
  assign io_outputs_2_PSEL[0] = (addressHit_2 && io_input_PSEL[0]);
  assign io_outputs_3_PSEL[0] = (addressHit_3 && io_input_PSEL[0]);
  assign io_input_PREADY = _zz_io_input_PREADY;
  assign io_input_PRDATA = _zz_io_input_PRDATA;
  assign io_input_PSLVERROR = _zz_io_input_PSLVERROR;

  initial begin
    $dumpfile("../../../../../waves/Apb3Decoder.vcd");
    $dumpvars(0, Apb3Decoder);
  end

endmodule
