/*
 * Defrost_3_dt.h
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

/* data type size table */
static uint_T rtDataTypeSizes[] = {
  sizeof(real_T),
  sizeof(real32_T),
  sizeof(int8_T),
  sizeof(uint8_T),
  sizeof(int16_T),
  sizeof(uint16_T),
  sizeof(int32_T),
  sizeof(uint32_T),
  sizeof(boolean_T),
  sizeof(fcn_call_T),
  sizeof(int_T),
  sizeof(pointer_T),
  sizeof(action_T),
  2*sizeof(uint32_T),
  sizeof(int32_T),
  sizeof(int64_T),
  sizeof(uint64_T),
  sizeof(uint64_T),
  sizeof(int64_T),
  sizeof(uint_T),
  sizeof(char_T),
  sizeof(uchar_T),
  sizeof(time_T)
};

/* data type name table */
static const char_T * rtDataTypeNames[] = {
  "real_T",
  "real32_T",
  "int8_T",
  "uint8_T",
  "int16_T",
  "uint16_T",
  "int32_T",
  "uint32_T",
  "boolean_T",
  "fcn_call_T",
  "int_T",
  "pointer_T",
  "action_T",
  "timer_uint32_pair_T",
  "physical_connection",
  "int64_T",
  "uint64_T",
  "uint64_T",
  "int64_T",
  "uint_T",
  "char_T",
  "uchar_T",
  "time_T"
};

/* data type transitions for block I/O structure */
static DataTypeTransition rtBTransitions[] = {
  { (char_T *)(&rtB.UnitDelay), 0, 0, 29 },

  { (char_T *)(&rtB.RelationalOperator), 8, 0, 20 }
  ,

  { (char_T *)(&rtDW.UnitDelay_DSTATE), 0, 0, 6 },

  { (char_T *)(&rtDW.Scope_PWORK.LoggedData), 11, 0, 17 },

  { (char_T *)(&rtDW.temporalCounter_i2), 7, 0, 3 },

  { (char_T *)(&rtDW.FromWs_IWORK.PrevIndex), 10, 0, 5 },

  { (char_T *)(&rtDW.If_ActiveSubsystem), 2, 0, 1 },

  { (char_T *)(&rtDW.is_active_c4_Defrost_3), 3, 0, 13 }
};

/* data type transition table for block I/O structure */
static DataTypeTransitionTable rtBTransTable = {
  8U,
  rtBTransitions
};

/* [EOF] Defrost_3_dt.h */
