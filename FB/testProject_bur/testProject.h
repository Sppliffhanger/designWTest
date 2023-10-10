/********************************************************************
 * COPYRIGHT -- B&R Industrial Automation GmbH
 ********************************************************************
 * Program: testProject
 * File: testProject.h
 * Author: stadelmanj
 * Last modified by: stadelmanj
 * Created: Tue Sep 26 07:43:19 2023
 * Last modified: Wed Sep 27 19:36:02 2023
 * Model Version: 1.9
 * Description:
 * modified Comment:
 ********************************************************************
 * Header for program testProject
 ********************************************************************
 * Generated with B&R Automation Studio Target for Simulink V6.8.0
 * (ERT based)
 ********************************************************************/

#ifndef RTW_HEADER_testProject_h_
#define RTW_HEADER_testProject_h_
#ifndef testProject_COMMON_INCLUDES_
#define testProject_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_extmode.h"
#include "sysran_types.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "dt_info.h"
#include "ext_work.h"
#endif                                 /* testProject_COMMON_INCLUDES_ */

#include <bur/plctypes.h>

#ifdef _DEFAULT_INCLUDES
 #include <AsDefault.h>
#endif

#ifndef AST_ROUND
#define AST_ROUND(x) ((x)>=0?(long long)((x)+0.5):(long long)((x)-0.5))
#endif

#include "testProject_types.h"

#include <float.h>
#include <string.h>

/* Macros for accessing real-time model data structure */
#ifndef rtmGetFinalTime
#define rtmGetFinalTime(rtm)           ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetRTWExtModeInfo
#define rtmGetRTWExtModeInfo(rtm)      ((rtm)->extModeInfo)
#endif

#ifndef rtmGetErrorStatus
#define rtmGetErrorStatus(rtm)         ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
#define rtmSetErrorStatus(rtm, val)    ((rtm)->errorStatus = (val))
#endif

#ifndef rtmGetStopRequested
#define rtmGetStopRequested(rtm)       ((rtm)->Timing.stopRequestedFlag)
#endif

#ifndef rtmSetStopRequested
#define rtmSetStopRequested(rtm, val)  ((rtm)->Timing.stopRequestedFlag = (val))
#endif

#ifndef rtmGetStopRequestedPtr
#define rtmGetStopRequestedPtr(rtm)    (&((rtm)->Timing.stopRequestedFlag))
#endif

#ifndef rtmGetT
#define rtmGetT(rtm)                   ((rtm)->Timing.taskTime0)
#endif

#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm)              ((rtm)->Timing.tFinal)
#endif

#ifndef rtmGetTPtr
#define rtmGetTPtr(rtm)                (&(rtm)->Timing.taskTime0)
#endif

#ifndef MIN
#define MIN(a,b)                       ((a) < (b) ? (a) : (b))
#endif

#ifndef MAX
#define MAX(a,b)                       ((a) > (b) ? (a) : (b))
#endif

#ifndef AST_ROUND
#define AST_ROUND(x)                   ((x)>=0?(long long)((x)+0.5):(long long)((x)-0.5))
#endif

/* Block signals (default storage) */
typedef struct {
  MyOutputType BusConversion_InsertedFor_ExtSt;
  MyInputsType ExtStructIn;            /* '<Root>/Ext Struct In' */
  real32_T tempOut;                    /* '<Root>/Add' */
  real32_T Gain;                       /* '<Root>/Gain' */
} BlockIO_testProject;

/* External outputs (root outports fed by signals with default storage) */
typedef struct {
  real32_T Out2;                       /* '<Root>/Out2' */
} ExternalOutputs_testProject;

/* Real-time Model Data Structure */
struct tag_RTM_testProject {
  const char_T *errorStatus;
  RTWExtModeInfo *extModeInfo;

  /*
   * Sizes:
   * The following substructure contains sizes information
   * for many of the model attributes such as inputs, outputs,
   * dwork, sample times, etc.
   */
  struct {
    uint32_T checksums[4];
  } Sizes;

  /*
   * SpecialInfo:
   * The following substructure contains special information
   * related to other components that are dependent on RTW.
   */
  struct {
    const void *mappingInfo;
  } SpecialInfo;

  /*
   * Timing:
   * The following substructure contains information regarding
   * the timing information for the model.
   */
  struct {
    time_T taskTime0;
    uint32_T clockTick0;
    uint32_T clockTickH0;
    time_T stepSize0;
    time_T tFinal;
    boolean_T stopRequestedFlag;
  } Timing;
};

/* Block signals (default storage) */
extern BlockIO_testProject testProject_B;

/* External outputs (root outports fed by signals with default storage) */
extern ExternalOutputs_testProject testProject_Y;

/* Model entry point functions */
extern void testProject_initialize(void);
extern void testProject_output(void);
extern void testProject_update(void);
extern void testProject_terminate(void);

/* Real-time Model object */
extern RT_MODEL_testProject *const testProject_M;

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
 * '<Root>' : 'testProject'
 */
#endif                                 /* RTW_HEADER_testProject_h_ */
