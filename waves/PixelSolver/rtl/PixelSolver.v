// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : PixelSolver
// Git hash  : 89d7543c7219f82d1991c9174f1b313aba4435ca

`timescale 1ns/1ps 

module PixelSolver (
  input               io_cmd_valid,
  output reg          io_cmd_ready,
  input      [27:0]   io_cmd_payload_x,
  input      [27:0]   io_cmd_payload_y,
  output reg          io_rsp_valid,
  input               io_rsp_ready,
  output     [3:0]    io_rsp_payload_iteration,
  input               clk,
  input               reset
);

  wire       [55:0]   _zz_when_PixelSolver_l45;
  wire       [55:0]   _zz_when_PixelSolver_l45_1;
  wire       [35:0]   _zz_x;
  wire       [55:0]   _zz_x_1;
  wire       [55:0]   _zz_x_2;
  wire       [55:0]   _zz_x_3;
  wire       [47:0]   _zz_x_4;
  wire       [36:0]   _zz_y;
  wire       [55:0]   _zz_y_1;
  wire       [55:0]   _zz_y_2;
  wire       [46:0]   _zz_y_3;
  reg        [27:0]   x;
  reg        [27:0]   y;
  reg        [3:0]    iteration;
  wire       [55:0]   xx;
  wire       [55:0]   yy;
  wire       [55:0]   xy;
  wire                when_PixelSolver_l45;

  assign _zz_when_PixelSolver_l45 = ($signed(xx) + $signed(yy));
  assign _zz_when_PixelSolver_l45_1 = 56'h00040000000000;
  assign _zz_x = (_zz_x_1 >>> 20);
  assign _zz_x_1 = ($signed(_zz_x_2) + $signed(_zz_x_3));
  assign _zz_x_2 = ($signed(xx) - $signed(yy));
  assign _zz_x_4 = ({20'd0,io_cmd_payload_x} <<< 20);
  assign _zz_x_3 = {{8{_zz_x_4[47]}}, _zz_x_4};
  assign _zz_y = (_zz_y_1 >>> 19);
  assign _zz_y_1 = ($signed(xy) + $signed(_zz_y_2));
  assign _zz_y_3 = ({19'd0,io_cmd_payload_y} <<< 19);
  assign _zz_y_2 = {{9{_zz_y_3[46]}}, _zz_y_3};
  assign xx = ($signed(x) * $signed(x));
  assign yy = ($signed(y) * $signed(y));
  assign xy = ($signed(x) * $signed(y));
  always @(*) begin
    io_cmd_ready = 1'b0;
    if(io_cmd_valid) begin
      if(!when_PixelSolver_l45) begin
        if(io_rsp_ready) begin
          io_cmd_ready = 1'b1;
        end
      end
    end
  end

  always @(*) begin
    io_rsp_valid = 1'b0;
    if(io_cmd_valid) begin
      if(!when_PixelSolver_l45) begin
        io_rsp_valid = 1'b1;
      end
    end
  end

  assign io_rsp_payload_iteration = iteration;
  assign when_PixelSolver_l45 = (($signed(_zz_when_PixelSolver_l45) < $signed(_zz_when_PixelSolver_l45_1)) && (iteration < 4'b1111));
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      x <= 28'h0;
      y <= 28'h0;
      iteration <= 4'b0000;
    end else begin
      if(io_cmd_valid) begin
        if(when_PixelSolver_l45) begin
          x <= _zz_x[27:0];
          y <= _zz_y[27:0];
          iteration <= (iteration + 4'b0001);
        end else begin
          if(io_rsp_ready) begin
            x <= 28'h0;
            y <= 28'h0;
            iteration <= 4'b0000;
          end
        end
      end
    end
  end


endmodule
