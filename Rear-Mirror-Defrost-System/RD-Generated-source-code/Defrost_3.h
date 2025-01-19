/*
 * Defrost_3.h
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

#ifndef RTW_HEADER_Defrost_3_h_
#define RTW_HEADER_Defrost_3_h_
#ifndef Defrost_3_COMMON_INCLUDES_
#define Defrost_3_COMMON_INCLUDES_
#include <stdlib.h>
#include "rtwtypes.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "rsim.h"
#include "rt_logging.h"
#include "dt_info.h"
#endif                                 /* Defrost_3_COMMON_INCLUDES_ */

#include "Defrost_3_types.h"
#include <math.h>
#include <stddef.h>
#include "rt_defines.h"
#include <string.h>
#include "rt_nonfinite.h"
#define MODEL_NAME                     Defrost_3
#define NSAMPLE_TIMES                  (3)                       /* Number of sample times */
#define NINPUTS                        (0)                       /* Number of model inputs */
#define NOUTPUTS                       (0)                       /* Number of model outputs */
#define NBLOCKIO                       (48)                      /* Number of data output port signals */
#define NUM_ZC_EVENTS                  (0)                       /* Number of zero-crossing events */
#ifndef NCSTATES
#define NCSTATES                       (0)                       /* Number of continuous states */
#elif NCSTATES != 0
# error Invalid specification of NCSTATES defined in compiler command
#endif

#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm)         (NULL)
#endif

#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val)
#endif

/* Block signals (default storage) */
typedef struct {
  real_T UnitDelay;                    /* '<S19>/Unit Delay' */
  real_T FromWs[2];                    /* '<S12>/FromWs' */
  real_T UnitDelay_b;                  /* '<S20>/Unit Delay' */
  real_T UnitDelay_m;                  /* '<S18>/Unit Delay' */
  real_T Switch;                       /* '<S18>/Switch' */
  real_T UnitDelay_j;                  /* '<S21>/Unit Delay' */
  real_T FromWs_g;                     /* '<S1>/FromWs' */
  real_T FromWs_d;                     /* '<S13>/FromWs' */
  real_T UnitDelay_e;                  /* '<S22>/Unit Delay' */
  real_T UnitDelay_a;                  /* '<S23>/Unit Delay' */
  real_T FromWs_f;                     /* '<S14>/FromWs' */
  real_T FromWs_f2;                    /* '<S15>/FromWs' */
  real_T Merge;                        /* '<Root>/Merge' */
  real_T Switch1;                      /* '<S18>/Switch1' */
  real_T CANA_RHWLoadSts;              /* '<S17>/Chart' */
  real_T CANB_RHWindowSts;             /* '<S17>/Chart' */
  real_T R_DefrostCmd;                 /* '<S17>/Chart' */
  real_T R_DefrostInfo;                /* '<S17>/Chart' */
  real_T RDStatus;                     /* '<S10>/Chart' */
  real_T TdefCounter;                  /* '<S9>/Chart' */
  real_T RDStatus_e;                   /* '<S9>/Chart' */
  real_T FirstActivation2;             /* '<S9>/Chart' */
  real_T RDStatus_eq;                  /* '<S8>/Chart' */
  real_T TdefCounter_g;                /* '<S8>/Chart' */
  real_T FirstActivation1;             /* '<S8>/Chart' */
  real_T FirstActivation;              /* '<S7>/Chart' */
  real_T RDStatus_d;                   /* '<S7>/Chart' */
  real_T TdefCounter_i;                /* '<S7>/Chart' */
  boolean_T RelationalOperator;        /* '<S19>/Relational Operator' */
  boolean_T LogicalOperator2;          /* '<S19>/Logical Operator2' */
  boolean_T LogicalOperator1;          /* '<Root>/Logical Operator1' */
  boolean_T RelationalOperator1;       /* '<S20>/Relational Operator1' */
  boolean_T RelationalOperator_h;      /* '<S20>/Relational Operator' */
  boolean_T LogicalOperator3;          /* '<S20>/Logical Operator3' */
  boolean_T Compare;                   /* '<S5>/Compare' */
  boolean_T LogicalOperator2_i;        /* '<Root>/Logical Operator2' */
  boolean_T LogicalOperator;           /* '<Root>/Logical Operator' */
  boolean_T LogicalOperator4;          /* '<Root>/Logical Operator4' */
  boolean_T LogicalOperator3_g;        /* '<Root>/Logical Operator3' */
  boolean_T RelationalOperator1_e;     /* '<S21>/Relational Operator1' */
  boolean_T RelationalOperator_m;      /* '<S21>/Relational Operator' */
  boolean_T LogicalOperator3_k;        /* '<S21>/Logical Operator3' */
  boolean_T RelationalOperator1_p;     /* '<S22>/Relational Operator1' */
  boolean_T RelationalOperator_e;      /* '<S22>/Relational Operator' */
  boolean_T LogicalOperator3_e;        /* '<S22>/Logical Operator3' */
  boolean_T RelationalOperator1_i;     /* '<S23>/Relational Operator1' */
  boolean_T RelationalOperator_j;      /* '<S23>/Relational Operator' */
  boolean_T LogicalOperator3_j;        /* '<S23>/Logical Operator3' */
} B;

/* Block states (default storage) for system '<Root>' */
typedef struct {
  real_T UnitDelay_DSTATE;             /* '<S19>/Unit Delay' */
  real_T UnitDelay_DSTATE_k;           /* '<S20>/Unit Delay' */
  real_T UnitDelay_DSTATE_i;           /* '<S18>/Unit Delay' */
  real_T UnitDelay_DSTATE_a;           /* '<S21>/Unit Delay' */
  real_T UnitDelay_DSTATE_m;           /* '<S22>/Unit Delay' */
  real_T UnitDelay_DSTATE_f;           /* '<S23>/Unit Delay' */
  struct {
    void *LoggedData;
  } Scope_PWORK;                       /* '<Root>/Scope' */

  struct {
    void *LoggedData;
  } Scope1_PWORK;                      /* '<Root>/Scope1' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK;                      /* '<S12>/FromWs' */

  struct {
    void *LoggedData;
  } Scope2_PWORK;                      /* '<Root>/Scope2' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK_c;                    /* '<S1>/FromWs' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK_p;                    /* '<S13>/FromWs' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK_l;                    /* '<S14>/FromWs' */

  struct {
    void *TimePtr;
    void *DataPtr;
    void *RSimInfoPtr;
  } FromWs_PWORK_n;                    /* '<S15>/FromWs' */

  struct {
    void *LoggedData;
  } Scope3_PWORK;                      /* '<Root>/Scope3' */

  struct {
    void *LoggedData;
  } Scope4_PWORK;                      /* '<Root>/Scope4' */

  struct {
    void *LoggedData;
  } Scope5_PWORK;                      /* '<Root>/Scope5' */

  struct {
    void *LoggedData;
  } Scope6_PWORK;                      /* '<Root>/Scope6' */

  struct {
    void *LoggedData;
  } Scope7_PWORK;                      /* '<Root>/Scope7' */

  struct {
    void *LoggedData;
  } Scope8_PWORK;                      /* '<Root>/Scope8' */

  struct {
    void *LoggedData;
  } Scope9_PWORK;                      /* '<Root>/Scope9' */

  struct {
    void *LoggedData;
  } Scope_PWORK_a;                     /* '<S18>/Scope' */

  struct {
    void *LoggedData;
  } Scope_PWORK_m;                     /* '<S20>/Scope' */

  uint32_T temporalCounter_i2;         /* '<S9>/Chart' */
  uint32_T temporalCounter_i2_p;       /* '<S8>/Chart' */
  uint32_T temporalCounter_i2_ps;      /* '<S7>/Chart' */
  struct {
    int_T PrevIndex;
  } FromWs_IWORK;                      /* '<S12>/FromWs' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK_b;                    /* '<S1>/FromWs' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK_h;                    /* '<S13>/FromWs' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK_k;                    /* '<S14>/FromWs' */

  struct {
    int_T PrevIndex;
  } FromWs_IWORK_c;                    /* '<S15>/FromWs' */

  int8_T If_ActiveSubsystem;           /* '<Root>/If' */
  uint8_T is_active_c4_Defrost_3;      /* '<S10>/Chart' */
  uint8_T is_Load_Shed_Management;     /* '<S9>/Chart' */
  uint8_T is_Defrost_Management;       /* '<S9>/Chart' */
  uint8_T is_active_c2_Defrost_3;      /* '<S9>/Chart' */
  uint8_T temporalCounter_i1;          /* '<S9>/Chart' */
  uint8_T is_Load_Shed_Management_l;   /* '<S8>/Chart' */
  uint8_T is_Defrost_Management_a;     /* '<S8>/Chart' */
  uint8_T is_active_c1_Defrost_3;      /* '<S8>/Chart' */
  uint8_T temporalCounter_i1_j;        /* '<S8>/Chart' */
  uint8_T is_Load_Shed_Management_c;   /* '<S7>/Chart' */
  uint8_T is_Defrost_Management_o;     /* '<S7>/Chart' */
  uint8_T is_active_c3_Defrost_3;      /* '<S7>/Chart' */
  uint8_T temporalCounter_i1_j4;       /* '<S7>/Chart' */
} DW;

/* Invariant block signals (default storage) */
typedef struct {
  const real_T Switch;                 /* '<S16>/Switch' */
  const boolean_T Compare;             /* '<S28>/Compare' */
  const boolean_T Compare_c;           /* '<S29>/Compare' */
  const boolean_T LogicalOperator;     /* '<S16>/Logical Operator' */
  const boolean_T Compare_f;           /* '<S2>/Compare' */
  const boolean_T Compare_d;           /* '<S3>/Compare' */
  const boolean_T Compare_b;           /* '<S4>/Compare' */
  const boolean_T Compare_a;           /* '<S6>/Compare' */
  const boolean_T Compare_j;           /* '<S31>/Compare' */
} ConstB;

/* Constant parameters (default storage) */
typedef struct {
  /* Computed Parameter: FromWs_Time0
   * Referenced by: '<S12>/FromWs'
   */
  real_T FromWs_Time0[39];

  /* Computed Parameter: FromWs_Data0
   * Referenced by: '<S12>/FromWs'
   */
  real_T FromWs_Data0[78];

  /* Computed Parameter: FromWs_Time0_m
   * Referenced by: '<S1>/FromWs'
   */
  real_T FromWs_Time0_m[23];

  /* Computed Parameter: FromWs_Data0_o
   * Referenced by: '<S1>/FromWs'
   */
  real_T FromWs_Data0_o[23];

  /* Computed Parameter: FromWs_Time0_k
   * Referenced by: '<S13>/FromWs'
   */
  real_T FromWs_Time0_k[30];

  /* Computed Parameter: FromWs_Data0_l
   * Referenced by: '<S13>/FromWs'
   */
  real_T FromWs_Data0_l[30];

  /* Computed Parameter: FromWs_Time0_n
   * Referenced by: '<S14>/FromWs'
   */
  real_T FromWs_Time0_n[30];

  /* Computed Parameter: FromWs_Data0_d
   * Referenced by: '<S14>/FromWs'
   */
  real_T FromWs_Data0_d[30];

  /* Computed Parameter: FromWs_Time0_a
   * Referenced by: '<S15>/FromWs'
   */
  real_T FromWs_Time0_a[33];

  /* Computed Parameter: FromWs_Data0_f
   * Referenced by: '<S15>/FromWs'
   */
  real_T FromWs_Data0_f[33];
} ConstP;

/* External data declarations for dependent source files */
extern const char *RT_MEMORY_ALLOCATION_ERROR;
extern B rtB;                          /* block i/o */
extern DW rtDW;                        /* states (dwork) */
extern const ConstB rtrtC;             /* constant block i/o */

/* Constant parameters (default storage) */
extern const ConstP rtConstP;

/* Simulation Structure */
extern SimStruct *const rtS;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<S11>/FromWs' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'Defrost_3'
 * '<S1>'   : 'Defrost_3/BatteryVolt'
 * '<S2>'   : 'Defrost_3/Compare To Constant'
 * '<S3>'   : 'Defrost_3/Compare To Constant1'
 * '<S4>'   : 'Defrost_3/Compare To Constant2'
 * '<S5>'   : 'Defrost_3/Compare To Constant3'
 * '<S6>'   : 'Defrost_3/Compare To Constant4'
 * '<S7>'   : 'Defrost_3/If Action Subsystem'
 * '<S8>'   : 'Defrost_3/If Action Subsystem1'
 * '<S9>'   : 'Defrost_3/If Action Subsystem2'
 * '<S10>'  : 'Defrost_3/If Action Subsystem3'
 * '<S11>'  : 'Defrost_3/IgnitionOff = 1 IgnitionOn = 2 IgnitionStart = 3 IgnOn_EngOn = 4 Ignition_SNA = 5'
 * '<S12>'  : 'Defrost_3/NotActive = 0 Avtive = 1'
 * '<S13>'  : 'Defrost_3/OFF = 0 On = 1'
 * '<S14>'  : 'Defrost_3/RemoteStart_NotActive = 0 RemoteStart_Active = 1'
 * '<S15>'  : 'Defrost_3/Signal Builder'
 * '<S16>'  : 'Defrost_3/Subsystem'
 * '<S17>'  : 'Defrost_3/Subsystem1'
 * '<S18>'  : 'Defrost_3/Subsystem2'
 * '<S19>'  : 'Defrost_3/memory'
 * '<S20>'  : 'Defrost_3/memory1'
 * '<S21>'  : 'Defrost_3/memory2'
 * '<S22>'  : 'Defrost_3/memory3'
 * '<S23>'  : 'Defrost_3/memory4'
 * '<S24>'  : 'Defrost_3/If Action Subsystem/Chart'
 * '<S25>'  : 'Defrost_3/If Action Subsystem1/Chart'
 * '<S26>'  : 'Defrost_3/If Action Subsystem2/Chart'
 * '<S27>'  : 'Defrost_3/If Action Subsystem3/Chart'
 * '<S28>'  : 'Defrost_3/Subsystem/Compare To Constant'
 * '<S29>'  : 'Defrost_3/Subsystem/Compare To Constant1'
 * '<S30>'  : 'Defrost_3/Subsystem1/Chart'
 * '<S31>'  : 'Defrost_3/memory/Compare To Constant3'
 */

/* user code (bottom of header file) */
extern const int_T gblNumToFiles;
extern const int_T gblNumFrFiles;
extern const int_T gblNumFrWksBlocks;
extern rtInportTUtable *gblInportTUtables;
extern const char *gblInportFileName;
extern const int_T gblNumRootInportBlks;
extern const int_T gblNumModelInputs;
extern const int_T gblInportDataTypeIdx[];
extern const int_T gblInportDims[];
extern const int_T gblInportComplex[];
extern const int_T gblInportInterpoFlag[];
extern const int_T gblInportContinuous[];

#endif                                 /* RTW_HEADER_Defrost_3_h_ */
