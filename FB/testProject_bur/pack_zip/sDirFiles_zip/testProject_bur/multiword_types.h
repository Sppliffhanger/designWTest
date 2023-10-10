/********************************************************************
 * COPYRIGHT -- B&R Industrial Automation GmbH
 ********************************************************************
 * Program: testProject
 * File: multiword_types.h
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

#ifndef MULTIWORD_TYPES_H
#define MULTIWORD_TYPES_H
#include "rtwtypes.h"

/*
 * Definitions supporting external data access
 */
typedef int32_T chunk_T;
typedef uint32_T uchunk_T;

#endif                                 /* MULTIWORD_TYPES_H */

#ifndef MIN
#define MIN(a,b)                       ((a) < (b) ? (a) : (b))
#endif

#ifndef MAX
#define MAX(a,b)                       ((a) > (b) ? (a) : (b))
#endif

#ifndef AST_ROUND
#define AST_ROUND(x)                   ((x)>=0?(long long)((x)+0.5):(long long)((x)-0.5))
#endif
