/*
 * Defrost_3_data.c
 *
 * Code generation for model "Defrost_3".
 *
 * Model version              : 1.64
 * Simulink Coder version : 9.8 (R2022b) 13-May-2022
 * C source code generated on : Tue Oct 29 17:38:32 2024
 *
 * Target selection: rsim.tlc
 * Note: GRT includes extra infrastructure and instrumentation for prototyping
 * Embedded hardware selection: Intel->x86-64 (Windows64)
 * Code generation objective: Debugging
 * Validation result: Not run
 */

#include "Defrost_3.h"

/* Invariant block signals (default storage) */
const ConstB rtrtC = {
  3.0,                                 /* '<S16>/Switch' */
  1,                                   /* '<S28>/Compare' */
  1,                                   /* '<S29>/Compare' */
  1,                                   /* '<S16>/Logical Operator' */
  0,                                   /* '<S2>/Compare' */
  1,                                   /* '<S3>/Compare' */
  0,                                   /* '<S4>/Compare' */
  0,                                   /* '<S6>/Compare' */
  0                                    /* '<S31>/Compare' */
};

/* Constant parameters (default storage) */
const ConstP rtConstP = {
  /* Computed Parameter: FromWs_Time0
   * Referenced by: '<S12>/FromWs'
   */
  { 0.0, 5.0, 10.0, 10.0, 15.0, 15.0, 20.0, 20.0, 25.0, 25.0, 30.0, 30.0, 35.0,
    35.0, 40.0, 40.0, 45.0, 45.0, 50.0, 50.0, 55.0, 55.0, 60.0, 60.0, 65.0, 65.0,
    70.0, 70.0, 75.0, 75.0, 80.0, 80.0, 85.0, 85.0, 90.0, 90.0, 95.0, 95.0,
    100.0 },

  /* Computed Parameter: FromWs_Data0
   * Referenced by: '<S12>/FromWs'
   */
  { 0.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0,
    1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0,
    0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0,
    -0.0, -0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 0.0,
    0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.0, -0.0, -0.0, 0.0, 0.0, 0.0, 1.0,
    1.0, 1.0, 1.0 },

  /* Computed Parameter: FromWs_Time0_m
   * Referenced by: '<S1>/FromWs'
   */
  { 0.0, 8.3333333333333339, 8.3333333333333339, 16.666666666666668, 25.0, 25.0,
    33.333333333333336, 33.333333333333336, 41.666666666666671,
    41.666666666666671, 50.0, 50.0, 58.333333333333336, 58.333333333333336,
    66.666666666666671, 66.666666666666671, 75.0, 75.0, 83.333333333333343,
    83.333333333333343, 91.666666666666671, 91.666666666666671, 100.0 },

  /* Computed Parameter: FromWs_Data0_o
   * Referenced by: '<S1>/FromWs'
   */
  { 2.0, 2.0, 3.98, 3.98, 3.98, 6.78, 6.78, 7.0500000000000007,
    7.0500000000000007, 11.850000000000001, 11.850000000000001, 24.3, 24.3,
    31.200000000000003, 31.200000000000003, 36.2, 36.2, 21.0, 21.0,
    11.200000000000001, 11.200000000000001, 4.8000000000000007,
    4.8000000000000007 },

  /* Computed Parameter: FromWs_Time0_k
   * Referenced by: '<S13>/FromWs'
   */
  { 0.0, 5.0, 10.0, 10.0, 15.0, 20.0, 20.0, 25.0, 30.0, 30.0, 35.0, 40.0, 40.0,
    45.0, 50.0, 50.0, 55.0, 60.0, 60.0, 65.0, 70.0, 70.0, 75.0, 80.0, 80.0, 85.0,
    90.0, 90.0, 95.0, 100.0 },

  /* Computed Parameter: FromWs_Data0_l
   * Referenced by: '<S13>/FromWs'
   */
  { 1.0, 1.0, 1.0, -0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, -0.0, 0.0, 0.0, 1.0, 1.0, 1.0, -0.0, 0.0, 0.0
  },

  /* Computed Parameter: FromWs_Time0_n
   * Referenced by: '<S14>/FromWs'
   */
  { 0.0, 5.0, 5.0, 10.0, 15.0, 20.0, 20.0, 25.0, 30.0, 30.0, 35.0, 40.0, 40.0,
    45.0, 50.0, 50.0, 55.0, 60.0, 60.0, 65.0, 70.0, 70.0, 75.0, 80.0, 80.0, 85.0,
    90.0, 95.0, 95.0, 100.0 },

  /* Computed Parameter: FromWs_Data0_d
   * Referenced by: '<S14>/FromWs'
   */
  { 1.0, 1.0, 0.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 0.0, 0.0, 0.0, 1.0, 1.0, 1.0,
    0.0, 0.0, 0.0, 1.0, 1.0, 1.0, -0.0, 0.0, 0.0, 1.0, 1.0, 1.0, 1.0, 0.0, 0.0 },

  /* Computed Parameter: FromWs_Time0_a
   * Referenced by: '<S15>/FromWs'
   */
  { 0.0, 5.0, 10.0, 15.0, 15.0, 20.0, 25.0, 25.0, 30.0, 35.0, 35.0, 40.0, 40.0,
    45.0, 50.0, 50.0, 55.0, 55.0, 60.0, 60.0, 65.0, 65.0, 70.0, 70.0, 75.0, 80.0,
    85.0, 85.0, 90.0, 90.0, 95.0, 95.0, 100.0 },

  /* Computed Parameter: FromWs_Data0_f
   * Referenced by: '<S15>/FromWs'
   */
  { -26.0, -26.0, -26.0, -26.0, -3.0, -3.0, -3.0, 2.0500000000000003,
    2.0500000000000003, 2.0500000000000003, 2.0, 2.0, 2.0500000000000003,
    2.0500000000000003, 2.0500000000000003, 170.5, 170.5, 171.0, 171.0, 172.0,
    172.0, 180.0, 180.0, 177.0, 177.0, 177.0, 177.0, 180.0, 180.0, 178.0, 178.0,
    176.0, 176.0 }
};
