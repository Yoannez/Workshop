// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : UartCtrlRx
// Git hash  : 89d7543c7219f82d1991c9174f1b313aba4435ca

`timescale 1ns/1ps 

module UartCtrlRx (
  input               io_rxd,
  input               io_samplingTick,
  output reg          io_read_valid,
  output     [7:0]    io_read_payload,
  input               clk,
  input               reset
);
  localparam stateMachine_enumDef_BOOT = 3'd0;
  localparam stateMachine_enumDef_IDLE = 3'd1;
  localparam stateMachine_enumDef_START = 3'd2;
  localparam stateMachine_enumDef_DATA = 3'd3;
  localparam stateMachine_enumDef_STOP = 3'd4;

  wire                _zz_sampler_value;
  wire                _zz_sampler_value_1;
  wire                _zz_sampler_value_2;
  wire                _zz_sampler_value_3;
  wire                _zz_sampler_value_4;
  wire                _zz_sampler_value_5;
  wire                _zz_sampler_value_6;
  wire                sampler_samples_0;
  wire                sampler_samples_1;
  wire                sampler_samples_2;
  wire                sampler_samples_3;
  wire                sampler_samples_4;
  reg                 _zz_sampler_samples_0;
  reg                 _zz_sampler_samples_0_1;
  reg                 _zz_sampler_samples_1;
  reg                 _zz_sampler_samples_2;
  reg                 _zz_sampler_samples_3;
  reg                 _zz_sampler_samples_4;
  reg                 sampler_value;
  reg                 sampler_tick;
  reg        [2:0]    bitTimer_counter;
  reg                 bitTimer_recenter;
  reg                 bitTimer_tick;
  wire                when_UartCtrlRx_l47;
  reg        [2:0]    bitCounter_value;
  reg                 bitCounter_clear;
  wire                stateMachine_wantExit;
  reg                 stateMachine_wantStart;
  wire                stateMachine_wantKill;
  reg        [7:0]    stateMachine_buffer;
  reg        [2:0]    stateMachine_stateReg;
  reg        [2:0]    stateMachine_stateNext;
  wire                when_UartCtrlRx_l85;
  wire                when_UartCtrlRx_l99;
  `ifndef SYNTHESIS
  reg [39:0] stateMachine_stateReg_string;
  reg [39:0] stateMachine_stateNext_string;
  `endif


  assign _zz_sampler_value = ((((1'b0 || ((_zz_sampler_value_1 && sampler_samples_1) && sampler_samples_2)) || (((_zz_sampler_value_2 && sampler_samples_0) && sampler_samples_1) && sampler_samples_3)) || (((1'b1 && sampler_samples_0) && sampler_samples_2) && sampler_samples_3)) || (((1'b1 && sampler_samples_1) && sampler_samples_2) && sampler_samples_3));
  assign _zz_sampler_value_3 = (((1'b1 && sampler_samples_0) && sampler_samples_1) && sampler_samples_4);
  assign _zz_sampler_value_4 = ((1'b1 && sampler_samples_0) && sampler_samples_2);
  assign _zz_sampler_value_5 = (1'b1 && sampler_samples_1);
  assign _zz_sampler_value_6 = 1'b1;
  assign _zz_sampler_value_1 = (1'b1 && sampler_samples_0);
  assign _zz_sampler_value_2 = 1'b1;
  `ifndef SYNTHESIS
  always @(*) begin
    case(stateMachine_stateReg)
      stateMachine_enumDef_BOOT : stateMachine_stateReg_string = "BOOT ";
      stateMachine_enumDef_IDLE : stateMachine_stateReg_string = "IDLE ";
      stateMachine_enumDef_START : stateMachine_stateReg_string = "START";
      stateMachine_enumDef_DATA : stateMachine_stateReg_string = "DATA ";
      stateMachine_enumDef_STOP : stateMachine_stateReg_string = "STOP ";
      default : stateMachine_stateReg_string = "?????";
    endcase
  end
  always @(*) begin
    case(stateMachine_stateNext)
      stateMachine_enumDef_BOOT : stateMachine_stateNext_string = "BOOT ";
      stateMachine_enumDef_IDLE : stateMachine_stateNext_string = "IDLE ";
      stateMachine_enumDef_START : stateMachine_stateNext_string = "START";
      stateMachine_enumDef_DATA : stateMachine_stateNext_string = "DATA ";
      stateMachine_enumDef_STOP : stateMachine_stateNext_string = "STOP ";
      default : stateMachine_stateNext_string = "?????";
    endcase
  end
  `endif

  assign sampler_samples_0 = _zz_sampler_samples_0_1;
  assign sampler_samples_1 = _zz_sampler_samples_1;
  assign sampler_samples_2 = _zz_sampler_samples_2;
  assign sampler_samples_3 = _zz_sampler_samples_3;
  assign sampler_samples_4 = _zz_sampler_samples_4;
  always @(*) begin
    bitTimer_recenter = 1'b0;
    case(stateMachine_stateReg)
      stateMachine_enumDef_IDLE : begin
        if(when_UartCtrlRx_l85) begin
          bitTimer_recenter = 1'b1;
        end
      end
      stateMachine_enumDef_START : begin
      end
      stateMachine_enumDef_DATA : begin
      end
      stateMachine_enumDef_STOP : begin
      end
      default : begin
      end
    endcase
  end

  always @(*) begin
    bitTimer_tick = 1'b0;
    if(sampler_tick) begin
      if(when_UartCtrlRx_l47) begin
        bitTimer_tick = 1'b1;
      end
    end
  end

  assign when_UartCtrlRx_l47 = (bitTimer_counter == 3'b000);
  always @(*) begin
    bitCounter_clear = 1'b0;
    case(stateMachine_stateReg)
      stateMachine_enumDef_IDLE : begin
      end
      stateMachine_enumDef_START : begin
        if(bitTimer_tick) begin
          bitCounter_clear = 1'b1;
        end
      end
      stateMachine_enumDef_DATA : begin
      end
      stateMachine_enumDef_STOP : begin
      end
      default : begin
      end
    endcase
  end

  assign stateMachine_wantExit = 1'b0;
  always @(*) begin
    stateMachine_wantStart = 1'b0;
    case(stateMachine_stateReg)
      stateMachine_enumDef_IDLE : begin
      end
      stateMachine_enumDef_START : begin
      end
      stateMachine_enumDef_DATA : begin
      end
      stateMachine_enumDef_STOP : begin
      end
      default : begin
        stateMachine_wantStart = 1'b1;
      end
    endcase
  end

  assign stateMachine_wantKill = 1'b0;
  always @(*) begin
    io_read_valid = 1'b0;
    case(stateMachine_stateReg)
      stateMachine_enumDef_IDLE : begin
      end
      stateMachine_enumDef_START : begin
      end
      stateMachine_enumDef_DATA : begin
      end
      stateMachine_enumDef_STOP : begin
        if(bitTimer_tick) begin
          io_read_valid = 1'b1;
        end
      end
      default : begin
      end
    endcase
  end

  assign io_read_payload = stateMachine_buffer;
  always @(*) begin
    stateMachine_stateNext = stateMachine_stateReg;
    case(stateMachine_stateReg)
      stateMachine_enumDef_IDLE : begin
        if(when_UartCtrlRx_l85) begin
          stateMachine_stateNext = stateMachine_enumDef_START;
        end
      end
      stateMachine_enumDef_START : begin
        if(bitTimer_tick) begin
          stateMachine_stateNext = stateMachine_enumDef_DATA;
        end
      end
      stateMachine_enumDef_DATA : begin
        if(bitTimer_tick) begin
          if(when_UartCtrlRx_l99) begin
            stateMachine_stateNext = stateMachine_enumDef_STOP;
          end
        end
      end
      stateMachine_enumDef_STOP : begin
        if(bitTimer_tick) begin
          stateMachine_stateNext = stateMachine_enumDef_IDLE;
        end
      end
      default : begin
      end
    endcase
    if(stateMachine_wantStart) begin
      stateMachine_stateNext = stateMachine_enumDef_IDLE;
    end
    if(stateMachine_wantKill) begin
      stateMachine_stateNext = stateMachine_enumDef_BOOT;
    end
  end

  assign when_UartCtrlRx_l85 = (sampler_tick && (! sampler_value));
  assign when_UartCtrlRx_l99 = (bitCounter_value == 3'b111);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      _zz_sampler_samples_0 <= 1'b1;
      _zz_sampler_samples_0_1 <= 1'b1;
      _zz_sampler_samples_1 <= 1'b1;
      _zz_sampler_samples_2 <= 1'b1;
      _zz_sampler_samples_3 <= 1'b1;
      _zz_sampler_samples_4 <= 1'b1;
      sampler_value <= 1'b1;
      sampler_tick <= 1'b0;
      stateMachine_stateReg <= stateMachine_enumDef_BOOT;
    end else begin
      if(io_samplingTick) begin
        _zz_sampler_samples_0 <= io_rxd;
      end
      if(io_samplingTick) begin
        _zz_sampler_samples_0_1 <= _zz_sampler_samples_0;
      end
      if(io_samplingTick) begin
        _zz_sampler_samples_1 <= _zz_sampler_samples_0_1;
      end
      if(io_samplingTick) begin
        _zz_sampler_samples_2 <= _zz_sampler_samples_1;
      end
      if(io_samplingTick) begin
        _zz_sampler_samples_3 <= _zz_sampler_samples_2;
      end
      if(io_samplingTick) begin
        _zz_sampler_samples_4 <= _zz_sampler_samples_3;
      end
      sampler_value <= ((((((_zz_sampler_value || _zz_sampler_value_3) || (_zz_sampler_value_4 && sampler_samples_4)) || ((_zz_sampler_value_5 && sampler_samples_2) && sampler_samples_4)) || (((_zz_sampler_value_6 && sampler_samples_0) && sampler_samples_3) && sampler_samples_4)) || (((1'b1 && sampler_samples_1) && sampler_samples_3) && sampler_samples_4)) || (((1'b1 && sampler_samples_2) && sampler_samples_3) && sampler_samples_4));
      sampler_tick <= io_samplingTick;
      stateMachine_stateReg <= stateMachine_stateNext;
    end
  end

  always @(posedge clk) begin
    if(sampler_tick) begin
      bitTimer_counter <= (bitTimer_counter - 3'b001);
    end
    if(bitTimer_recenter) begin
      bitTimer_counter <= 3'b010;
    end
    if(bitTimer_tick) begin
      bitCounter_value <= (bitCounter_value + 3'b001);
    end
    if(bitCounter_clear) begin
      bitCounter_value <= 3'b000;
    end
    case(stateMachine_stateReg)
      stateMachine_enumDef_IDLE : begin
      end
      stateMachine_enumDef_START : begin
      end
      stateMachine_enumDef_DATA : begin
        if(bitTimer_tick) begin
          stateMachine_buffer[bitCounter_value] <= sampler_value;
        end
      end
      stateMachine_enumDef_STOP : begin
      end
      default : begin
      end
    endcase
  end


endmodule
