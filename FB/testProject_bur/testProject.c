/********************************************************************
 * COPYRIGHT -- B&R Industrial Automation GmbH
 ********************************************************************
 * Program: testProject
 * File: testProject.c
 * Author: stadelmanj
 * Last modified by: stadelmanj
 * Created: Tue Sep 26 07:43:19 2023
 * Last modified: Wed Sep 27 19:36:02 2023
 * Model Version: 1.9
 * Description:
 * modified Comment:
 ********************************************************************
 * Implementation of program testProject
 ********************************************************************
 * Generated with B&R Automation Studio Target for Simulink V6.8.0
 * (ERT based)
 ********************************************************************/

#include "testProject.h"
#include "rtwtypes.h"
#include "testProject_private.h"
#include "testProject_dt.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/* Block signals (default storage) */
BlockIO_testProject testProject_B;

/* External outputs (root outports fed by signals with default storage) */
ExternalOutputs_testProject testProject_Y;

/* Real-time model */
static RT_MODEL_testProject testProject_M_;
RT_MODEL_testProject *const testProject_M = &testProject_M_;

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/

/* Model output function */
void testProject_output(void)
{
  /* S-Function (bur_ext_struct_in): '<Root>/Ext Struct In' */
  testProject_B.ExtStructIn = gStruInputs;

  /* Sum: '<Root>/Add' */
  testProject_B.tempOut = testProject_B.ExtStructIn.temp1 +
    testProject_B.ExtStructIn.temp2;

  /* BusCreator generated from: '<Root>/Ext Struct Out' */
  testProject_B.BusConversion_InsertedFor_ExtSt.tempIn =
    testProject_B.ExtStructIn;

  /* BusCreator generated from: '<Root>/Ext Struct Out' */
  testProject_B.BusConversion_InsertedFor_ExtSt.tempOut = testProject_B.tempOut;

  /* Gain: '<Root>/Gain' */
  testProject_B.Gain = gain * testProject_B.tempOut;

  /* Outport: '<Root>/Out2' */
  testProject_Y.Out2 = testProject_B.Gain;

  /* S-Function (bur_ext_struct_out): '<Root>/Ext Struct Out' */
  gStrOut = testProject_B.BusConversion_InsertedFor_ExtSt;
  Out2 = testProject_Y.Out2;
}

/* Model update function */
void testProject_update(void)
{
  /* signal main to stop simulation */
  {                                    /* Sample time: [0.01s, 0.0s] */
    if ((rtmGetTFinal(testProject_M)!=-1) &&
        !((rtmGetTFinal(testProject_M)-testProject_M->Timing.taskTime0) >
          testProject_M->Timing.taskTime0 * (DBL_EPSILON))) {
      rtmSetErrorStatus(testProject_M, "Simulation finished");
    }

    if (rtmGetStopRequested(testProject_M)) {
      rtmSetErrorStatus(testProject_M, "Simulation finished");
    }
  }

  /* Update absolute time for base rate */
  /* The "clockTick0" counts the number of times the code of this task has
   * been executed. The absolute time is the multiplication of "clockTick0"
   * and "Timing.stepSize0". Size of "clockTick0" ensures timer will not
   * overflow during the application lifespan selected.
   * Timer of this task consists of two 32 bit unsigned integers.
   * The two integers represent the low bits Timing.clockTick0 and the high bits
   * Timing.clockTickH0. When the low bit overflows to 0, the high bits increment.
   */
  if (!(++testProject_M->Timing.clockTick0)) {
    ++testProject_M->Timing.clockTickH0;
  }

  testProject_M->Timing.taskTime0 = testProject_M->Timing.clockTick0 *
    testProject_M->Timing.stepSize0 + testProject_M->Timing.clockTickH0 *
    testProject_M->Timing.stepSize0 * 4294967296.0;
}

/* Model initialize function */
void testProject_initialize(void)
{
  /* Registration code */
  rtmSetTFinal(testProject_M, -1);
  testProject_M->Timing.stepSize0 = 0.01;

  /* External mode info */
  testProject_M->Sizes.checksums[0] = (3932612039U);
  testProject_M->Sizes.checksums[1] = (480659330U);
  testProject_M->Sizes.checksums[2] = (3496213137U);
  testProject_M->Sizes.checksums[3] = (1793666460U);

  {
    static const sysRanDType rtAlwaysEnabled = SUBSYS_RAN_BC_ENABLE;
    static RTWExtModeInfo rt_ExtModeInfo;
    static const sysRanDType *systemRan[1];
    testProject_M->extModeInfo = (&rt_ExtModeInfo);
    rteiSetSubSystemActiveVectorAddresses(&rt_ExtModeInfo, systemRan);
    systemRan[0] = &rtAlwaysEnabled;
    rteiSetModelMappingInfoPtr(testProject_M->extModeInfo,
      &testProject_M->SpecialInfo.mappingInfo);
    rteiSetChecksumsPtr(testProject_M->extModeInfo,
                        testProject_M->Sizes.checksums);
    rteiSetTPtr(testProject_M->extModeInfo, rtmGetTPtr(testProject_M));
  }

  /* data type transition information */
  {
    static DataTypeTransInfo dtInfo;
    (void) memset((char_T *) &dtInfo, 0,
                  sizeof(dtInfo));
    testProject_M->SpecialInfo.mappingInfo = (&dtInfo);
    dtInfo.numDataTypes = 21;
    dtInfo.dataTypeSizes = &rtDataTypeSizes[0];
    dtInfo.dataTypeNames = &rtDataTypeNames[0];

    /* Block I/O transition table */
    dtInfo.BTransTable = &rtBTransTable;

    /* Parameters transition table */
    dtInfo.PTransTable = &rtPTransTable;
  }
}

/* Model terminate function */
void testProject_terminate(void)
{
  /* (no terminate code required) */
}

/*======================== TOOL VERSION INFORMATION ==========================*
 * MATLAB 9.14 (R2023a)19-Nov-2022                                            *
 * Simulink 10.7 (R2023a)19-Nov-2022                                          *
 * Simulink Coder 9.9 (R2023a)19-Nov-2022                                     *
 * Embedded Coder 7.10 (R2023a)19-Nov-2022                                    *
 * Stateflow 10.8 (R2023a)19-Nov-2022                                         *
 *============================================================================*/

/*======================= LICENSE IN USE INFORMATION =========================*
 * matlab                                                                     *
 * matlab_coder                                                               *
 * real-time_workshop                                                         *
 * rtw_embedded_coder                                                         *
 * simulink                                                                   *
 *============================================================================*/
