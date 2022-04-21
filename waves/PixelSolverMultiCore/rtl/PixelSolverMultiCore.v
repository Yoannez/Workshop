// Generator : SpinalHDL v1.6.4    git head : 598c18959149eb18e5eee5b0aa3eef01ecaa41a1
// Component : PixelSolverMultiCore
// Git hash  : 89d7543c7219f82d1991c9174f1b313aba4435ca

`timescale 1ns/1ps 

module PixelSolverMultiCore (
  input               io_cmd_valid,
  output              io_cmd_ready,
  input      [27:0]   io_cmd_payload_x,
  input      [27:0]   io_cmd_payload_y,
  output              io_rsp_valid,
  input               io_rsp_ready,
  output     [3:0]    io_rsp_payload_iteration,
  input               clk,
  input               reset
);

  reg                 dispatcher_1_io_outputs_0_ready;
  reg                 dispatcher_1_io_outputs_1_ready;
  reg                 dispatcher_1_io_outputs_2_ready;
  reg                 dispatcher_1_io_outputs_3_ready;
  reg                 dispatcher_1_io_outputs_4_ready;
  reg                 dispatcher_1_io_outputs_5_ready;
  reg                 dispatcher_1_io_outputs_6_ready;
  reg                 dispatcher_1_io_outputs_7_ready;
  reg                 pixelSolvers_0_io_rsp_ready;
  reg                 pixelSolvers_1_io_rsp_ready;
  reg                 pixelSolvers_2_io_rsp_ready;
  reg                 pixelSolvers_3_io_rsp_ready;
  reg                 pixelSolvers_4_io_rsp_ready;
  reg                 pixelSolvers_5_io_rsp_ready;
  reg                 pixelSolvers_6_io_rsp_ready;
  reg                 pixelSolvers_7_io_rsp_ready;
  wire                dispatcher_1_io_input_ready;
  wire                dispatcher_1_io_outputs_0_valid;
  wire       [27:0]   dispatcher_1_io_outputs_0_payload_x;
  wire       [27:0]   dispatcher_1_io_outputs_0_payload_y;
  wire                dispatcher_1_io_outputs_1_valid;
  wire       [27:0]   dispatcher_1_io_outputs_1_payload_x;
  wire       [27:0]   dispatcher_1_io_outputs_1_payload_y;
  wire                dispatcher_1_io_outputs_2_valid;
  wire       [27:0]   dispatcher_1_io_outputs_2_payload_x;
  wire       [27:0]   dispatcher_1_io_outputs_2_payload_y;
  wire                dispatcher_1_io_outputs_3_valid;
  wire       [27:0]   dispatcher_1_io_outputs_3_payload_x;
  wire       [27:0]   dispatcher_1_io_outputs_3_payload_y;
  wire                dispatcher_1_io_outputs_4_valid;
  wire       [27:0]   dispatcher_1_io_outputs_4_payload_x;
  wire       [27:0]   dispatcher_1_io_outputs_4_payload_y;
  wire                dispatcher_1_io_outputs_5_valid;
  wire       [27:0]   dispatcher_1_io_outputs_5_payload_x;
  wire       [27:0]   dispatcher_1_io_outputs_5_payload_y;
  wire                dispatcher_1_io_outputs_6_valid;
  wire       [27:0]   dispatcher_1_io_outputs_6_payload_x;
  wire       [27:0]   dispatcher_1_io_outputs_6_payload_y;
  wire                dispatcher_1_io_outputs_7_valid;
  wire       [27:0]   dispatcher_1_io_outputs_7_payload_x;
  wire       [27:0]   dispatcher_1_io_outputs_7_payload_y;
  wire                pixelSolvers_0_io_cmd_ready;
  wire                pixelSolvers_0_io_rsp_valid;
  wire       [3:0]    pixelSolvers_0_io_rsp_payload_iteration;
  wire                pixelSolvers_1_io_cmd_ready;
  wire                pixelSolvers_1_io_rsp_valid;
  wire       [3:0]    pixelSolvers_1_io_rsp_payload_iteration;
  wire                pixelSolvers_2_io_cmd_ready;
  wire                pixelSolvers_2_io_rsp_valid;
  wire       [3:0]    pixelSolvers_2_io_rsp_payload_iteration;
  wire                pixelSolvers_3_io_cmd_ready;
  wire                pixelSolvers_3_io_rsp_valid;
  wire       [3:0]    pixelSolvers_3_io_rsp_payload_iteration;
  wire                pixelSolvers_4_io_cmd_ready;
  wire                pixelSolvers_4_io_rsp_valid;
  wire       [3:0]    pixelSolvers_4_io_rsp_payload_iteration;
  wire                pixelSolvers_5_io_cmd_ready;
  wire                pixelSolvers_5_io_rsp_valid;
  wire       [3:0]    pixelSolvers_5_io_rsp_payload_iteration;
  wire                pixelSolvers_6_io_cmd_ready;
  wire                pixelSolvers_6_io_rsp_valid;
  wire       [3:0]    pixelSolvers_6_io_rsp_payload_iteration;
  wire                pixelSolvers_7_io_cmd_ready;
  wire                pixelSolvers_7_io_rsp_valid;
  wire       [3:0]    pixelSolvers_7_io_rsp_payload_iteration;
  wire                arbiter_1_io_inputs_0_ready;
  wire                arbiter_1_io_inputs_1_ready;
  wire                arbiter_1_io_inputs_2_ready;
  wire                arbiter_1_io_inputs_3_ready;
  wire                arbiter_1_io_inputs_4_ready;
  wire                arbiter_1_io_inputs_5_ready;
  wire                arbiter_1_io_inputs_6_ready;
  wire                arbiter_1_io_inputs_7_ready;
  wire                arbiter_1_io_output_valid;
  wire       [3:0]    arbiter_1_io_output_payload_iteration;
  wire                dispatcher_1_io_outputs_0_m2sPipe_valid;
  wire                dispatcher_1_io_outputs_0_m2sPipe_ready;
  wire       [27:0]   dispatcher_1_io_outputs_0_m2sPipe_payload_x;
  wire       [27:0]   dispatcher_1_io_outputs_0_m2sPipe_payload_y;
  reg                 dispatcher_1_io_outputs_0_rValid;
  reg        [27:0]   dispatcher_1_io_outputs_0_rData_x;
  reg        [27:0]   dispatcher_1_io_outputs_0_rData_y;
  wire                when_Stream_l342;
  wire                pixelSolvers_0_io_rsp_m2sPipe_valid;
  wire                pixelSolvers_0_io_rsp_m2sPipe_ready;
  wire       [3:0]    pixelSolvers_0_io_rsp_m2sPipe_payload_iteration;
  reg                 pixelSolvers_0_io_rsp_rValid;
  reg        [3:0]    pixelSolvers_0_io_rsp_rData_iteration;
  wire                when_Stream_l342_1;
  wire                dispatcher_1_io_outputs_1_m2sPipe_valid;
  wire                dispatcher_1_io_outputs_1_m2sPipe_ready;
  wire       [27:0]   dispatcher_1_io_outputs_1_m2sPipe_payload_x;
  wire       [27:0]   dispatcher_1_io_outputs_1_m2sPipe_payload_y;
  reg                 dispatcher_1_io_outputs_1_rValid;
  reg        [27:0]   dispatcher_1_io_outputs_1_rData_x;
  reg        [27:0]   dispatcher_1_io_outputs_1_rData_y;
  wire                when_Stream_l342_2;
  wire                pixelSolvers_1_io_rsp_m2sPipe_valid;
  wire                pixelSolvers_1_io_rsp_m2sPipe_ready;
  wire       [3:0]    pixelSolvers_1_io_rsp_m2sPipe_payload_iteration;
  reg                 pixelSolvers_1_io_rsp_rValid;
  reg        [3:0]    pixelSolvers_1_io_rsp_rData_iteration;
  wire                when_Stream_l342_3;
  wire                dispatcher_1_io_outputs_2_m2sPipe_valid;
  wire                dispatcher_1_io_outputs_2_m2sPipe_ready;
  wire       [27:0]   dispatcher_1_io_outputs_2_m2sPipe_payload_x;
  wire       [27:0]   dispatcher_1_io_outputs_2_m2sPipe_payload_y;
  reg                 dispatcher_1_io_outputs_2_rValid;
  reg        [27:0]   dispatcher_1_io_outputs_2_rData_x;
  reg        [27:0]   dispatcher_1_io_outputs_2_rData_y;
  wire                when_Stream_l342_4;
  wire                pixelSolvers_2_io_rsp_m2sPipe_valid;
  wire                pixelSolvers_2_io_rsp_m2sPipe_ready;
  wire       [3:0]    pixelSolvers_2_io_rsp_m2sPipe_payload_iteration;
  reg                 pixelSolvers_2_io_rsp_rValid;
  reg        [3:0]    pixelSolvers_2_io_rsp_rData_iteration;
  wire                when_Stream_l342_5;
  wire                dispatcher_1_io_outputs_3_m2sPipe_valid;
  wire                dispatcher_1_io_outputs_3_m2sPipe_ready;
  wire       [27:0]   dispatcher_1_io_outputs_3_m2sPipe_payload_x;
  wire       [27:0]   dispatcher_1_io_outputs_3_m2sPipe_payload_y;
  reg                 dispatcher_1_io_outputs_3_rValid;
  reg        [27:0]   dispatcher_1_io_outputs_3_rData_x;
  reg        [27:0]   dispatcher_1_io_outputs_3_rData_y;
  wire                when_Stream_l342_6;
  wire                pixelSolvers_3_io_rsp_m2sPipe_valid;
  wire                pixelSolvers_3_io_rsp_m2sPipe_ready;
  wire       [3:0]    pixelSolvers_3_io_rsp_m2sPipe_payload_iteration;
  reg                 pixelSolvers_3_io_rsp_rValid;
  reg        [3:0]    pixelSolvers_3_io_rsp_rData_iteration;
  wire                when_Stream_l342_7;
  wire                dispatcher_1_io_outputs_4_m2sPipe_valid;
  wire                dispatcher_1_io_outputs_4_m2sPipe_ready;
  wire       [27:0]   dispatcher_1_io_outputs_4_m2sPipe_payload_x;
  wire       [27:0]   dispatcher_1_io_outputs_4_m2sPipe_payload_y;
  reg                 dispatcher_1_io_outputs_4_rValid;
  reg        [27:0]   dispatcher_1_io_outputs_4_rData_x;
  reg        [27:0]   dispatcher_1_io_outputs_4_rData_y;
  wire                when_Stream_l342_8;
  wire                pixelSolvers_4_io_rsp_m2sPipe_valid;
  wire                pixelSolvers_4_io_rsp_m2sPipe_ready;
  wire       [3:0]    pixelSolvers_4_io_rsp_m2sPipe_payload_iteration;
  reg                 pixelSolvers_4_io_rsp_rValid;
  reg        [3:0]    pixelSolvers_4_io_rsp_rData_iteration;
  wire                when_Stream_l342_9;
  wire                dispatcher_1_io_outputs_5_m2sPipe_valid;
  wire                dispatcher_1_io_outputs_5_m2sPipe_ready;
  wire       [27:0]   dispatcher_1_io_outputs_5_m2sPipe_payload_x;
  wire       [27:0]   dispatcher_1_io_outputs_5_m2sPipe_payload_y;
  reg                 dispatcher_1_io_outputs_5_rValid;
  reg        [27:0]   dispatcher_1_io_outputs_5_rData_x;
  reg        [27:0]   dispatcher_1_io_outputs_5_rData_y;
  wire                when_Stream_l342_10;
  wire                pixelSolvers_5_io_rsp_m2sPipe_valid;
  wire                pixelSolvers_5_io_rsp_m2sPipe_ready;
  wire       [3:0]    pixelSolvers_5_io_rsp_m2sPipe_payload_iteration;
  reg                 pixelSolvers_5_io_rsp_rValid;
  reg        [3:0]    pixelSolvers_5_io_rsp_rData_iteration;
  wire                when_Stream_l342_11;
  wire                dispatcher_1_io_outputs_6_m2sPipe_valid;
  wire                dispatcher_1_io_outputs_6_m2sPipe_ready;
  wire       [27:0]   dispatcher_1_io_outputs_6_m2sPipe_payload_x;
  wire       [27:0]   dispatcher_1_io_outputs_6_m2sPipe_payload_y;
  reg                 dispatcher_1_io_outputs_6_rValid;
  reg        [27:0]   dispatcher_1_io_outputs_6_rData_x;
  reg        [27:0]   dispatcher_1_io_outputs_6_rData_y;
  wire                when_Stream_l342_12;
  wire                pixelSolvers_6_io_rsp_m2sPipe_valid;
  wire                pixelSolvers_6_io_rsp_m2sPipe_ready;
  wire       [3:0]    pixelSolvers_6_io_rsp_m2sPipe_payload_iteration;
  reg                 pixelSolvers_6_io_rsp_rValid;
  reg        [3:0]    pixelSolvers_6_io_rsp_rData_iteration;
  wire                when_Stream_l342_13;
  wire                dispatcher_1_io_outputs_7_m2sPipe_valid;
  wire                dispatcher_1_io_outputs_7_m2sPipe_ready;
  wire       [27:0]   dispatcher_1_io_outputs_7_m2sPipe_payload_x;
  wire       [27:0]   dispatcher_1_io_outputs_7_m2sPipe_payload_y;
  reg                 dispatcher_1_io_outputs_7_rValid;
  reg        [27:0]   dispatcher_1_io_outputs_7_rData_x;
  reg        [27:0]   dispatcher_1_io_outputs_7_rData_y;
  wire                when_Stream_l342_14;
  wire                pixelSolvers_7_io_rsp_m2sPipe_valid;
  wire                pixelSolvers_7_io_rsp_m2sPipe_ready;
  wire       [3:0]    pixelSolvers_7_io_rsp_m2sPipe_payload_iteration;
  reg                 pixelSolvers_7_io_rsp_rValid;
  reg        [3:0]    pixelSolvers_7_io_rsp_rData_iteration;
  wire                when_Stream_l342_15;

  Dispatcher dispatcher_1 (
    .io_input_valid            (io_cmd_valid                               ), //i
    .io_input_ready            (dispatcher_1_io_input_ready                ), //o
    .io_input_payload_x        (io_cmd_payload_x[27:0]                     ), //i
    .io_input_payload_y        (io_cmd_payload_y[27:0]                     ), //i
    .io_outputs_0_valid        (dispatcher_1_io_outputs_0_valid            ), //o
    .io_outputs_0_ready        (dispatcher_1_io_outputs_0_ready            ), //i
    .io_outputs_0_payload_x    (dispatcher_1_io_outputs_0_payload_x[27:0]  ), //o
    .io_outputs_0_payload_y    (dispatcher_1_io_outputs_0_payload_y[27:0]  ), //o
    .io_outputs_1_valid        (dispatcher_1_io_outputs_1_valid            ), //o
    .io_outputs_1_ready        (dispatcher_1_io_outputs_1_ready            ), //i
    .io_outputs_1_payload_x    (dispatcher_1_io_outputs_1_payload_x[27:0]  ), //o
    .io_outputs_1_payload_y    (dispatcher_1_io_outputs_1_payload_y[27:0]  ), //o
    .io_outputs_2_valid        (dispatcher_1_io_outputs_2_valid            ), //o
    .io_outputs_2_ready        (dispatcher_1_io_outputs_2_ready            ), //i
    .io_outputs_2_payload_x    (dispatcher_1_io_outputs_2_payload_x[27:0]  ), //o
    .io_outputs_2_payload_y    (dispatcher_1_io_outputs_2_payload_y[27:0]  ), //o
    .io_outputs_3_valid        (dispatcher_1_io_outputs_3_valid            ), //o
    .io_outputs_3_ready        (dispatcher_1_io_outputs_3_ready            ), //i
    .io_outputs_3_payload_x    (dispatcher_1_io_outputs_3_payload_x[27:0]  ), //o
    .io_outputs_3_payload_y    (dispatcher_1_io_outputs_3_payload_y[27:0]  ), //o
    .io_outputs_4_valid        (dispatcher_1_io_outputs_4_valid            ), //o
    .io_outputs_4_ready        (dispatcher_1_io_outputs_4_ready            ), //i
    .io_outputs_4_payload_x    (dispatcher_1_io_outputs_4_payload_x[27:0]  ), //o
    .io_outputs_4_payload_y    (dispatcher_1_io_outputs_4_payload_y[27:0]  ), //o
    .io_outputs_5_valid        (dispatcher_1_io_outputs_5_valid            ), //o
    .io_outputs_5_ready        (dispatcher_1_io_outputs_5_ready            ), //i
    .io_outputs_5_payload_x    (dispatcher_1_io_outputs_5_payload_x[27:0]  ), //o
    .io_outputs_5_payload_y    (dispatcher_1_io_outputs_5_payload_y[27:0]  ), //o
    .io_outputs_6_valid        (dispatcher_1_io_outputs_6_valid            ), //o
    .io_outputs_6_ready        (dispatcher_1_io_outputs_6_ready            ), //i
    .io_outputs_6_payload_x    (dispatcher_1_io_outputs_6_payload_x[27:0]  ), //o
    .io_outputs_6_payload_y    (dispatcher_1_io_outputs_6_payload_y[27:0]  ), //o
    .io_outputs_7_valid        (dispatcher_1_io_outputs_7_valid            ), //o
    .io_outputs_7_ready        (dispatcher_1_io_outputs_7_ready            ), //i
    .io_outputs_7_payload_x    (dispatcher_1_io_outputs_7_payload_x[27:0]  ), //o
    .io_outputs_7_payload_y    (dispatcher_1_io_outputs_7_payload_y[27:0]  ), //o
    .clk                       (clk                                        ), //i
    .reset                     (reset                                      )  //i
  );
  PixelSolver pixelSolvers_0 (
    .io_cmd_valid                (dispatcher_1_io_outputs_0_m2sPipe_valid            ), //i
    .io_cmd_ready                (pixelSolvers_0_io_cmd_ready                        ), //o
    .io_cmd_payload_x            (dispatcher_1_io_outputs_0_m2sPipe_payload_x[27:0]  ), //i
    .io_cmd_payload_y            (dispatcher_1_io_outputs_0_m2sPipe_payload_y[27:0]  ), //i
    .io_rsp_valid                (pixelSolvers_0_io_rsp_valid                        ), //o
    .io_rsp_ready                (pixelSolvers_0_io_rsp_ready                        ), //i
    .io_rsp_payload_iteration    (pixelSolvers_0_io_rsp_payload_iteration[3:0]       ), //o
    .clk                         (clk                                                ), //i
    .reset                       (reset                                              )  //i
  );
  PixelSolver pixelSolvers_1 (
    .io_cmd_valid                (dispatcher_1_io_outputs_1_m2sPipe_valid            ), //i
    .io_cmd_ready                (pixelSolvers_1_io_cmd_ready                        ), //o
    .io_cmd_payload_x            (dispatcher_1_io_outputs_1_m2sPipe_payload_x[27:0]  ), //i
    .io_cmd_payload_y            (dispatcher_1_io_outputs_1_m2sPipe_payload_y[27:0]  ), //i
    .io_rsp_valid                (pixelSolvers_1_io_rsp_valid                        ), //o
    .io_rsp_ready                (pixelSolvers_1_io_rsp_ready                        ), //i
    .io_rsp_payload_iteration    (pixelSolvers_1_io_rsp_payload_iteration[3:0]       ), //o
    .clk                         (clk                                                ), //i
    .reset                       (reset                                              )  //i
  );
  PixelSolver pixelSolvers_2 (
    .io_cmd_valid                (dispatcher_1_io_outputs_2_m2sPipe_valid            ), //i
    .io_cmd_ready                (pixelSolvers_2_io_cmd_ready                        ), //o
    .io_cmd_payload_x            (dispatcher_1_io_outputs_2_m2sPipe_payload_x[27:0]  ), //i
    .io_cmd_payload_y            (dispatcher_1_io_outputs_2_m2sPipe_payload_y[27:0]  ), //i
    .io_rsp_valid                (pixelSolvers_2_io_rsp_valid                        ), //o
    .io_rsp_ready                (pixelSolvers_2_io_rsp_ready                        ), //i
    .io_rsp_payload_iteration    (pixelSolvers_2_io_rsp_payload_iteration[3:0]       ), //o
    .clk                         (clk                                                ), //i
    .reset                       (reset                                              )  //i
  );
  PixelSolver pixelSolvers_3 (
    .io_cmd_valid                (dispatcher_1_io_outputs_3_m2sPipe_valid            ), //i
    .io_cmd_ready                (pixelSolvers_3_io_cmd_ready                        ), //o
    .io_cmd_payload_x            (dispatcher_1_io_outputs_3_m2sPipe_payload_x[27:0]  ), //i
    .io_cmd_payload_y            (dispatcher_1_io_outputs_3_m2sPipe_payload_y[27:0]  ), //i
    .io_rsp_valid                (pixelSolvers_3_io_rsp_valid                        ), //o
    .io_rsp_ready                (pixelSolvers_3_io_rsp_ready                        ), //i
    .io_rsp_payload_iteration    (pixelSolvers_3_io_rsp_payload_iteration[3:0]       ), //o
    .clk                         (clk                                                ), //i
    .reset                       (reset                                              )  //i
  );
  PixelSolver pixelSolvers_4 (
    .io_cmd_valid                (dispatcher_1_io_outputs_4_m2sPipe_valid            ), //i
    .io_cmd_ready                (pixelSolvers_4_io_cmd_ready                        ), //o
    .io_cmd_payload_x            (dispatcher_1_io_outputs_4_m2sPipe_payload_x[27:0]  ), //i
    .io_cmd_payload_y            (dispatcher_1_io_outputs_4_m2sPipe_payload_y[27:0]  ), //i
    .io_rsp_valid                (pixelSolvers_4_io_rsp_valid                        ), //o
    .io_rsp_ready                (pixelSolvers_4_io_rsp_ready                        ), //i
    .io_rsp_payload_iteration    (pixelSolvers_4_io_rsp_payload_iteration[3:0]       ), //o
    .clk                         (clk                                                ), //i
    .reset                       (reset                                              )  //i
  );
  PixelSolver pixelSolvers_5 (
    .io_cmd_valid                (dispatcher_1_io_outputs_5_m2sPipe_valid            ), //i
    .io_cmd_ready                (pixelSolvers_5_io_cmd_ready                        ), //o
    .io_cmd_payload_x            (dispatcher_1_io_outputs_5_m2sPipe_payload_x[27:0]  ), //i
    .io_cmd_payload_y            (dispatcher_1_io_outputs_5_m2sPipe_payload_y[27:0]  ), //i
    .io_rsp_valid                (pixelSolvers_5_io_rsp_valid                        ), //o
    .io_rsp_ready                (pixelSolvers_5_io_rsp_ready                        ), //i
    .io_rsp_payload_iteration    (pixelSolvers_5_io_rsp_payload_iteration[3:0]       ), //o
    .clk                         (clk                                                ), //i
    .reset                       (reset                                              )  //i
  );
  PixelSolver pixelSolvers_6 (
    .io_cmd_valid                (dispatcher_1_io_outputs_6_m2sPipe_valid            ), //i
    .io_cmd_ready                (pixelSolvers_6_io_cmd_ready                        ), //o
    .io_cmd_payload_x            (dispatcher_1_io_outputs_6_m2sPipe_payload_x[27:0]  ), //i
    .io_cmd_payload_y            (dispatcher_1_io_outputs_6_m2sPipe_payload_y[27:0]  ), //i
    .io_rsp_valid                (pixelSolvers_6_io_rsp_valid                        ), //o
    .io_rsp_ready                (pixelSolvers_6_io_rsp_ready                        ), //i
    .io_rsp_payload_iteration    (pixelSolvers_6_io_rsp_payload_iteration[3:0]       ), //o
    .clk                         (clk                                                ), //i
    .reset                       (reset                                              )  //i
  );
  PixelSolver pixelSolvers_7 (
    .io_cmd_valid                (dispatcher_1_io_outputs_7_m2sPipe_valid            ), //i
    .io_cmd_ready                (pixelSolvers_7_io_cmd_ready                        ), //o
    .io_cmd_payload_x            (dispatcher_1_io_outputs_7_m2sPipe_payload_x[27:0]  ), //i
    .io_cmd_payload_y            (dispatcher_1_io_outputs_7_m2sPipe_payload_y[27:0]  ), //i
    .io_rsp_valid                (pixelSolvers_7_io_rsp_valid                        ), //o
    .io_rsp_ready                (pixelSolvers_7_io_rsp_ready                        ), //i
    .io_rsp_payload_iteration    (pixelSolvers_7_io_rsp_payload_iteration[3:0]       ), //o
    .clk                         (clk                                                ), //i
    .reset                       (reset                                              )  //i
  );
  Arbiter arbiter_1 (
    .io_inputs_0_valid                (pixelSolvers_0_io_rsp_m2sPipe_valid                   ), //i
    .io_inputs_0_ready                (arbiter_1_io_inputs_0_ready                           ), //o
    .io_inputs_0_payload_iteration    (pixelSolvers_0_io_rsp_m2sPipe_payload_iteration[3:0]  ), //i
    .io_inputs_1_valid                (pixelSolvers_1_io_rsp_m2sPipe_valid                   ), //i
    .io_inputs_1_ready                (arbiter_1_io_inputs_1_ready                           ), //o
    .io_inputs_1_payload_iteration    (pixelSolvers_1_io_rsp_m2sPipe_payload_iteration[3:0]  ), //i
    .io_inputs_2_valid                (pixelSolvers_2_io_rsp_m2sPipe_valid                   ), //i
    .io_inputs_2_ready                (arbiter_1_io_inputs_2_ready                           ), //o
    .io_inputs_2_payload_iteration    (pixelSolvers_2_io_rsp_m2sPipe_payload_iteration[3:0]  ), //i
    .io_inputs_3_valid                (pixelSolvers_3_io_rsp_m2sPipe_valid                   ), //i
    .io_inputs_3_ready                (arbiter_1_io_inputs_3_ready                           ), //o
    .io_inputs_3_payload_iteration    (pixelSolvers_3_io_rsp_m2sPipe_payload_iteration[3:0]  ), //i
    .io_inputs_4_valid                (pixelSolvers_4_io_rsp_m2sPipe_valid                   ), //i
    .io_inputs_4_ready                (arbiter_1_io_inputs_4_ready                           ), //o
    .io_inputs_4_payload_iteration    (pixelSolvers_4_io_rsp_m2sPipe_payload_iteration[3:0]  ), //i
    .io_inputs_5_valid                (pixelSolvers_5_io_rsp_m2sPipe_valid                   ), //i
    .io_inputs_5_ready                (arbiter_1_io_inputs_5_ready                           ), //o
    .io_inputs_5_payload_iteration    (pixelSolvers_5_io_rsp_m2sPipe_payload_iteration[3:0]  ), //i
    .io_inputs_6_valid                (pixelSolvers_6_io_rsp_m2sPipe_valid                   ), //i
    .io_inputs_6_ready                (arbiter_1_io_inputs_6_ready                           ), //o
    .io_inputs_6_payload_iteration    (pixelSolvers_6_io_rsp_m2sPipe_payload_iteration[3:0]  ), //i
    .io_inputs_7_valid                (pixelSolvers_7_io_rsp_m2sPipe_valid                   ), //i
    .io_inputs_7_ready                (arbiter_1_io_inputs_7_ready                           ), //o
    .io_inputs_7_payload_iteration    (pixelSolvers_7_io_rsp_m2sPipe_payload_iteration[3:0]  ), //i
    .io_output_valid                  (arbiter_1_io_output_valid                             ), //o
    .io_output_ready                  (io_rsp_ready                                          ), //i
    .io_output_payload_iteration      (arbiter_1_io_output_payload_iteration[3:0]            ), //o
    .clk                              (clk                                                   ), //i
    .reset                            (reset                                                 )  //i
  );
  assign io_cmd_ready = dispatcher_1_io_input_ready;
  always @(*) begin
    dispatcher_1_io_outputs_0_ready = dispatcher_1_io_outputs_0_m2sPipe_ready;
    if(when_Stream_l342) begin
      dispatcher_1_io_outputs_0_ready = 1'b1;
    end
  end

  assign when_Stream_l342 = (! dispatcher_1_io_outputs_0_m2sPipe_valid);
  assign dispatcher_1_io_outputs_0_m2sPipe_valid = dispatcher_1_io_outputs_0_rValid;
  assign dispatcher_1_io_outputs_0_m2sPipe_payload_x = dispatcher_1_io_outputs_0_rData_x;
  assign dispatcher_1_io_outputs_0_m2sPipe_payload_y = dispatcher_1_io_outputs_0_rData_y;
  assign dispatcher_1_io_outputs_0_m2sPipe_ready = pixelSolvers_0_io_cmd_ready;
  always @(*) begin
    pixelSolvers_0_io_rsp_ready = pixelSolvers_0_io_rsp_m2sPipe_ready;
    if(when_Stream_l342_1) begin
      pixelSolvers_0_io_rsp_ready = 1'b1;
    end
  end

  assign when_Stream_l342_1 = (! pixelSolvers_0_io_rsp_m2sPipe_valid);
  assign pixelSolvers_0_io_rsp_m2sPipe_valid = pixelSolvers_0_io_rsp_rValid;
  assign pixelSolvers_0_io_rsp_m2sPipe_payload_iteration = pixelSolvers_0_io_rsp_rData_iteration;
  assign pixelSolvers_0_io_rsp_m2sPipe_ready = arbiter_1_io_inputs_0_ready;
  always @(*) begin
    dispatcher_1_io_outputs_1_ready = dispatcher_1_io_outputs_1_m2sPipe_ready;
    if(when_Stream_l342_2) begin
      dispatcher_1_io_outputs_1_ready = 1'b1;
    end
  end

  assign when_Stream_l342_2 = (! dispatcher_1_io_outputs_1_m2sPipe_valid);
  assign dispatcher_1_io_outputs_1_m2sPipe_valid = dispatcher_1_io_outputs_1_rValid;
  assign dispatcher_1_io_outputs_1_m2sPipe_payload_x = dispatcher_1_io_outputs_1_rData_x;
  assign dispatcher_1_io_outputs_1_m2sPipe_payload_y = dispatcher_1_io_outputs_1_rData_y;
  assign dispatcher_1_io_outputs_1_m2sPipe_ready = pixelSolvers_1_io_cmd_ready;
  always @(*) begin
    pixelSolvers_1_io_rsp_ready = pixelSolvers_1_io_rsp_m2sPipe_ready;
    if(when_Stream_l342_3) begin
      pixelSolvers_1_io_rsp_ready = 1'b1;
    end
  end

  assign when_Stream_l342_3 = (! pixelSolvers_1_io_rsp_m2sPipe_valid);
  assign pixelSolvers_1_io_rsp_m2sPipe_valid = pixelSolvers_1_io_rsp_rValid;
  assign pixelSolvers_1_io_rsp_m2sPipe_payload_iteration = pixelSolvers_1_io_rsp_rData_iteration;
  assign pixelSolvers_1_io_rsp_m2sPipe_ready = arbiter_1_io_inputs_1_ready;
  always @(*) begin
    dispatcher_1_io_outputs_2_ready = dispatcher_1_io_outputs_2_m2sPipe_ready;
    if(when_Stream_l342_4) begin
      dispatcher_1_io_outputs_2_ready = 1'b1;
    end
  end

  assign when_Stream_l342_4 = (! dispatcher_1_io_outputs_2_m2sPipe_valid);
  assign dispatcher_1_io_outputs_2_m2sPipe_valid = dispatcher_1_io_outputs_2_rValid;
  assign dispatcher_1_io_outputs_2_m2sPipe_payload_x = dispatcher_1_io_outputs_2_rData_x;
  assign dispatcher_1_io_outputs_2_m2sPipe_payload_y = dispatcher_1_io_outputs_2_rData_y;
  assign dispatcher_1_io_outputs_2_m2sPipe_ready = pixelSolvers_2_io_cmd_ready;
  always @(*) begin
    pixelSolvers_2_io_rsp_ready = pixelSolvers_2_io_rsp_m2sPipe_ready;
    if(when_Stream_l342_5) begin
      pixelSolvers_2_io_rsp_ready = 1'b1;
    end
  end

  assign when_Stream_l342_5 = (! pixelSolvers_2_io_rsp_m2sPipe_valid);
  assign pixelSolvers_2_io_rsp_m2sPipe_valid = pixelSolvers_2_io_rsp_rValid;
  assign pixelSolvers_2_io_rsp_m2sPipe_payload_iteration = pixelSolvers_2_io_rsp_rData_iteration;
  assign pixelSolvers_2_io_rsp_m2sPipe_ready = arbiter_1_io_inputs_2_ready;
  always @(*) begin
    dispatcher_1_io_outputs_3_ready = dispatcher_1_io_outputs_3_m2sPipe_ready;
    if(when_Stream_l342_6) begin
      dispatcher_1_io_outputs_3_ready = 1'b1;
    end
  end

  assign when_Stream_l342_6 = (! dispatcher_1_io_outputs_3_m2sPipe_valid);
  assign dispatcher_1_io_outputs_3_m2sPipe_valid = dispatcher_1_io_outputs_3_rValid;
  assign dispatcher_1_io_outputs_3_m2sPipe_payload_x = dispatcher_1_io_outputs_3_rData_x;
  assign dispatcher_1_io_outputs_3_m2sPipe_payload_y = dispatcher_1_io_outputs_3_rData_y;
  assign dispatcher_1_io_outputs_3_m2sPipe_ready = pixelSolvers_3_io_cmd_ready;
  always @(*) begin
    pixelSolvers_3_io_rsp_ready = pixelSolvers_3_io_rsp_m2sPipe_ready;
    if(when_Stream_l342_7) begin
      pixelSolvers_3_io_rsp_ready = 1'b1;
    end
  end

  assign when_Stream_l342_7 = (! pixelSolvers_3_io_rsp_m2sPipe_valid);
  assign pixelSolvers_3_io_rsp_m2sPipe_valid = pixelSolvers_3_io_rsp_rValid;
  assign pixelSolvers_3_io_rsp_m2sPipe_payload_iteration = pixelSolvers_3_io_rsp_rData_iteration;
  assign pixelSolvers_3_io_rsp_m2sPipe_ready = arbiter_1_io_inputs_3_ready;
  always @(*) begin
    dispatcher_1_io_outputs_4_ready = dispatcher_1_io_outputs_4_m2sPipe_ready;
    if(when_Stream_l342_8) begin
      dispatcher_1_io_outputs_4_ready = 1'b1;
    end
  end

  assign when_Stream_l342_8 = (! dispatcher_1_io_outputs_4_m2sPipe_valid);
  assign dispatcher_1_io_outputs_4_m2sPipe_valid = dispatcher_1_io_outputs_4_rValid;
  assign dispatcher_1_io_outputs_4_m2sPipe_payload_x = dispatcher_1_io_outputs_4_rData_x;
  assign dispatcher_1_io_outputs_4_m2sPipe_payload_y = dispatcher_1_io_outputs_4_rData_y;
  assign dispatcher_1_io_outputs_4_m2sPipe_ready = pixelSolvers_4_io_cmd_ready;
  always @(*) begin
    pixelSolvers_4_io_rsp_ready = pixelSolvers_4_io_rsp_m2sPipe_ready;
    if(when_Stream_l342_9) begin
      pixelSolvers_4_io_rsp_ready = 1'b1;
    end
  end

  assign when_Stream_l342_9 = (! pixelSolvers_4_io_rsp_m2sPipe_valid);
  assign pixelSolvers_4_io_rsp_m2sPipe_valid = pixelSolvers_4_io_rsp_rValid;
  assign pixelSolvers_4_io_rsp_m2sPipe_payload_iteration = pixelSolvers_4_io_rsp_rData_iteration;
  assign pixelSolvers_4_io_rsp_m2sPipe_ready = arbiter_1_io_inputs_4_ready;
  always @(*) begin
    dispatcher_1_io_outputs_5_ready = dispatcher_1_io_outputs_5_m2sPipe_ready;
    if(when_Stream_l342_10) begin
      dispatcher_1_io_outputs_5_ready = 1'b1;
    end
  end

  assign when_Stream_l342_10 = (! dispatcher_1_io_outputs_5_m2sPipe_valid);
  assign dispatcher_1_io_outputs_5_m2sPipe_valid = dispatcher_1_io_outputs_5_rValid;
  assign dispatcher_1_io_outputs_5_m2sPipe_payload_x = dispatcher_1_io_outputs_5_rData_x;
  assign dispatcher_1_io_outputs_5_m2sPipe_payload_y = dispatcher_1_io_outputs_5_rData_y;
  assign dispatcher_1_io_outputs_5_m2sPipe_ready = pixelSolvers_5_io_cmd_ready;
  always @(*) begin
    pixelSolvers_5_io_rsp_ready = pixelSolvers_5_io_rsp_m2sPipe_ready;
    if(when_Stream_l342_11) begin
      pixelSolvers_5_io_rsp_ready = 1'b1;
    end
  end

  assign when_Stream_l342_11 = (! pixelSolvers_5_io_rsp_m2sPipe_valid);
  assign pixelSolvers_5_io_rsp_m2sPipe_valid = pixelSolvers_5_io_rsp_rValid;
  assign pixelSolvers_5_io_rsp_m2sPipe_payload_iteration = pixelSolvers_5_io_rsp_rData_iteration;
  assign pixelSolvers_5_io_rsp_m2sPipe_ready = arbiter_1_io_inputs_5_ready;
  always @(*) begin
    dispatcher_1_io_outputs_6_ready = dispatcher_1_io_outputs_6_m2sPipe_ready;
    if(when_Stream_l342_12) begin
      dispatcher_1_io_outputs_6_ready = 1'b1;
    end
  end

  assign when_Stream_l342_12 = (! dispatcher_1_io_outputs_6_m2sPipe_valid);
  assign dispatcher_1_io_outputs_6_m2sPipe_valid = dispatcher_1_io_outputs_6_rValid;
  assign dispatcher_1_io_outputs_6_m2sPipe_payload_x = dispatcher_1_io_outputs_6_rData_x;
  assign dispatcher_1_io_outputs_6_m2sPipe_payload_y = dispatcher_1_io_outputs_6_rData_y;
  assign dispatcher_1_io_outputs_6_m2sPipe_ready = pixelSolvers_6_io_cmd_ready;
  always @(*) begin
    pixelSolvers_6_io_rsp_ready = pixelSolvers_6_io_rsp_m2sPipe_ready;
    if(when_Stream_l342_13) begin
      pixelSolvers_6_io_rsp_ready = 1'b1;
    end
  end

  assign when_Stream_l342_13 = (! pixelSolvers_6_io_rsp_m2sPipe_valid);
  assign pixelSolvers_6_io_rsp_m2sPipe_valid = pixelSolvers_6_io_rsp_rValid;
  assign pixelSolvers_6_io_rsp_m2sPipe_payload_iteration = pixelSolvers_6_io_rsp_rData_iteration;
  assign pixelSolvers_6_io_rsp_m2sPipe_ready = arbiter_1_io_inputs_6_ready;
  always @(*) begin
    dispatcher_1_io_outputs_7_ready = dispatcher_1_io_outputs_7_m2sPipe_ready;
    if(when_Stream_l342_14) begin
      dispatcher_1_io_outputs_7_ready = 1'b1;
    end
  end

  assign when_Stream_l342_14 = (! dispatcher_1_io_outputs_7_m2sPipe_valid);
  assign dispatcher_1_io_outputs_7_m2sPipe_valid = dispatcher_1_io_outputs_7_rValid;
  assign dispatcher_1_io_outputs_7_m2sPipe_payload_x = dispatcher_1_io_outputs_7_rData_x;
  assign dispatcher_1_io_outputs_7_m2sPipe_payload_y = dispatcher_1_io_outputs_7_rData_y;
  assign dispatcher_1_io_outputs_7_m2sPipe_ready = pixelSolvers_7_io_cmd_ready;
  always @(*) begin
    pixelSolvers_7_io_rsp_ready = pixelSolvers_7_io_rsp_m2sPipe_ready;
    if(when_Stream_l342_15) begin
      pixelSolvers_7_io_rsp_ready = 1'b1;
    end
  end

  assign when_Stream_l342_15 = (! pixelSolvers_7_io_rsp_m2sPipe_valid);
  assign pixelSolvers_7_io_rsp_m2sPipe_valid = pixelSolvers_7_io_rsp_rValid;
  assign pixelSolvers_7_io_rsp_m2sPipe_payload_iteration = pixelSolvers_7_io_rsp_rData_iteration;
  assign pixelSolvers_7_io_rsp_m2sPipe_ready = arbiter_1_io_inputs_7_ready;
  assign io_rsp_valid = arbiter_1_io_output_valid;
  assign io_rsp_payload_iteration = arbiter_1_io_output_payload_iteration;
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      dispatcher_1_io_outputs_0_rValid <= 1'b0;
      pixelSolvers_0_io_rsp_rValid <= 1'b0;
      dispatcher_1_io_outputs_1_rValid <= 1'b0;
      pixelSolvers_1_io_rsp_rValid <= 1'b0;
      dispatcher_1_io_outputs_2_rValid <= 1'b0;
      pixelSolvers_2_io_rsp_rValid <= 1'b0;
      dispatcher_1_io_outputs_3_rValid <= 1'b0;
      pixelSolvers_3_io_rsp_rValid <= 1'b0;
      dispatcher_1_io_outputs_4_rValid <= 1'b0;
      pixelSolvers_4_io_rsp_rValid <= 1'b0;
      dispatcher_1_io_outputs_5_rValid <= 1'b0;
      pixelSolvers_5_io_rsp_rValid <= 1'b0;
      dispatcher_1_io_outputs_6_rValid <= 1'b0;
      pixelSolvers_6_io_rsp_rValid <= 1'b0;
      dispatcher_1_io_outputs_7_rValid <= 1'b0;
      pixelSolvers_7_io_rsp_rValid <= 1'b0;
    end else begin
      if(dispatcher_1_io_outputs_0_ready) begin
        dispatcher_1_io_outputs_0_rValid <= dispatcher_1_io_outputs_0_valid;
      end
      if(pixelSolvers_0_io_rsp_ready) begin
        pixelSolvers_0_io_rsp_rValid <= pixelSolvers_0_io_rsp_valid;
      end
      if(dispatcher_1_io_outputs_1_ready) begin
        dispatcher_1_io_outputs_1_rValid <= dispatcher_1_io_outputs_1_valid;
      end
      if(pixelSolvers_1_io_rsp_ready) begin
        pixelSolvers_1_io_rsp_rValid <= pixelSolvers_1_io_rsp_valid;
      end
      if(dispatcher_1_io_outputs_2_ready) begin
        dispatcher_1_io_outputs_2_rValid <= dispatcher_1_io_outputs_2_valid;
      end
      if(pixelSolvers_2_io_rsp_ready) begin
        pixelSolvers_2_io_rsp_rValid <= pixelSolvers_2_io_rsp_valid;
      end
      if(dispatcher_1_io_outputs_3_ready) begin
        dispatcher_1_io_outputs_3_rValid <= dispatcher_1_io_outputs_3_valid;
      end
      if(pixelSolvers_3_io_rsp_ready) begin
        pixelSolvers_3_io_rsp_rValid <= pixelSolvers_3_io_rsp_valid;
      end
      if(dispatcher_1_io_outputs_4_ready) begin
        dispatcher_1_io_outputs_4_rValid <= dispatcher_1_io_outputs_4_valid;
      end
      if(pixelSolvers_4_io_rsp_ready) begin
        pixelSolvers_4_io_rsp_rValid <= pixelSolvers_4_io_rsp_valid;
      end
      if(dispatcher_1_io_outputs_5_ready) begin
        dispatcher_1_io_outputs_5_rValid <= dispatcher_1_io_outputs_5_valid;
      end
      if(pixelSolvers_5_io_rsp_ready) begin
        pixelSolvers_5_io_rsp_rValid <= pixelSolvers_5_io_rsp_valid;
      end
      if(dispatcher_1_io_outputs_6_ready) begin
        dispatcher_1_io_outputs_6_rValid <= dispatcher_1_io_outputs_6_valid;
      end
      if(pixelSolvers_6_io_rsp_ready) begin
        pixelSolvers_6_io_rsp_rValid <= pixelSolvers_6_io_rsp_valid;
      end
      if(dispatcher_1_io_outputs_7_ready) begin
        dispatcher_1_io_outputs_7_rValid <= dispatcher_1_io_outputs_7_valid;
      end
      if(pixelSolvers_7_io_rsp_ready) begin
        pixelSolvers_7_io_rsp_rValid <= pixelSolvers_7_io_rsp_valid;
      end
    end
  end

  always @(posedge clk) begin
    if(dispatcher_1_io_outputs_0_ready) begin
      dispatcher_1_io_outputs_0_rData_x <= dispatcher_1_io_outputs_0_payload_x;
      dispatcher_1_io_outputs_0_rData_y <= dispatcher_1_io_outputs_0_payload_y;
    end
    if(pixelSolvers_0_io_rsp_ready) begin
      pixelSolvers_0_io_rsp_rData_iteration <= pixelSolvers_0_io_rsp_payload_iteration;
    end
    if(dispatcher_1_io_outputs_1_ready) begin
      dispatcher_1_io_outputs_1_rData_x <= dispatcher_1_io_outputs_1_payload_x;
      dispatcher_1_io_outputs_1_rData_y <= dispatcher_1_io_outputs_1_payload_y;
    end
    if(pixelSolvers_1_io_rsp_ready) begin
      pixelSolvers_1_io_rsp_rData_iteration <= pixelSolvers_1_io_rsp_payload_iteration;
    end
    if(dispatcher_1_io_outputs_2_ready) begin
      dispatcher_1_io_outputs_2_rData_x <= dispatcher_1_io_outputs_2_payload_x;
      dispatcher_1_io_outputs_2_rData_y <= dispatcher_1_io_outputs_2_payload_y;
    end
    if(pixelSolvers_2_io_rsp_ready) begin
      pixelSolvers_2_io_rsp_rData_iteration <= pixelSolvers_2_io_rsp_payload_iteration;
    end
    if(dispatcher_1_io_outputs_3_ready) begin
      dispatcher_1_io_outputs_3_rData_x <= dispatcher_1_io_outputs_3_payload_x;
      dispatcher_1_io_outputs_3_rData_y <= dispatcher_1_io_outputs_3_payload_y;
    end
    if(pixelSolvers_3_io_rsp_ready) begin
      pixelSolvers_3_io_rsp_rData_iteration <= pixelSolvers_3_io_rsp_payload_iteration;
    end
    if(dispatcher_1_io_outputs_4_ready) begin
      dispatcher_1_io_outputs_4_rData_x <= dispatcher_1_io_outputs_4_payload_x;
      dispatcher_1_io_outputs_4_rData_y <= dispatcher_1_io_outputs_4_payload_y;
    end
    if(pixelSolvers_4_io_rsp_ready) begin
      pixelSolvers_4_io_rsp_rData_iteration <= pixelSolvers_4_io_rsp_payload_iteration;
    end
    if(dispatcher_1_io_outputs_5_ready) begin
      dispatcher_1_io_outputs_5_rData_x <= dispatcher_1_io_outputs_5_payload_x;
      dispatcher_1_io_outputs_5_rData_y <= dispatcher_1_io_outputs_5_payload_y;
    end
    if(pixelSolvers_5_io_rsp_ready) begin
      pixelSolvers_5_io_rsp_rData_iteration <= pixelSolvers_5_io_rsp_payload_iteration;
    end
    if(dispatcher_1_io_outputs_6_ready) begin
      dispatcher_1_io_outputs_6_rData_x <= dispatcher_1_io_outputs_6_payload_x;
      dispatcher_1_io_outputs_6_rData_y <= dispatcher_1_io_outputs_6_payload_y;
    end
    if(pixelSolvers_6_io_rsp_ready) begin
      pixelSolvers_6_io_rsp_rData_iteration <= pixelSolvers_6_io_rsp_payload_iteration;
    end
    if(dispatcher_1_io_outputs_7_ready) begin
      dispatcher_1_io_outputs_7_rData_x <= dispatcher_1_io_outputs_7_payload_x;
      dispatcher_1_io_outputs_7_rData_y <= dispatcher_1_io_outputs_7_payload_y;
    end
    if(pixelSolvers_7_io_rsp_ready) begin
      pixelSolvers_7_io_rsp_rData_iteration <= pixelSolvers_7_io_rsp_payload_iteration;
    end
  end


endmodule

module Arbiter (
  input               io_inputs_0_valid,
  output reg          io_inputs_0_ready,
  input      [3:0]    io_inputs_0_payload_iteration,
  input               io_inputs_1_valid,
  output reg          io_inputs_1_ready,
  input      [3:0]    io_inputs_1_payload_iteration,
  input               io_inputs_2_valid,
  output reg          io_inputs_2_ready,
  input      [3:0]    io_inputs_2_payload_iteration,
  input               io_inputs_3_valid,
  output reg          io_inputs_3_ready,
  input      [3:0]    io_inputs_3_payload_iteration,
  input               io_inputs_4_valid,
  output reg          io_inputs_4_ready,
  input      [3:0]    io_inputs_4_payload_iteration,
  input               io_inputs_5_valid,
  output reg          io_inputs_5_ready,
  input      [3:0]    io_inputs_5_payload_iteration,
  input               io_inputs_6_valid,
  output reg          io_inputs_6_ready,
  input      [3:0]    io_inputs_6_payload_iteration,
  input               io_inputs_7_valid,
  output reg          io_inputs_7_ready,
  input      [3:0]    io_inputs_7_payload_iteration,
  output              io_output_valid,
  input               io_output_ready,
  output     [3:0]    io_output_payload_iteration,
  input               clk,
  input               reset
);

  wire       [2:0]    _zz_counter_valueNext;
  wire       [0:0]    _zz_counter_valueNext_1;
  reg                 _zz_io_output_valid;
  reg        [3:0]    _zz_io_output_payload_iteration;
  reg                 counter_willIncrement;
  wire                counter_willClear;
  reg        [2:0]    counter_valueNext;
  reg        [2:0]    counter_value;
  wire                counter_willOverflowIfInc;
  wire                counter_willOverflow;
  wire       [7:0]    _zz_1;
  wire                io_output_fire;

  assign _zz_counter_valueNext_1 = counter_willIncrement;
  assign _zz_counter_valueNext = {2'd0, _zz_counter_valueNext_1};
  always @(*) begin
    case(counter_value)
      3'b000 : begin
        _zz_io_output_valid = io_inputs_0_valid;
        _zz_io_output_payload_iteration = io_inputs_0_payload_iteration;
      end
      3'b001 : begin
        _zz_io_output_valid = io_inputs_1_valid;
        _zz_io_output_payload_iteration = io_inputs_1_payload_iteration;
      end
      3'b010 : begin
        _zz_io_output_valid = io_inputs_2_valid;
        _zz_io_output_payload_iteration = io_inputs_2_payload_iteration;
      end
      3'b011 : begin
        _zz_io_output_valid = io_inputs_3_valid;
        _zz_io_output_payload_iteration = io_inputs_3_payload_iteration;
      end
      3'b100 : begin
        _zz_io_output_valid = io_inputs_4_valid;
        _zz_io_output_payload_iteration = io_inputs_4_payload_iteration;
      end
      3'b101 : begin
        _zz_io_output_valid = io_inputs_5_valid;
        _zz_io_output_payload_iteration = io_inputs_5_payload_iteration;
      end
      3'b110 : begin
        _zz_io_output_valid = io_inputs_6_valid;
        _zz_io_output_payload_iteration = io_inputs_6_payload_iteration;
      end
      default : begin
        _zz_io_output_valid = io_inputs_7_valid;
        _zz_io_output_payload_iteration = io_inputs_7_payload_iteration;
      end
    endcase
  end

  always @(*) begin
    counter_willIncrement = 1'b0;
    if(io_output_fire) begin
      counter_willIncrement = 1'b1;
    end
  end

  assign counter_willClear = 1'b0;
  assign counter_willOverflowIfInc = (counter_value == 3'b111);
  assign counter_willOverflow = (counter_willOverflowIfInc && counter_willIncrement);
  always @(*) begin
    counter_valueNext = (counter_value + _zz_counter_valueNext);
    if(counter_willClear) begin
      counter_valueNext = 3'b000;
    end
  end

  always @(*) begin
    io_inputs_0_ready = 1'b0;
    if(_zz_1[0]) begin
      io_inputs_0_ready = io_output_ready;
    end
  end

  always @(*) begin
    io_inputs_1_ready = 1'b0;
    if(_zz_1[1]) begin
      io_inputs_1_ready = io_output_ready;
    end
  end

  always @(*) begin
    io_inputs_2_ready = 1'b0;
    if(_zz_1[2]) begin
      io_inputs_2_ready = io_output_ready;
    end
  end

  always @(*) begin
    io_inputs_3_ready = 1'b0;
    if(_zz_1[3]) begin
      io_inputs_3_ready = io_output_ready;
    end
  end

  always @(*) begin
    io_inputs_4_ready = 1'b0;
    if(_zz_1[4]) begin
      io_inputs_4_ready = io_output_ready;
    end
  end

  always @(*) begin
    io_inputs_5_ready = 1'b0;
    if(_zz_1[5]) begin
      io_inputs_5_ready = io_output_ready;
    end
  end

  always @(*) begin
    io_inputs_6_ready = 1'b0;
    if(_zz_1[6]) begin
      io_inputs_6_ready = io_output_ready;
    end
  end

  always @(*) begin
    io_inputs_7_ready = 1'b0;
    if(_zz_1[7]) begin
      io_inputs_7_ready = io_output_ready;
    end
  end

  assign _zz_1 = ({7'd0,1'b1} <<< counter_value);
  assign io_output_valid = _zz_io_output_valid;
  assign io_output_payload_iteration = _zz_io_output_payload_iteration;
  assign io_output_fire = (io_output_valid && io_output_ready);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      counter_value <= 3'b000;
    end else begin
      counter_value <= counter_valueNext;
    end
  end


endmodule

//PixelSolver replaced by PixelSolver

//PixelSolver replaced by PixelSolver

//PixelSolver replaced by PixelSolver

//PixelSolver replaced by PixelSolver

//PixelSolver replaced by PixelSolver

//PixelSolver replaced by PixelSolver

//PixelSolver replaced by PixelSolver

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

module Dispatcher (
  input               io_input_valid,
  output              io_input_ready,
  input      [27:0]   io_input_payload_x,
  input      [27:0]   io_input_payload_y,
  output reg          io_outputs_0_valid,
  input               io_outputs_0_ready,
  output     [27:0]   io_outputs_0_payload_x,
  output     [27:0]   io_outputs_0_payload_y,
  output reg          io_outputs_1_valid,
  input               io_outputs_1_ready,
  output     [27:0]   io_outputs_1_payload_x,
  output     [27:0]   io_outputs_1_payload_y,
  output reg          io_outputs_2_valid,
  input               io_outputs_2_ready,
  output     [27:0]   io_outputs_2_payload_x,
  output     [27:0]   io_outputs_2_payload_y,
  output reg          io_outputs_3_valid,
  input               io_outputs_3_ready,
  output     [27:0]   io_outputs_3_payload_x,
  output     [27:0]   io_outputs_3_payload_y,
  output reg          io_outputs_4_valid,
  input               io_outputs_4_ready,
  output     [27:0]   io_outputs_4_payload_x,
  output     [27:0]   io_outputs_4_payload_y,
  output reg          io_outputs_5_valid,
  input               io_outputs_5_ready,
  output     [27:0]   io_outputs_5_payload_x,
  output     [27:0]   io_outputs_5_payload_y,
  output reg          io_outputs_6_valid,
  input               io_outputs_6_ready,
  output     [27:0]   io_outputs_6_payload_x,
  output     [27:0]   io_outputs_6_payload_y,
  output reg          io_outputs_7_valid,
  input               io_outputs_7_ready,
  output     [27:0]   io_outputs_7_payload_x,
  output     [27:0]   io_outputs_7_payload_y,
  input               clk,
  input               reset
);

  wire       [2:0]    _zz_counter_valueNext;
  wire       [0:0]    _zz_counter_valueNext_1;
  reg                 _zz_io_input_ready;
  reg                 counter_willIncrement;
  wire                counter_willClear;
  reg        [2:0]    counter_valueNext;
  reg        [2:0]    counter_value;
  wire                counter_willOverflowIfInc;
  wire                counter_willOverflow;
  wire       [7:0]    _zz_1;
  wire                io_input_fire;

  assign _zz_counter_valueNext_1 = counter_willIncrement;
  assign _zz_counter_valueNext = {2'd0, _zz_counter_valueNext_1};
  always @(*) begin
    case(counter_value)
      3'b000 : _zz_io_input_ready = io_outputs_0_ready;
      3'b001 : _zz_io_input_ready = io_outputs_1_ready;
      3'b010 : _zz_io_input_ready = io_outputs_2_ready;
      3'b011 : _zz_io_input_ready = io_outputs_3_ready;
      3'b100 : _zz_io_input_ready = io_outputs_4_ready;
      3'b101 : _zz_io_input_ready = io_outputs_5_ready;
      3'b110 : _zz_io_input_ready = io_outputs_6_ready;
      default : _zz_io_input_ready = io_outputs_7_ready;
    endcase
  end

  always @(*) begin
    counter_willIncrement = 1'b0;
    if(io_input_fire) begin
      counter_willIncrement = 1'b1;
    end
  end

  assign counter_willClear = 1'b0;
  assign counter_willOverflowIfInc = (counter_value == 3'b111);
  assign counter_willOverflow = (counter_willOverflowIfInc && counter_willIncrement);
  always @(*) begin
    counter_valueNext = (counter_value + _zz_counter_valueNext);
    if(counter_willClear) begin
      counter_valueNext = 3'b000;
    end
  end

  always @(*) begin
    io_outputs_0_valid = 1'b0;
    if(_zz_1[0]) begin
      io_outputs_0_valid = io_input_valid;
    end
  end

  assign io_outputs_0_payload_x = io_input_payload_x;
  assign io_outputs_0_payload_y = io_input_payload_y;
  always @(*) begin
    io_outputs_1_valid = 1'b0;
    if(_zz_1[1]) begin
      io_outputs_1_valid = io_input_valid;
    end
  end

  assign io_outputs_1_payload_x = io_input_payload_x;
  assign io_outputs_1_payload_y = io_input_payload_y;
  always @(*) begin
    io_outputs_2_valid = 1'b0;
    if(_zz_1[2]) begin
      io_outputs_2_valid = io_input_valid;
    end
  end

  assign io_outputs_2_payload_x = io_input_payload_x;
  assign io_outputs_2_payload_y = io_input_payload_y;
  always @(*) begin
    io_outputs_3_valid = 1'b0;
    if(_zz_1[3]) begin
      io_outputs_3_valid = io_input_valid;
    end
  end

  assign io_outputs_3_payload_x = io_input_payload_x;
  assign io_outputs_3_payload_y = io_input_payload_y;
  always @(*) begin
    io_outputs_4_valid = 1'b0;
    if(_zz_1[4]) begin
      io_outputs_4_valid = io_input_valid;
    end
  end

  assign io_outputs_4_payload_x = io_input_payload_x;
  assign io_outputs_4_payload_y = io_input_payload_y;
  always @(*) begin
    io_outputs_5_valid = 1'b0;
    if(_zz_1[5]) begin
      io_outputs_5_valid = io_input_valid;
    end
  end

  assign io_outputs_5_payload_x = io_input_payload_x;
  assign io_outputs_5_payload_y = io_input_payload_y;
  always @(*) begin
    io_outputs_6_valid = 1'b0;
    if(_zz_1[6]) begin
      io_outputs_6_valid = io_input_valid;
    end
  end

  assign io_outputs_6_payload_x = io_input_payload_x;
  assign io_outputs_6_payload_y = io_input_payload_y;
  always @(*) begin
    io_outputs_7_valid = 1'b0;
    if(_zz_1[7]) begin
      io_outputs_7_valid = io_input_valid;
    end
  end

  assign io_outputs_7_payload_x = io_input_payload_x;
  assign io_outputs_7_payload_y = io_input_payload_y;
  assign _zz_1 = ({7'd0,1'b1} <<< counter_value);
  assign io_input_ready = _zz_io_input_ready;
  assign io_input_fire = (io_input_valid && io_input_ready);
  always @(posedge clk or posedge reset) begin
    if(reset) begin
      counter_value <= 3'b000;
    end else begin
      counter_value <= counter_valueNext;
    end
  end


endmodule
