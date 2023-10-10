/********************************************************************
 * COPYRIGHT -- B&R Industrial Automation GmbH
 ********************************************************************
 * Program: testProject
 * File: MSTask.c
 * Author: stadelmanj
 * Last modified by: stadelmanj
 * Created: Tue Sep 26 07:43:19 2023
 * Last modified: Tue Oct 03 14:36:03 2023
 * Model Version: 1.11
 * Description:
 * modified Comment:
 ********************************************************************
 * Implementation of program testProject
 ********************************************************************
 * Generated with B&R Automation Studio Target for Simulink V6.8.0
 * (ERT based)
 ********************************************************************/

#define _ASMATH_
#define ASMATH_
#define _ASMATH_H
#define ASMATH_H
#define _ASMATH_H_
#define ASMATH_H_
#define _ASSTRING_
#define ASSTRING_
#define _ASSTRING_H
#define ASSTRING_H
#define _ASSTRING_H_
#define ASSTRING_H_
#include <bur/plctypes.h>
#ifdef _DEFAULT_INCLUDES
#include <AsDefault.h>
#endif

#include "testProject.h"
#include "rtwtypes.h"
#include "ext_work.h"

/*  Defines */

/*  Data Types */

/**************************** GLOBAL DATA *************************************/
/*  Definitions */

/*  Declarations  */

/***************************** FILE SCOPE DATA ********************************/

/*************************** FUNCTIONS ****************************************/
#ifdef __cplusplus

unsigned long bur_heap_size = 6553500;

#endif


  void _INIT mainINIT(void)
{
  
    UDINT st_ident;
  RTInfo_typ rt_info;
  rt_info.enable = 1;
  RTInfo(&rt_info);
  if (rt_info.cycle_time != 10000) {
    /* cycle time does not match Simulink fixed-step size */
    ST_ident("MSTask", 0, &st_ident);
    ST_tmp_suspend(st_ident);
    ERR_warning(33310, 0);
  }

  /* memory usage (optional) */
  /* referenced variable memory_usage has to be defined manually */
  /* extern uint32_T numBytesAllocated; */
  /* memory_usage = (UDINT*)&numBytesAllocated; */

  /* External Mode */
  rtExtModeParseArgs(NULL, NULL,NULL);

  /* initialize model */
  testProject_initialize();
  
} extern int num_calls_rtIOStream;
void _CYCLIC mainCYCLIC(void)
{
  num_calls_rtIOStream = 0;

  /* call model step function */
  testProject_output();

  

  /* External mode */
  rtExtModeUploadCheckTrigger(1);

  {                                    /* Sample time: [0.01s, 0.0s] */
    rtExtModeUpload(0, (real_T)testProject_M->Timing.taskTime0);
  }

  testProject_update();
  boolean_T rtmStopReq = false;
  rtExtModeOneStep(testProject_M->extModeInfo, 1, &rtmStopReq);
  rtmSetStopRequested(testProject_M, false);
  
} void _EXIT mainEXIT(void)
{
  rtExtModeShutdown(1);

  /* terminate model */
  testProject_terminate();
  
} /*****************************************************************************
     Task sample time: 0.01s
   *****************************************************************************/
/*****************************************************************************
   B&R Automation Studio Target for Simulink Version: V6.8.0 (22-Mar-2023)
 *****************************************************************************/

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
