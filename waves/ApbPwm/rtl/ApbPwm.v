// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : ApbPwm
// Git hash  : 89d7543c7219f82d1991c9174f1b313aba4435ca

`timescale 1ns/1ps 

module ApbPwm (
  input      [7:0]    io_apb_PADDR,
  input      [0:0]    io_apb_PSEL,
  input               io_apb_PENABLE,
  input               io_apb_PWRITE,
  input      [31:0]   io_apb_PWDATA,
  output reg [31:0]   io_apb_PRDATA,
  output              io_apb_PREADY,
  output              io_pwm,
  input               clk,
  input               reset
);

  wire       [7:0]    _zz_io_apb_PRDATA;
  wire       [31:0]   _zz_logic_dutyCycle;
  reg                 logic_enable;
  reg        [7:0]    logic_dutyCycle;
  reg        [7:0]    logic_timer;
  reg                 logic_output;
  wire                control_isWrite;

  assign _zz_io_apb_PRDATA = logic_dutyCycle;
  assign _zz_logic_dutyCycle = io_apb_PWDATA;
  assign io_pwm = logic_output;
  assign control_isWrite = ((io_apb_PSEL[0] && io_apb_PWRITE) && io_apb_PENABLE);
  always @(*) begin
    io_apb_PRDATA = 32'h0;
    case(io_apb_PADDR)
      8'h0 : begin
        io_apb_PRDATA[0] = logic_enable;
      end
      8'h04 : begin
        io_apb_PRDATA = {24'd0, _zz_io_apb_PRDATA};
      end
      default : begin
      end
    endcase
  end

  assign io_apb_PREADY = 1'b1;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      logic_enable <= 1'b0;
      logic_timer <= 8'h0;
      logic_output <= 1'b0;
    end else begin
      if(logic_enable) begin
        logic_timer <= (logic_timer + 8'h01);
      end
      logic_output <= (logic_timer < logic_dutyCycle);
      case(io_apb_PADDR)
        8'h0 : begin
          if(control_isWrite) begin
            logic_enable <= io_apb_PWDATA[0];
          end
        end
        default : begin
        end
      endcase
    end
  end

  always @(posedge clk) begin
    case(io_apb_PADDR)
      8'h04 : begin
        if(control_isWrite) begin
          logic_dutyCycle <= _zz_logic_dutyCycle[7:0];
        end
      end
      default : begin
      end
    endcase
  end


endmodule
