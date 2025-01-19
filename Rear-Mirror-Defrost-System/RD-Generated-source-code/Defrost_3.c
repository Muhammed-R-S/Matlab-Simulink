/*
 * Defrost_3.c
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
#include "rtwtypes.h"
#include "Defrost_3_private.h"
#include "Defrost_3_dt.h"

/* user code (top of parameter file) */
const int_T gblNumToFiles = 0;
const int_T gblNumFrFiles = 0;
const int_T gblNumFrWksBlocks = 5;
const char *gblSlvrJacPatternFileName =
  "Defrost_3_rsim_rtw\\Defrost_3_Jpattern.mat";

/* Root inports information  */
const int_T gblNumRootInportBlks = 0;
const int_T gblNumModelInputs = 0;
extern rtInportTUtable *gblInportTUtables;
extern const char *gblInportFileName;
const int_T gblInportDataTypeIdx[] = { -1 };

const int_T gblInportDims[] = { -1 } ;

const int_T gblInportComplex[] = { -1 };

const int_T gblInportInterpoFlag[] = { -1 };

const int_T gblInportContinuous[] = { -1 };

#include "simstruc.h"
#include "fixedpoint.h"

/* Named constants for Chart: '<S7>/Chart' */
#define Defros_IN_NotActive_IndicatorOn ((uint8_T)2U)
#define Defrost_3_IN_Active            ((uint8_T)1U)
#define Defrost_3_IN_HighVoltage       ((uint8_T)1U)
#define Defrost_3_IN_LowVoltage        ((uint8_T)2U)
#define Defrost_3_IN_NO_ACTIVE_CHILD   ((uint8_T)0U)
#define Defrost_3_IN_Normal            ((uint8_T)3U)
#define Defrost_3_IN_Not_Active        ((uint8_T)3U)

/* Named constants for Chart: '<S8>/Chart' */
#define Defro_IN_Not_Active_indicatorOn ((uint8_T)3U)
#define Defrost_3_IN_Acitive           ((uint8_T)1U)
#define Defrost_3_IN_Not_Active_p      ((uint8_T)2U)

/* Named constants for Chart: '<S9>/Chart' */
#define Defro_IN_Not_Active_IndicatorOn ((uint8_T)3U)

/* Block signals (default storage) */
B rtB;

/* Block states (default storage) */
DW rtDW;

/* Parent Simstruct */
static SimStruct model_S;
SimStruct *const rtS = &model_S;

/* Forward declaration for local functions */
static void Defrost__enter_internal_Acitive(void);
static void enter_internal_Not_Active_Indic(void);

/* Function for Chart: '<S8>/Chart' */
static void Defrost__enter_internal_Acitive(void)
{
  /* :  sf_internal_predicateOutput = RDStatus == 1; */
  if (rtB.RDStatus_eq == 1.0) {
    boolean_T out;

    /* :  sf_internal_predicateOutput = MaxDefrostSts ==1 && TdefCounter == 0; */
    out = ((rtB.FromWs_d == 1.0) && (rtB.TdefCounter_g == 0.0));
    if (out) {
      /* :  sf_internal_predicateOutput = FirstActivation == 0; */
      if (rtB.FirstActivation == 0.0) {
        /* :  FirstActivation1 = 1 */
        rtB.FirstActivation1 = 1.0;

        /* :  sf_internal_predicateOutput = FirstActivation == 1; */
      } else if (rtB.FirstActivation == 1.0) {
        /* :  FirstActivation1 = FirstActivation */
        rtB.FirstActivation1 = 1.0;
      }
    }
  }
}

/* Function for Chart: '<S9>/Chart' */
static void enter_internal_Not_Active_Indic(void)
{
  boolean_T out;

  /* :  sf_internal_predicateOutput = in(Load_Shed_Management.Normal) && RDStatus == 2; */
  out = ((rtDW.is_Load_Shed_Management == Defrost_3_IN_Normal) &&
         (rtB.RDStatus_e == 2.0));
  if (out) {
    /* :  sf_internal_predicateOutput = MaxDefrostSts == 1 && TdefCounter == 0; */
    out = ((rtB.FromWs_d == 1.0) && (rtB.TdefCounter == 0.0));
    if (out) {
      /* :  sf_internal_predicateOutput = FirstActivation1 == 1; */
      if (rtB.FirstActivation1 == 1.0) {
        /* :  FirstActivation2 = FirstActivation1 */
        rtB.FirstActivation2 = 1.0;

        /* :  sf_internal_predicateOutput = FirstActivation1 == 0; */
      } else if (rtB.FirstActivation1 == 0.0) {
        /* :  FirstActivation2 = 1 */
        rtB.FirstActivation2 = 1.0;
      }
    }
  }
}

/* System initialize for root system: '<Root>' */
void MdlInitialize(void)
{
  /* InitializeConditions for UnitDelay: '<S19>/Unit Delay' */
  rtDW.UnitDelay_DSTATE = 0.0;

  /* InitializeConditions for UnitDelay: '<S20>/Unit Delay' */
  rtDW.UnitDelay_DSTATE_k = 0.0;

  /* InitializeConditions for UnitDelay: '<S18>/Unit Delay' */
  rtDW.UnitDelay_DSTATE_i = 1.0;

  /* InitializeConditions for UnitDelay: '<S21>/Unit Delay' */
  rtDW.UnitDelay_DSTATE_a = 0.0;

  /* InitializeConditions for UnitDelay: '<S22>/Unit Delay' */
  rtDW.UnitDelay_DSTATE_m = 0.0;

  /* InitializeConditions for UnitDelay: '<S23>/Unit Delay' */
  rtDW.UnitDelay_DSTATE_f = 0.0;

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem' */
  /* SystemInitialize for Chart: '<S7>/Chart' */
  rtDW.is_Defrost_Management_o = Defrost_3_IN_NO_ACTIVE_CHILD;
  rtDW.temporalCounter_i1_j4 = 0U;
  rtDW.temporalCounter_i2_ps = 0U;
  rtDW.is_Load_Shed_Management_c = Defrost_3_IN_NO_ACTIVE_CHILD;
  rtDW.is_active_c3_Defrost_3 = 0U;
  rtB.FirstActivation = 0.0;
  rtB.RDStatus_d = 0.0;
  rtB.TdefCounter_i = 0.0;

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem' */

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem1' */
  /* SystemInitialize for Chart: '<S8>/Chart' */
  rtDW.is_Defrost_Management_a = Defrost_3_IN_NO_ACTIVE_CHILD;
  rtDW.temporalCounter_i1_j = 0U;
  rtDW.temporalCounter_i2_p = 0U;
  rtDW.is_Load_Shed_Management_l = Defrost_3_IN_NO_ACTIVE_CHILD;
  rtDW.is_active_c1_Defrost_3 = 0U;
  rtB.RDStatus_eq = 0.0;
  rtB.TdefCounter_g = 0.0;
  rtB.FirstActivation1 = 0.0;

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem1' */

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem2' */
  /* SystemInitialize for Chart: '<S9>/Chart' */
  rtDW.is_Defrost_Management = Defrost_3_IN_NO_ACTIVE_CHILD;
  rtDW.temporalCounter_i1 = 0U;
  rtDW.temporalCounter_i2 = 0U;
  rtDW.is_Load_Shed_Management = Defrost_3_IN_NO_ACTIVE_CHILD;
  rtDW.is_active_c2_Defrost_3 = 0U;
  rtB.TdefCounter = 0.0;
  rtB.RDStatus_e = 0.0;
  rtB.FirstActivation2 = 0.0;

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem2' */

  /* SystemInitialize for IfAction SubSystem: '<Root>/If Action Subsystem3' */
  /* SystemInitialize for Chart: '<S10>/Chart' */
  rtDW.is_active_c4_Defrost_3 = 0U;
  rtB.RDStatus = 0.0;

  /* End of SystemInitialize for SubSystem: '<Root>/If Action Subsystem3' */

  /* SystemInitialize for Chart: '<S17>/Chart' */
  rtB.CANA_RHWLoadSts = 0.0;
  rtB.CANB_RHWindowSts = 0.0;
  rtB.R_DefrostCmd = 0.0;
  rtB.R_DefrostInfo = 0.0;
}

/* Start for root system: '<Root>' */
void MdlStart(void)
{
  /* Start for FromWorkspace: '<S12>/FromWs' */
  {
    FWksInfo *fromwksInfo;
    if ((fromwksInfo = (FWksInfo *) calloc(1, sizeof(FWksInfo))) == (NULL)) {
      ssSetErrorStatus(rtS,
                       "from workspace STRING(Name) memory allocation error");
    } else {
      fromwksInfo->origWorkspaceVarName = "tuvar";
      fromwksInfo->origDataTypeId = 0;
      fromwksInfo->origIsComplex = 0;
      fromwksInfo->origWidth = 2;
      fromwksInfo->origElSize = sizeof(real_T);
      fromwksInfo->data = (void *)rtConstP.FromWs_Data0;
      fromwksInfo->nDataPoints = 39;
      fromwksInfo->time = (double *)rtConstP.FromWs_Time0;
      rtDW.FromWs_PWORK.TimePtr = fromwksInfo->time;
      rtDW.FromWs_PWORK.DataPtr = fromwksInfo->data;
      rtDW.FromWs_PWORK.RSimInfoPtr = fromwksInfo;
    }

    rtDW.FromWs_IWORK.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S1>/FromWs' */
  {
    FWksInfo *fromwksInfo;
    if ((fromwksInfo = (FWksInfo *) calloc(1, sizeof(FWksInfo))) == (NULL)) {
      ssSetErrorStatus(rtS,
                       "from workspace STRING(Name) memory allocation error");
    } else {
      fromwksInfo->origWorkspaceVarName = "tuvar";
      fromwksInfo->origDataTypeId = 0;
      fromwksInfo->origIsComplex = 0;
      fromwksInfo->origWidth = 1;
      fromwksInfo->origElSize = sizeof(real_T);
      fromwksInfo->data = (void *)rtConstP.FromWs_Data0_o;
      fromwksInfo->nDataPoints = 23;
      fromwksInfo->time = (double *)rtConstP.FromWs_Time0_m;
      rtDW.FromWs_PWORK_c.TimePtr = fromwksInfo->time;
      rtDW.FromWs_PWORK_c.DataPtr = fromwksInfo->data;
      rtDW.FromWs_PWORK_c.RSimInfoPtr = fromwksInfo;
    }

    rtDW.FromWs_IWORK_b.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S13>/FromWs' */
  {
    FWksInfo *fromwksInfo;
    if ((fromwksInfo = (FWksInfo *) calloc(1, sizeof(FWksInfo))) == (NULL)) {
      ssSetErrorStatus(rtS,
                       "from workspace STRING(Name) memory allocation error");
    } else {
      fromwksInfo->origWorkspaceVarName = "tuvar";
      fromwksInfo->origDataTypeId = 0;
      fromwksInfo->origIsComplex = 0;
      fromwksInfo->origWidth = 1;
      fromwksInfo->origElSize = sizeof(real_T);
      fromwksInfo->data = (void *)rtConstP.FromWs_Data0_l;
      fromwksInfo->nDataPoints = 30;
      fromwksInfo->time = (double *)rtConstP.FromWs_Time0_k;
      rtDW.FromWs_PWORK_p.TimePtr = fromwksInfo->time;
      rtDW.FromWs_PWORK_p.DataPtr = fromwksInfo->data;
      rtDW.FromWs_PWORK_p.RSimInfoPtr = fromwksInfo;
    }

    rtDW.FromWs_IWORK_h.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S14>/FromWs' */
  {
    FWksInfo *fromwksInfo;
    if ((fromwksInfo = (FWksInfo *) calloc(1, sizeof(FWksInfo))) == (NULL)) {
      ssSetErrorStatus(rtS,
                       "from workspace STRING(Name) memory allocation error");
    } else {
      fromwksInfo->origWorkspaceVarName = "tuvar";
      fromwksInfo->origDataTypeId = 0;
      fromwksInfo->origIsComplex = 0;
      fromwksInfo->origWidth = 1;
      fromwksInfo->origElSize = sizeof(real_T);
      fromwksInfo->data = (void *)rtConstP.FromWs_Data0_d;
      fromwksInfo->nDataPoints = 30;
      fromwksInfo->time = (double *)rtConstP.FromWs_Time0_n;
      rtDW.FromWs_PWORK_l.TimePtr = fromwksInfo->time;
      rtDW.FromWs_PWORK_l.DataPtr = fromwksInfo->data;
      rtDW.FromWs_PWORK_l.RSimInfoPtr = fromwksInfo;
    }

    rtDW.FromWs_IWORK_k.PrevIndex = 0;
  }

  /* Start for FromWorkspace: '<S15>/FromWs' */
  {
    FWksInfo *fromwksInfo;
    if ((fromwksInfo = (FWksInfo *) calloc(1, sizeof(FWksInfo))) == (NULL)) {
      ssSetErrorStatus(rtS,
                       "from workspace STRING(Name) memory allocation error");
    } else {
      fromwksInfo->origWorkspaceVarName = "tuvar";
      fromwksInfo->origDataTypeId = 0;
      fromwksInfo->origIsComplex = 0;
      fromwksInfo->origWidth = 1;
      fromwksInfo->origElSize = sizeof(real_T);
      fromwksInfo->data = (void *)rtConstP.FromWs_Data0_f;
      fromwksInfo->nDataPoints = 33;
      fromwksInfo->time = (double *)rtConstP.FromWs_Time0_a;
      rtDW.FromWs_PWORK_n.TimePtr = fromwksInfo->time;
      rtDW.FromWs_PWORK_n.DataPtr = fromwksInfo->data;
      rtDW.FromWs_PWORK_n.RSimInfoPtr = fromwksInfo;
    }

    rtDW.FromWs_IWORK_c.PrevIndex = 0;
  }

  /* Start for If: '<Root>/If' */
  rtDW.If_ActiveSubsystem = -1;
  MdlInitialize();
}

/* Outputs for root system: '<Root>' */
void MdlOutputs(int_T tid)
{
  int8_T rtAction;
  int8_T rtPrevAction;
  if (ssIsSampleHit(rtS, 2, 0)) {
    /* UnitDelay: '<S19>/Unit Delay' */
    rtB.UnitDelay = rtDW.UnitDelay_DSTATE;

    /* RelationalOperator: '<S19>/Relational Operator' incorporates:
     *  Constant: '<S19>/Constant'
     */
    rtB.RelationalOperator = (rtB.UnitDelay == 1.0);

    /* Logic: '<S19>/Logical Operator2' */
    rtB.LogicalOperator2 = (rtrtC.Compare_j && rtB.RelationalOperator);

    /* Logic: '<Root>/Logical Operator1' */
    rtB.LogicalOperator1 = (rtrtC.Compare_f || rtB.LogicalOperator2);
  }

  /* FromWorkspace: '<S12>/FromWs' */
  {
    real_T *pDataValues = (real_T *) rtDW.FromWs_PWORK.DataPtr;
    real_T *pTimeValues = (real_T *) rtDW.FromWs_PWORK.TimePtr;
    int_T currTimeIndex = rtDW.FromWs_IWORK.PrevIndex;
    real_T t = ssGetTaskTime(rtS,0);
    int numPoints, lastPoint;
    FWksInfo *fromwksInfo = (FWksInfo *) rtDW.FromWs_PWORK.RSimInfoPtr;
    numPoints = fromwksInfo->nDataPoints;
    lastPoint = numPoints - 1;

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[lastPoint]) {
      currTimeIndex = lastPoint-1;
    } else {
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }
    }

    rtDW.FromWs_IWORK.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          {
            int_T elIdx;
            for (elIdx = 0; elIdx < 2; ++elIdx) {
              (&rtB.FromWs[0])[elIdx] = pDataValues[currTimeIndex];
              pDataValues += numPoints;
            }
          }
        } else {
          {
            int_T elIdx;
            for (elIdx = 0; elIdx < 2; ++elIdx) {
              (&rtB.FromWs[0])[elIdx] = pDataValues[currTimeIndex + 1];
              pDataValues += numPoints;
            }
          }
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex = currTimeIndex;

        {
          int_T elIdx;
          for (elIdx = 0; elIdx < 2; ++elIdx) {
            d1 = pDataValues[TimeIndex];
            d2 = pDataValues[TimeIndex + 1];
            (&rtB.FromWs[0])[elIdx] = (real_T) rtInterpolate(d1, d2, f1, f2);
            pDataValues += numPoints;
          }
        }
      }
    }
  }

  /* RelationalOperator: '<S20>/Relational Operator1' incorporates:
   *  Constant: '<S20>/Constant1'
   */
  rtB.RelationalOperator1 = (rtB.FromWs[0] == 1.0);
  if (ssIsSampleHit(rtS, 2, 0)) {
    /* UnitDelay: '<S20>/Unit Delay' */
    rtB.UnitDelay_b = rtDW.UnitDelay_DSTATE_k;

    /* RelationalOperator: '<S20>/Relational Operator' incorporates:
     *  Constant: '<S20>/Constant'
     */
    rtB.RelationalOperator_h = (rtB.UnitDelay_b == 0.0);
  }

  /* Logic: '<S20>/Logical Operator3' */
  rtB.LogicalOperator3 = (rtB.RelationalOperator1 && rtB.RelationalOperator_h);
  if (ssIsSampleHit(rtS, 2, 0)) {
    /* RelationalOperator: '<S5>/Compare' */
    rtB.Compare = !rtB.LogicalOperator2;

    /* Logic: '<Root>/Logical Operator2' */
    rtB.LogicalOperator2_i = (rtB.Compare && rtrtC.Compare_a);

    /* Logic: '<Root>/Logical Operator' */
    rtB.LogicalOperator = (rtB.LogicalOperator2_i || rtrtC.Compare_b);

    /* UnitDelay: '<S21>/Unit Delay' */
    rtB.UnitDelay_j = rtDW.UnitDelay_DSTATE_a;

    /* RelationalOperator: '<S21>/Relational Operator' incorporates:
     *  Constant: '<S21>/Constant'
     */
    rtB.RelationalOperator_m = (rtB.UnitDelay_j == 0.0);
  }

  /* UnitDelay: '<S18>/Unit Delay' */
  rtB.UnitDelay_m = rtDW.UnitDelay_DSTATE_i;

  /* Switch: '<S18>/Switch1' incorporates:
   *  Constant: '<S18>/Constant2'
   *  Switch: '<S18>/Switch'
   */
  rtB.Switch1 = 1.0;

  /* Switch: '<S18>/Switch' */
  rtB.Switch = rtB.Switch1;

  /* Logic: '<Root>/Logical Operator4' */
  rtB.LogicalOperator4 = (rtB.LogicalOperator && (rtB.Switch != 0.0));

  /* Logic: '<Root>/Logical Operator3' */
  rtB.LogicalOperator3_g = (rtrtC.Compare_d && (rtB.Switch != 0.0));

  /* RelationalOperator: '<S21>/Relational Operator1' incorporates:
   *  Constant: '<S21>/Constant1'
   */
  rtB.RelationalOperator1_e = (rtB.FromWs[1] == 1.0);

  /* Logic: '<S21>/Logical Operator3' */
  rtB.LogicalOperator3_k = (rtB.RelationalOperator1_e &&
    rtB.RelationalOperator_m);

  /* FromWorkspace: '<S1>/FromWs' */
  {
    real_T *pDataValues = (real_T *) rtDW.FromWs_PWORK_c.DataPtr;
    real_T *pTimeValues = (real_T *) rtDW.FromWs_PWORK_c.TimePtr;
    int_T currTimeIndex = rtDW.FromWs_IWORK_b.PrevIndex;
    real_T t = ssGetTaskTime(rtS,0);
    int numPoints, lastPoint;
    FWksInfo *fromwksInfo = (FWksInfo *) rtDW.FromWs_PWORK_c.RSimInfoPtr;
    numPoints = fromwksInfo->nDataPoints;
    lastPoint = numPoints - 1;

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[lastPoint]) {
      currTimeIndex = lastPoint-1;
    } else {
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }
    }

    rtDW.FromWs_IWORK_b.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          rtB.FromWs_g = pDataValues[currTimeIndex];
        } else {
          rtB.FromWs_g = pDataValues[currTimeIndex + 1];
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex = currTimeIndex;
        d1 = pDataValues[TimeIndex];
        d2 = pDataValues[TimeIndex + 1];
        rtB.FromWs_g = (real_T) rtInterpolate(d1, d2, f1, f2);
        pDataValues += numPoints;
      }
    }
  }

  /* FromWorkspace: '<S13>/FromWs' */
  {
    real_T *pDataValues = (real_T *) rtDW.FromWs_PWORK_p.DataPtr;
    real_T *pTimeValues = (real_T *) rtDW.FromWs_PWORK_p.TimePtr;
    int_T currTimeIndex = rtDW.FromWs_IWORK_h.PrevIndex;
    real_T t = ssGetTaskTime(rtS,0);
    int numPoints, lastPoint;
    FWksInfo *fromwksInfo = (FWksInfo *) rtDW.FromWs_PWORK_p.RSimInfoPtr;
    numPoints = fromwksInfo->nDataPoints;
    lastPoint = numPoints - 1;

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[lastPoint]) {
      currTimeIndex = lastPoint-1;
    } else {
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }
    }

    rtDW.FromWs_IWORK_h.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          rtB.FromWs_d = pDataValues[currTimeIndex];
        } else {
          rtB.FromWs_d = pDataValues[currTimeIndex + 1];
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex = currTimeIndex;
        d1 = pDataValues[TimeIndex];
        d2 = pDataValues[TimeIndex + 1];
        rtB.FromWs_d = (real_T) rtInterpolate(d1, d2, f1, f2);
        pDataValues += numPoints;
      }
    }
  }

  /* RelationalOperator: '<S22>/Relational Operator1' incorporates:
   *  Constant: '<S22>/Constant1'
   */
  rtB.RelationalOperator1_p = (rtB.FromWs_d == 1.0);
  if (ssIsSampleHit(rtS, 2, 0)) {
    /* UnitDelay: '<S22>/Unit Delay' */
    rtB.UnitDelay_e = rtDW.UnitDelay_DSTATE_m;

    /* RelationalOperator: '<S22>/Relational Operator' incorporates:
     *  Constant: '<S22>/Constant'
     */
    rtB.RelationalOperator_e = (rtB.UnitDelay_e == 0.0);

    /* UnitDelay: '<S23>/Unit Delay' */
    rtB.UnitDelay_a = rtDW.UnitDelay_DSTATE_f;

    /* RelationalOperator: '<S23>/Relational Operator' incorporates:
     *  Constant: '<S23>/Constant'
     */
    rtB.RelationalOperator_j = (rtB.UnitDelay_a == 1.0);
  }

  /* Logic: '<S22>/Logical Operator3' */
  rtB.LogicalOperator3_e = (rtB.RelationalOperator1_p &&
    rtB.RelationalOperator_e);

  /* RelationalOperator: '<S23>/Relational Operator1' incorporates:
   *  Constant: '<S23>/Constant1'
   */
  rtB.RelationalOperator1_i = (rtB.FromWs_d == 0.0);

  /* Logic: '<S23>/Logical Operator3' */
  rtB.LogicalOperator3_j = (rtB.RelationalOperator1_i &&
    rtB.RelationalOperator_j);

  /* FromWorkspace: '<S14>/FromWs' */
  {
    real_T *pDataValues = (real_T *) rtDW.FromWs_PWORK_l.DataPtr;
    real_T *pTimeValues = (real_T *) rtDW.FromWs_PWORK_l.TimePtr;
    int_T currTimeIndex = rtDW.FromWs_IWORK_k.PrevIndex;
    real_T t = ssGetTaskTime(rtS,0);
    int numPoints, lastPoint;
    FWksInfo *fromwksInfo = (FWksInfo *) rtDW.FromWs_PWORK_l.RSimInfoPtr;
    numPoints = fromwksInfo->nDataPoints;
    lastPoint = numPoints - 1;

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[lastPoint]) {
      currTimeIndex = lastPoint-1;
    } else {
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }
    }

    rtDW.FromWs_IWORK_k.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          rtB.FromWs_f = pDataValues[currTimeIndex];
        } else {
          rtB.FromWs_f = pDataValues[currTimeIndex + 1];
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex = currTimeIndex;
        d1 = pDataValues[TimeIndex];
        d2 = pDataValues[TimeIndex + 1];
        rtB.FromWs_f = (real_T) rtInterpolate(d1, d2, f1, f2);
        pDataValues += numPoints;
      }
    }
  }

  /* FromWorkspace: '<S15>/FromWs' */
  {
    real_T *pDataValues = (real_T *) rtDW.FromWs_PWORK_n.DataPtr;
    real_T *pTimeValues = (real_T *) rtDW.FromWs_PWORK_n.TimePtr;
    int_T currTimeIndex = rtDW.FromWs_IWORK_c.PrevIndex;
    real_T t = ssGetTaskTime(rtS,0);
    int numPoints, lastPoint;
    FWksInfo *fromwksInfo = (FWksInfo *) rtDW.FromWs_PWORK_n.RSimInfoPtr;
    numPoints = fromwksInfo->nDataPoints;
    lastPoint = numPoints - 1;

    /* Get index */
    if (t <= pTimeValues[0]) {
      currTimeIndex = 0;
    } else if (t >= pTimeValues[lastPoint]) {
      currTimeIndex = lastPoint-1;
    } else {
      if (t < pTimeValues[currTimeIndex]) {
        while (t < pTimeValues[currTimeIndex]) {
          currTimeIndex--;
        }
      } else {
        while (t >= pTimeValues[currTimeIndex + 1]) {
          currTimeIndex++;
        }
      }
    }

    rtDW.FromWs_IWORK_c.PrevIndex = currTimeIndex;

    /* Post output */
    {
      real_T t1 = pTimeValues[currTimeIndex];
      real_T t2 = pTimeValues[currTimeIndex + 1];
      if (t1 == t2) {
        if (t < t1) {
          rtB.FromWs_f2 = pDataValues[currTimeIndex];
        } else {
          rtB.FromWs_f2 = pDataValues[currTimeIndex + 1];
        }
      } else {
        real_T f1 = (t2 - t) / (t2 - t1);
        real_T f2 = 1.0 - f1;
        real_T d1;
        real_T d2;
        int_T TimeIndex = currTimeIndex;
        d1 = pDataValues[TimeIndex];
        d2 = pDataValues[TimeIndex + 1];
        rtB.FromWs_f2 = (real_T) rtInterpolate(d1, d2, f1, f2);
        pDataValues += numPoints;
      }
    }
  }

  /* If: '<Root>/If' */
  rtPrevAction = rtDW.If_ActiveSubsystem;
  if (rtB.LogicalOperator1) {
    rtAction = 0;
  } else if (rtB.LogicalOperator4) {
    rtAction = 1;
  } else if (rtB.LogicalOperator3_g) {
    rtAction = 2;
  } else {
    rtAction = 3;
  }

  rtDW.If_ActiveSubsystem = rtAction;
  if (rtPrevAction != rtAction) {
    ssSetBlockStateForSolverChangedAtMajorStep(rtS);
  }

  switch (rtAction) {
   case 0:
    {
      if (rtAction != rtPrevAction) {
        real_T t;

        /* Enable for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
         *  ActionPort: '<S7>/Action Port'
         */
        /* Enable for If: '<Root>/If' */
        t = ssGetTStart(rtS);
        if (ssGetTaskTime(rtS,1) != t) {
          ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        }

        /* End of Enable for SubSystem: '<Root>/If Action Subsystem' */
      }

      /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
       *  ActionPort: '<S7>/Action Port'
       */
      /* Chart: '<S7>/Chart' */
      if (rtDW.temporalCounter_i2_ps < MAX_uint32_T) {
        rtDW.temporalCounter_i2_ps++;
      }

      if (rtDW.temporalCounter_i1_j4 < 1U) {
        rtDW.temporalCounter_i1_j4++;
      }

      if (rtDW.is_active_c3_Defrost_3 == 0U) {
        rtDW.is_active_c3_Defrost_3 = 1U;
        rtDW.is_Load_Shed_Management_c = Defrost_3_IN_LowVoltage;
        rtDW.is_Defrost_Management_o = Defrost_3_IN_Not_Active;

        /* :  FirstActivation = 0; */
        rtB.FirstActivation = 0.0;

        /* :  RDStatus = 0; */
        rtB.RDStatus_d = 0.0;

        /* :  TdefCounter = 0; */
        rtB.TdefCounter_i = 0.0;
      } else {
        switch (rtDW.is_Load_Shed_Management_c) {
         case Defrost_3_IN_HighVoltage:
          /* :  sf_internal_predicateOutput = BatteryVolt <= RearDef_Voltage_H; */
          if (rtB.FromWs_g <= 12.0) {
            rtDW.is_Load_Shed_Management_c = Defrost_3_IN_Normal;
          }
          break;

         case Defrost_3_IN_LowVoltage:
          /* :  sf_internal_predicateOutput = BatteryVolt > RearDef_Voltage_L; */
          if (rtB.FromWs_g > 11.5) {
            rtDW.is_Load_Shed_Management_c = Defrost_3_IN_Normal;
          }
          break;

         default:
          /* case IN_Normal: */
          /* :  sf_internal_predicateOutput = BatteryVolt <= RearDef_Voltage_L; */
          if (rtB.FromWs_g <= 11.5) {
            rtDW.is_Load_Shed_Management_c = Defrost_3_IN_LowVoltage;

            /* :  sf_internal_predicateOutput = BatteryVolt > RearDef_Voltage_H; */
          } else if (rtB.FromWs_g > 12.0) {
            rtDW.is_Load_Shed_Management_c = Defrost_3_IN_HighVoltage;
          }
          break;
        }

        switch (rtDW.is_Defrost_Management_o) {
         case Defrost_3_IN_Active:
          {
            rtB.FirstActivation = 1.0;
            rtB.RDStatus_d = 1.0;

            /* :  sf_internal_predicateOutput = (after(Tbatt1,sec)) && (in(Load_Shed_Management.LowVoltage)); */
            if ((rtDW.temporalCounter_i2_ps >= 400U) &&
                (rtDW.is_Load_Shed_Management_c == Defrost_3_IN_LowVoltage)) {
              rtDW.is_Defrost_Management_o = Defros_IN_NotActive_IndicatorOn;
              rtDW.temporalCounter_i2_ps = 0U;

              /* :  RDStatus = 2; */
              rtB.RDStatus_d = 2.0;
            } else {
              boolean_T d_out;

              /* :  sf_internal_predicateOutput = RemoteStart == 0 || ExternalTemp == SNA || ExternalTemp >= Temp_am; */
              d_out = ((rtB.FromWs_f == 0.0) || (rtB.FromWs_f2 == 170.5) ||
                       (rtB.FromWs_f2 >= 4.5));
              if (d_out) {
                rtDW.is_Defrost_Management_o = Defrost_3_IN_Not_Active;

                /* :  FirstActivation = 0; */
                rtB.FirstActivation = 0.0;

                /* :  RDStatus = 0; */
                rtB.RDStatus_d = 0.0;

                /* :  TdefCounter = 0; */
                rtB.TdefCounter_i = 0.0;

                /* :  sf_internal_predicateOutput = every(1,tick); */
              } else if (rtDW.temporalCounter_i1_j4 == 1) {
                /* :  TdefCounter = TdefCounter + 1; */
                rtB.TdefCounter_i++;
              }
            }
          }
          break;

         case Defros_IN_NotActive_IndicatorOn:
          rtB.RDStatus_d = 2.0;

          /* :  sf_internal_predicateOutput = (after(Tbatt2,sec)) && (in(Load_Shed_Management.HighVoltage)); */
          if ((rtDW.temporalCounter_i2_ps >= 400U) &&
              (rtDW.is_Load_Shed_Management_c == Defrost_3_IN_HighVoltage)) {
            rtDW.is_Defrost_Management_o = Defrost_3_IN_Active;
            rtDW.temporalCounter_i1_j4 = 0U;
            rtDW.temporalCounter_i2_ps = 0U;

            /* :  FirstActivation = 1; */
            rtB.FirstActivation = 1.0;

            /* :  RDStatus = 1; */
            rtB.RDStatus_d = 1.0;
          }
          break;

         default:
          {
            /* case IN_Not_Active: */
            rtB.FirstActivation = 0.0;
            rtB.RDStatus_d = 0.0;

            /* :  sf_internal_predicateOutput = IgnOff_ToOn == 1; */
            if (rtB.LogicalOperator2) {
              boolean_T d_out;

              /* :  sf_internal_predicateOutput = RemoteStart == 1 && ExternalTemp ~= SNA && ExternalTemp < Temp_am; */
              d_out = ((rtB.FromWs_f == 1.0) && (rtB.FromWs_f2 != 170.5) &&
                       (rtB.FromWs_f2 < 4.5));
              if (d_out) {
                rtDW.is_Defrost_Management_o = Defrost_3_IN_Active;
                rtDW.temporalCounter_i1_j4 = 0U;
                rtDW.temporalCounter_i2_ps = 0U;

                /* :  FirstActivation = 1; */
                rtB.FirstActivation = 1.0;

                /* :  RDStatus = 1; */
                rtB.RDStatus_d = 1.0;
              } else {
                rtDW.is_Defrost_Management_o = Defrost_3_IN_Not_Active;

                /* :  FirstActivation = 0; */
                rtB.FirstActivation = 0.0;

                /* :  RDStatus = 0; */
                rtB.RDStatus_d = 0.0;

                /* :  TdefCounter = 0; */
                rtB.TdefCounter_i = 0.0;
              }
            }
          }
          break;
        }
      }

      if (rtDW.temporalCounter_i1_j4 == 1U) {
        rtDW.temporalCounter_i1_j4 = 0U;
      }

      /* End of Chart: '<S7>/Chart' */

      /* Merge: '<Root>/Merge' incorporates:
       *  SignalConversion generated from: '<S7>/RDStatus'
       */
      rtB.Merge = rtB.RDStatus_d;

      /* End of Outputs for SubSystem: '<Root>/If Action Subsystem' */
    }
    break;

   case 1:
    {
      if (rtAction != rtPrevAction) {
        real_T t;

        /* Enable for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
         *  ActionPort: '<S8>/Action Port'
         */
        /* Enable for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
         *  ActionPort: '<S7>/Action Port'
         */
        /* Enable for If: '<Root>/If' */
        t = ssGetTStart(rtS);

        /* End of Enable for SubSystem: '<Root>/If Action Subsystem' */
        if (ssGetTaskTime(rtS,1) != t) {
          ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        }

        /* End of Enable for SubSystem: '<Root>/If Action Subsystem1' */
      }

      /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem1' incorporates:
       *  ActionPort: '<S8>/Action Port'
       */
      /* Chart: '<S8>/Chart' */
      if (rtDW.temporalCounter_i2_p < MAX_uint32_T) {
        rtDW.temporalCounter_i2_p++;
      }

      if (rtDW.temporalCounter_i1_j < 1U) {
        rtDW.temporalCounter_i1_j++;
      }

      if (rtDW.is_active_c1_Defrost_3 == 0U) {
        rtDW.is_active_c1_Defrost_3 = 1U;
        rtDW.is_Load_Shed_Management_l = Defrost_3_IN_LowVoltage;
        rtDW.is_Defrost_Management_a = Defrost_3_IN_Not_Active_p;

        /* :  RDStatus = 0; */
        rtB.RDStatus_eq = 0.0;

        /* :  TdefCounter = 0; */
        rtB.TdefCounter_g = 0.0;
      } else {
        boolean_T guard1 = false;
        boolean_T guard2 = false;
        boolean_T guard3 = false;
        switch (rtDW.is_Load_Shed_Management_l) {
         case Defrost_3_IN_HighVoltage:
          /* :  sf_internal_predicateOutput = BatteryVolt <= RearDef_Voltage_H; */
          rtDW.is_Load_Shed_Management_l = Defrost_3_IN_Normal;
          break;

         case Defrost_3_IN_LowVoltage:
          /* :  sf_internal_predicateOutput = BatteryVolt > RearDef_Voltage_L; */
          break;

         default:
          /* case IN_Normal: */
          /* :  sf_internal_predicateOutput = BatteryVolt <= RearDef_Voltage_L; */
          rtDW.is_Load_Shed_Management_l = Defrost_3_IN_LowVoltage;
          break;
        }

        guard1 = false;
        guard2 = false;
        guard3 = false;
        switch (rtDW.is_Defrost_Management_a) {
         case Defrost_3_IN_Acitive:
          {
            /* :  sf_internal_predicateOutput = (after(Tbatt1,sec)) && (in(Load_Shed_Management.LowVoltage)); */
            if ((rtDW.temporalCounter_i2_p >= 400U) &&
                (rtDW.is_Load_Shed_Management_l == Defrost_3_IN_LowVoltage)) {
              rtDW.is_Defrost_Management_a = Defro_IN_Not_Active_indicatorOn;
              rtDW.temporalCounter_i2_p = 0U;

              /* :  RDStatus = 2; */
              rtB.RDStatus_eq = 2.0;

              /* :  TdefCounter = 0; */
              rtB.TdefCounter_g = 0.0;
            } else {
              boolean_T d_out;

              /* :  sf_internal_predicateOutput = RHWindow == 1 || MaxDefrostSts_OffOn == 1; */
              d_out = (rtB.LogicalOperator3_k || rtB.LogicalOperator3_e);
              if (d_out) {
                guard2 = true;
              } else {
                /* :  sf_internal_predicateOutput = MaxDefrostSts ==1 && TdefCounter == 0; */
                d_out = ((rtB.FromWs_d == 1.0) && (rtB.TdefCounter_g == 0.0));
                if (d_out && rtB.LogicalOperator3_j) {
                  /* :  sf_internal_predicateOutput = MaxDefrostSts_OnOff == 1; */
                  guard2 = true;
                } else {
                  /* :  RDStatus = 1; */
                  rtB.RDStatus_eq = 1.0;

                  /* :  TdefCounter = TdefCounter + 1; */
                  rtB.TdefCounter_g++;

                  /* :  sf_internal_predicateOutput = FirstActivation == 0; */
                  if (rtB.FirstActivation == 0.0) {
                    /* :  FirstActivation1 = 1 */
                    rtB.FirstActivation1 = 1.0;

                    /* :  sf_internal_predicateOutput = TdefCounter > Tdef; */
                    if (rtB.TdefCounter_g > 10.0) {
                      guard2 = true;
                    } else {
                      guard3 = true;
                    }
                  } else {
                    guard3 = true;
                  }
                }
              }
            }
          }
          break;

         case Defrost_3_IN_Not_Active_p:
          {
            boolean_T d_out;

            /* :  sf_internal_predicateOutput = RHWindow == 1 || MaxDefrostSts_OffOn == 1 || DefrostRepetiton_Req == 1; */
            d_out = (rtB.LogicalOperator3_k || rtB.LogicalOperator3_e ||
                     rtB.LogicalOperator3);
            if (d_out) {
              rtDW.is_Defrost_Management_a = Defrost_3_IN_Acitive;
              rtDW.temporalCounter_i1_j = 0U;
              rtDW.temporalCounter_i2_p = 0U;

              /* :  RDStatus = 1; */
              rtB.RDStatus_eq = 1.0;

              /* :  TdefCounter = 1; */
              rtB.TdefCounter_g = 1.0;
              Defrost__enter_internal_Acitive();
            }
          }
          break;

         default:
          {
            /* case IN_Not_Active_indicatorOn: */
            /* :  sf_internal_predicateOutput = (after(Tbatt2,sec)) && (in(Load_Shed_Management.HighVoltage)); */
            if ((rtDW.temporalCounter_i2_p >= 400U) &&
                (rtDW.is_Load_Shed_Management_l == Defrost_3_IN_HighVoltage)) {
              guard1 = true;
            } else {
              boolean_T d_out;

              /* :  sf_internal_predicateOutput = in(Load_Shed_Management.Normal) && (RHWindow == 1 || DefrostRepetiton_Req == 1); */
              d_out = ((rtDW.is_Load_Shed_Management_l == Defrost_3_IN_Normal) &&
                       (rtB.LogicalOperator3_k || rtB.LogicalOperator3));
              if (d_out) {
                rtDW.is_Defrost_Management_a = Defrost_3_IN_Not_Active_p;

                /* :  RDStatus = 0; */
                rtB.RDStatus_eq = 0.0;

                /* :  TdefCounter = 0; */
                rtB.TdefCounter_g = 0.0;
              } else {
                /* :  sf_internal_predicateOutput = in(Load_Shed_Management.Normal) && DefrostRepetiton_Req == 0; */
                d_out = ((rtDW.is_Load_Shed_Management_l == Defrost_3_IN_Normal)
                         && (!rtB.LogicalOperator3));
                if (d_out) {
                  guard1 = true;
                }
              }
            }
          }
          break;
        }

        if (guard3) {
          /* :  FirstActivation1 = FirstActivation */
          rtB.FirstActivation1 = rtB.FirstActivation;

          /* :  sf_internal_predicateOutput = TdefCounter > Tdef_Second; */
          if (rtB.TdefCounter_g > 5.0) {
            guard2 = true;

            /* :  sf_internal_predicateOutput = every(1,tick); */
          } else if (rtDW.temporalCounter_i1_j == 1) {
            /* :  TdefCounter = TdefCounter + 1; */
            rtB.TdefCounter_g++;
          }
        }

        if (guard2) {
          rtDW.is_Defrost_Management_a = Defrost_3_IN_Not_Active_p;

          /* :  RDStatus = 0; */
          rtB.RDStatus_eq = 0.0;

          /* :  TdefCounter = 0; */
          rtB.TdefCounter_g = 0.0;
        }

        if (guard1) {
          rtDW.is_Defrost_Management_a = Defrost_3_IN_Acitive;
          rtDW.temporalCounter_i1_j = 0U;
          rtDW.temporalCounter_i2_p = 0U;

          /* :  RDStatus = 1; */
          rtB.RDStatus_eq = 1.0;

          /* :  TdefCounter = 1; */
          rtB.TdefCounter_g = 1.0;
          Defrost__enter_internal_Acitive();
        }
      }

      if (rtDW.temporalCounter_i1_j == 1U) {
        rtDW.temporalCounter_i1_j = 0U;
      }

      /* End of Chart: '<S8>/Chart' */

      /* Merge: '<Root>/Merge' incorporates:
       *  SignalConversion generated from: '<S8>/RDStatus'
       */
      rtB.Merge = rtB.RDStatus_eq;

      /* End of Outputs for SubSystem: '<Root>/If Action Subsystem1' */
    }
    break;

   case 2:
    {
      if (rtAction != rtPrevAction) {
        real_T t;

        /* Enable for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
         *  ActionPort: '<S9>/Action Port'
         */
        /* Enable for IfAction SubSystem: '<Root>/If Action Subsystem' incorporates:
         *  ActionPort: '<S7>/Action Port'
         */
        /* Enable for If: '<Root>/If' */
        t = ssGetTStart(rtS);

        /* End of Enable for SubSystem: '<Root>/If Action Subsystem' */
        if (ssGetTaskTime(rtS,1) != t) {
          ssSetBlockStateForSolverChangedAtMajorStep(rtS);
        }

        /* End of Enable for SubSystem: '<Root>/If Action Subsystem2' */
      }

      /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem2' incorporates:
       *  ActionPort: '<S9>/Action Port'
       */
      /* Chart: '<S9>/Chart' */
      if (rtDW.temporalCounter_i2 < MAX_uint32_T) {
        rtDW.temporalCounter_i2++;
      }

      if (rtDW.temporalCounter_i1 < 2U) {
        rtDW.temporalCounter_i1++;
      }

      if (rtDW.is_active_c2_Defrost_3 == 0U) {
        rtDW.is_active_c2_Defrost_3 = 1U;
        rtDW.is_Load_Shed_Management = Defrost_3_IN_LowVoltage;
        rtDW.is_Defrost_Management = Defrost_3_IN_Not_Active_p;

        /* :  RDStatus = 0; */
        rtB.RDStatus_e = 0.0;

        /* :  TdefCounter = 0; */
        rtB.TdefCounter = 0.0;
      } else {
        boolean_T guard1;
        boolean_T guard2;
        boolean_T guard3;
        boolean_T guard4 = false;
        switch (rtDW.is_Load_Shed_Management) {
         case Defrost_3_IN_HighVoltage:
          /* :  sf_internal_predicateOutput = BatteryVolt <= RearDef_Voltage_H; */
          if (rtB.FromWs_g <= 12.0) {
            rtDW.is_Load_Shed_Management = Defrost_3_IN_Normal;
          }
          break;

         case Defrost_3_IN_LowVoltage:
          /* :  sf_internal_predicateOutput = BatteryVolt > RearDef_Voltage_L; */
          if (rtB.FromWs_g > 11.5) {
            rtDW.is_Load_Shed_Management = Defrost_3_IN_Normal;
          }
          break;

         default:
          /* case IN_Normal: */
          /* :  sf_internal_predicateOutput = BatteryVolt <= RearDef_Voltage_L; */
          if (rtB.FromWs_g <= 11.5) {
            rtDW.is_Load_Shed_Management = Defrost_3_IN_LowVoltage;

            /* :  sf_internal_predicateOutput = BatteryVolt > RearDef_Voltage_H; */
          } else if (rtB.FromWs_g > 12.0) {
            rtDW.is_Load_Shed_Management = Defrost_3_IN_HighVoltage;
          }
          break;
        }

        guard1 = false;
        guard2 = false;
        guard3 = false;
        guard4 = false;
        switch (rtDW.is_Defrost_Management) {
         case Defrost_3_IN_Active:
          {
            /* :  sf_internal_predicateOutput = (after(Tbatt1,sec)) && (in(Load_Shed_Management.LowVoltage)); */
            if ((rtDW.temporalCounter_i2 >= 400U) &&
                (rtDW.is_Load_Shed_Management == Defrost_3_IN_LowVoltage)) {
              guard3 = true;
            } else {
              boolean_T d_out;

              /* :  sf_internal_predicateOutput = in(Load_Shed_Management.Normal) && DefrostRepetiton_Req == 0; */
              d_out = ((rtDW.is_Load_Shed_Management == Defrost_3_IN_Normal) &&
                       (!rtB.LogicalOperator3));
              if (d_out) {
                guard3 = true;

                /* :  sf_internal_predicateOutput = every(2,tick); */
              } else if (rtDW.temporalCounter_i1 == 2) {
                /* :  TdefCounter = TdefCounter + 1; */
                rtB.TdefCounter++;
              }
            }
          }
          break;

         case Defrost_3_IN_Not_Active_p:
          {
            boolean_T d_out;

            /* :  sf_internal_predicateOutput = RHWindow == 1 || MaxDefrostSts_OffOn == 1 || DefrostRepetiton_Req == 1; */
            d_out = (rtB.LogicalOperator3_k || rtB.LogicalOperator3_e ||
                     rtB.LogicalOperator3);
            if (d_out) {
              rtDW.is_Defrost_Management = Defro_IN_Not_Active_IndicatorOn;
              rtDW.temporalCounter_i1 = 0U;
              rtDW.temporalCounter_i2 = 0U;

              /* :  RDStatus = 2; */
              rtB.RDStatus_e = 2.0;
              enter_internal_Not_Active_Indic();

              /* :  sf_internal_predicateOutput = DefrostRepetiton_Req == 0; */
            } else if (!rtB.LogicalOperator3) {
              rtDW.is_Defrost_Management = Defrost_3_IN_Not_Active_p;

              /* :  RDStatus = 0; */
              rtB.RDStatus_e = 0.0;

              /* :  TdefCounter = 0; */
              rtB.TdefCounter = 0.0;
            }
          }
          break;

         default:
          {
            /* case IN_Not_Active_IndicatorOn: */
            /* :  sf_internal_predicateOutput = (after(Tbatt2,sec)) && (in(Load_Shed_Management.HighVoltage)); */
            if ((rtDW.temporalCounter_i2 >= 400U) &&
                (rtDW.is_Load_Shed_Management == Defrost_3_IN_HighVoltage)) {
              rtDW.is_Defrost_Management = Defrost_3_IN_Active;
              rtDW.temporalCounter_i1 = 0U;
              rtDW.temporalCounter_i2 = 0U;

              /* :  RDStatus = 1; */
              rtB.RDStatus_e = 1.0;
            } else {
              boolean_T d_out;

              /* :  sf_internal_predicateOutput = in(Load_Shed_Management.Normal) && (RHWindow == 1 || DefrostRepetiton_Req == 1); */
              d_out = ((rtDW.is_Load_Shed_Management == Defrost_3_IN_Normal) &&
                       (rtB.LogicalOperator3_k || rtB.LogicalOperator3));
              if (d_out) {
                guard2 = true;
              } else {
                /* :  sf_internal_predicateOutput = in(Load_Shed_Management.Normal) && DefrostRepetiton_Req == 0; */
                d_out = ((rtDW.is_Load_Shed_Management == Defrost_3_IN_Normal) &&
                         (!rtB.LogicalOperator3));
                if (d_out) {
                  rtDW.is_Defrost_Management = Defro_IN_Not_Active_IndicatorOn;
                  rtDW.temporalCounter_i1 = 0U;
                  rtDW.temporalCounter_i2 = 0U;

                  /* :  RDStatus = 2; */
                  rtB.RDStatus_e = 2.0;
                  enter_internal_Not_Active_Indic();

                  /* :  sf_internal_predicateOutput = in(Load_Shed_Management.Normal); */
                } else if (rtDW.is_Load_Shed_Management == Defrost_3_IN_Normal)
                {
                  /* :  sf_internal_predicateOutput = MaxDefrostSts == 1 && TdefCounter == 0; */
                  d_out = ((rtB.FromWs_d == 1.0) && (rtB.TdefCounter == 0.0));
                  if (d_out && rtB.LogicalOperator3_j) {
                    /* :  sf_internal_predicateOutput = MaxDefrostSts_OnOff == 1; */
                    guard2 = true;
                  } else {
                    /* :  RDStatus = 2; */
                    rtB.RDStatus_e = 2.0;

                    /* :  TdefCounter = TdefCounter + 1 */
                    rtB.TdefCounter++;

                    /* :  sf_internal_predicateOutput = FirstActivation1 == 0; */
                    if (rtB.FirstActivation1 == 0.0) {
                      /* :  FirstActivation2 = 1 */
                      rtB.FirstActivation2 = 1.0;

                      /* :  sf_internal_predicateOutput = TdefCounter > Tdef; */
                      if (rtB.TdefCounter > 10.0) {
                        guard2 = true;
                      } else {
                        guard4 = true;
                      }
                    } else {
                      guard4 = true;
                    }
                  }
                } else {
                  guard1 = true;
                }
              }
            }
          }
          break;
        }

        if (guard4) {
          /* :  FirstActivation2 = FirstActivation1 */
          rtB.FirstActivation2 = rtB.FirstActivation1;

          /* :  sf_internal_predicateOutput = TdefCounter > Tdef_Second; */
          if (rtB.TdefCounter > 5.0) {
            guard2 = true;
          } else {
            guard1 = true;
          }
        }

        if (guard3) {
          rtDW.is_Defrost_Management = Defro_IN_Not_Active_IndicatorOn;
          rtDW.temporalCounter_i1 = 0U;
          rtDW.temporalCounter_i2 = 0U;

          /* :  RDStatus = 2; */
          rtB.RDStatus_e = 2.0;
          enter_internal_Not_Active_Indic();
        }

        if (guard2) {
          rtDW.is_Defrost_Management = Defrost_3_IN_Not_Active_p;

          /* :  RDStatus = 0; */
          rtB.RDStatus_e = 0.0;

          /* :  TdefCounter = 0; */
          rtB.TdefCounter = 0.0;
        }

        if (guard1) {
          /* :  sf_internal_predicateOutput = every(2,tick); */
          if (rtDW.temporalCounter_i1 == 2) {
            /* :  TdefCounter = TdefCounter + 1; */
            rtB.TdefCounter++;
          }
        }
      }

      if (rtDW.temporalCounter_i1 == 2U) {
        rtDW.temporalCounter_i1 = 0U;
      }

      /* End of Chart: '<S9>/Chart' */

      /* Merge: '<Root>/Merge' incorporates:
       *  SignalConversion generated from: '<S9>/RDStatus'
       */
      rtB.Merge = rtB.RDStatus_e;

      /* End of Outputs for SubSystem: '<Root>/If Action Subsystem2' */
    }
    break;

   default:
    /* Outputs for IfAction SubSystem: '<Root>/If Action Subsystem3' incorporates:
     *  ActionPort: '<S10>/Action Port'
     */
    /* Chart: '<S10>/Chart' */
    if (rtDW.is_active_c4_Defrost_3 == 0U) {
      rtDW.is_active_c4_Defrost_3 = 1U;

      /* :  RDStatus = 0; */
      rtB.RDStatus = 0.0;
    } else {
      rtB.RDStatus = 0.0;
    }

    /* End of Chart: '<S10>/Chart' */

    /* Merge: '<Root>/Merge' incorporates:
     *  SignalConversion generated from: '<S10>/RDStatus'
     */
    rtB.Merge = rtB.RDStatus;

    /* End of Outputs for SubSystem: '<Root>/If Action Subsystem3' */
    break;
  }

  /* End of If: '<Root>/If' */

  /* Chart: '<S17>/Chart' */
  /* :  sf_internal_predicateOutput = RDStatus == 0; */
  if (rtB.Merge == 0.0) {
    /* :  R_DefrostCmd = 0; */
    rtB.R_DefrostCmd = 0.0;

    /* :  R_DefrostInfo = 0; */
    rtB.R_DefrostInfo = 0.0;

    /* :  CANA_RHWLoadSts = 0; */
    rtB.CANA_RHWLoadSts = 0.0;

    /* :  CANB_RHWindowSts = 0; */
    rtB.CANB_RHWindowSts = 0.0;

    /* :  sf_internal_predicateOutput = RDStatus == 1; */
  } else if (rtB.Merge == 1.0) {
    /* :  R_DefrostCmd = 1; */
    rtB.R_DefrostCmd = 1.0;

    /* :  R_DefrostInfo = 1; */
    rtB.R_DefrostInfo = 1.0;

    /* :  CANA_RHWLoadSts = 1; */
    rtB.CANA_RHWLoadSts = 1.0;

    /* :  CANB_RHWindowSts = 1; */
    rtB.CANB_RHWindowSts = 1.0;

    /* :  sf_internal_predicateOutput = RDStatus == 2; */
  } else if (rtB.Merge == 2.0) {
    /* :  R_DefrostCmd = 0; */
    rtB.R_DefrostCmd = 0.0;

    /* :  R_DefrostInfo = 0; */
    rtB.R_DefrostInfo = 0.0;

    /* :  CANA_RHWLoadSts = 0; */
    rtB.CANA_RHWLoadSts = 0.0;

    /* :  CANB_RHWindowSts = 1; */
    rtB.CANB_RHWindowSts = 1.0;
  }

  /* End of Chart: '<S17>/Chart' */
  if (ssIsSampleHit(rtS, 2, 0)) {
  }

  UNUSED_PARAMETER(tid);
}

/* Update for root system: '<Root>' */
void MdlUpdate(int_T tid)
{
  if (ssIsSampleHit(rtS, 2, 0)) {
    /* Update for UnitDelay: '<S19>/Unit Delay' */
    rtDW.UnitDelay_DSTATE = rtrtC.Switch;

    /* Update for UnitDelay: '<S20>/Unit Delay' */
    rtDW.UnitDelay_DSTATE_k = rtB.FromWs[0];

    /* Update for UnitDelay: '<S21>/Unit Delay' */
    rtDW.UnitDelay_DSTATE_a = rtB.FromWs[1];

    /* Update for UnitDelay: '<S22>/Unit Delay' */
    rtDW.UnitDelay_DSTATE_m = rtB.FromWs_d;

    /* Update for UnitDelay: '<S23>/Unit Delay' */
    rtDW.UnitDelay_DSTATE_f = rtB.FromWs_d;
  }

  /* Update for UnitDelay: '<S18>/Unit Delay' incorporates:
   *  Constant: '<S18>/Constant'
   */
  rtDW.UnitDelay_DSTATE_i = 0.0;
  UNUSED_PARAMETER(tid);
}

/* Termination for root system: '<Root>' */
void MdlTerminate(void)
{
  /* Terminate for FromWorkspace: '<S12>/FromWs' */
  rt_FREE(rtDW.FromWs_PWORK.RSimInfoPtr);

  /* Terminate for FromWorkspace: '<S1>/FromWs' */
  rt_FREE(rtDW.FromWs_PWORK_c.RSimInfoPtr);

  /* Terminate for FromWorkspace: '<S13>/FromWs' */
  rt_FREE(rtDW.FromWs_PWORK_p.RSimInfoPtr);

  /* Terminate for FromWorkspace: '<S14>/FromWs' */
  rt_FREE(rtDW.FromWs_PWORK_l.RSimInfoPtr);

  /* Terminate for FromWorkspace: '<S15>/FromWs' */
  rt_FREE(rtDW.FromWs_PWORK_n.RSimInfoPtr);
}

/* Function to initialize sizes */
void MdlInitializeSizes(void)
{
  ssSetNumContStates(rtS, 0);          /* Number of continuous states */
  ssSetNumY(rtS, 0);                   /* Number of model outputs */
  ssSetNumU(rtS, 0);                   /* Number of model inputs */
  ssSetDirectFeedThrough(rtS, 0);      /* The model is not direct feedthrough */
  ssSetNumSampleTimes(rtS, 3);         /* Number of sample times */
  ssSetNumBlocks(rtS, 101);            /* Number of blocks */
  ssSetNumBlockIO(rtS, 48);            /* Number of block outputs */
}

/* Function to initialize sample times. */
void MdlInitializeSampleTimes(void)
{
  /* task periods */
  ssSetSampleTime(rtS, 0, 0.0);
  ssSetSampleTime(rtS, 1, 0.0025);
  ssSetSampleTime(rtS, 2, 5.0);

  /* task offsets */
  ssSetOffsetTime(rtS, 0, 0.0);
  ssSetOffsetTime(rtS, 1, 0.0);
  ssSetOffsetTime(rtS, 2, 0.0);
}

/* Function to register the model */
/* Turns off all optimizations on Windows because of issues with VC 2015 compiler.
   This function is not performance-critical, hence this is not a problem.
 */
#if defined(_MSC_VER)

#pragma optimize( "", off )

#endif

SimStruct * Defrost_3(void)
{
  static struct _ssMdlInfo mdlInfo;
  static struct _ssBlkInfo2 blkInfo2;
  static struct _ssBlkInfoSLSize blkInfoSLSize;
  (void) memset((char *)rtS, 0,
                sizeof(SimStruct));
  (void) memset((char *)&mdlInfo, 0,
                sizeof(struct _ssMdlInfo));
  (void) memset((char *)&blkInfo2, 0,
                sizeof(struct _ssBlkInfo2));
  (void) memset((char *)&blkInfoSLSize, 0,
                sizeof(struct _ssBlkInfoSLSize));
  ssSetBlkInfo2Ptr(rtS, &blkInfo2);
  ssSetBlkInfoSLSizePtr(rtS, &blkInfoSLSize);
  ssSetMdlInfoPtr(rtS, &mdlInfo);

  /* timing info */
  {
    static time_T mdlPeriod[NSAMPLE_TIMES];
    static time_T mdlOffset[NSAMPLE_TIMES];
    static time_T mdlTaskTimes[NSAMPLE_TIMES];
    static int_T mdlTsMap[NSAMPLE_TIMES];
    static int_T mdlSampleHits[NSAMPLE_TIMES];

    {
      int_T i;
      for (i = 0; i < NSAMPLE_TIMES; i++) {
        mdlPeriod[i] = 0.0;
        mdlOffset[i] = 0.0;
        mdlTaskTimes[i] = 0.0;
        mdlTsMap[i] = i;
        mdlSampleHits[i] = 1;
      }
    }

    ssSetSampleTimePtr(rtS, &mdlPeriod[0]);
    ssSetOffsetTimePtr(rtS, &mdlOffset[0]);
    ssSetSampleTimeTaskIDPtr(rtS, &mdlTsMap[0]);
    ssSetTPtr(rtS, &mdlTaskTimes[0]);
    ssSetSampleHitPtr(rtS, &mdlSampleHits[0]);
  }

  ssSetSolverMode(rtS, SOLVER_MODE_SINGLETASKING);

  /*
   * initialize model vectors and cache them in SimStruct
   */

  /* block I/O */
  {
    ssSetBlockIO(rtS, ((void *) &rtB));
    (void) memset(((void *) &rtB), 0,
                  sizeof(B));
  }

  /* states (dwork) */
  {
    void *dwork = (void *) &rtDW;
    ssSetRootDWork(rtS, dwork);
    (void) memset(dwork, 0,
                  sizeof(DW));
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    ssSetModelMappingInfo(rtS, &dtInfo);
    dtInfo.numDataTypes = 23;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;
  }

  /* Model specific registration */
  ssSetRootSS(rtS, rtS);
  ssSetVersion(rtS, SIMSTRUCT_VERSION_LEVEL2);
  ssSetModelName(rtS, "Defrost_3");
  ssSetPath(rtS, "Defrost_3");
  ssSetTStart(rtS, 0.0);
  ssSetTFinal(rtS, 10.0);
  ssSetStepSize(rtS, 0.0025);
  ssSetFixedStepSize(rtS, 0.0025);

  /* Setup for data logging */
  {
    static RTWLogInfo rt_DataLoggingInfo;
    rt_DataLoggingInfo.loggingInterval = (NULL);
    ssSetRTWLogInfo(rtS, &rt_DataLoggingInfo);
  }

  /* Setup for data logging */
  {
    rtliSetLogXSignalInfo(ssGetRTWLogInfo(rtS), (NULL));
    rtliSetLogXSignalPtrs(ssGetRTWLogInfo(rtS), (NULL));
    rtliSetLogT(ssGetRTWLogInfo(rtS), "tout");
    rtliSetLogX(ssGetRTWLogInfo(rtS), "");
    rtliSetLogXFinal(ssGetRTWLogInfo(rtS), "");
    rtliSetLogVarNameModifier(ssGetRTWLogInfo(rtS), "rt_");
    rtliSetLogFormat(ssGetRTWLogInfo(rtS), 4);
    rtliSetLogMaxRows(ssGetRTWLogInfo(rtS), 0);
    rtliSetLogDecimation(ssGetRTWLogInfo(rtS), 1);
    rtliSetLogY(ssGetRTWLogInfo(rtS), "");
    rtliSetLogYSignalInfo(ssGetRTWLogInfo(rtS), (NULL));
    rtliSetLogYSignalPtrs(ssGetRTWLogInfo(rtS), (NULL));
  }

  ssSetChecksumVal(rtS, 0, 1595161754U);
  ssSetChecksumVal(rtS, 1, 4194826461U);
  ssSetChecksumVal(rtS, 2, 388495432U);
  ssSetChecksumVal(rtS, 3, 447423483U);
  return rtS;
}

/* When you use the on parameter, it resets the optimizations to those that you
   specified with the /O compiler option. */
#if defined(_MSC_VER)

#pragma optimize( "", on )

#endif
