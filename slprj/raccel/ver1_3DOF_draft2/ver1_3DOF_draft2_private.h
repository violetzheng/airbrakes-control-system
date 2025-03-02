#ifndef RTW_HEADER_ver1_3DOF_draft2_private_h_
#define RTW_HEADER_ver1_3DOF_draft2_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "ver1_3DOF_draft2.h"
#include "ver1_3DOF_draft2_types.h"
#if !defined(rt_VALIDATE_MEMORY)
#define rt_VALIDATE_MEMORY(S, ptr)     if(!(ptr)) {\
    ssSetErrorStatus(rtS, RT_MEMORY_ALLOCATION_ERROR);\
    }
#endif
#if !defined(rt_FREE)
#if !defined(_WIN32)
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((ptr));\
    (ptr) = (NULL);\
    }
#else
#define rt_FREE(ptr)     if((ptr) != (NULL)) {\
    free((void *)(ptr));\
    (ptr) = (NULL);\
    }
#endif
#endif
#ifndef ATMOS_TYPEDEF
typedef enum { COESA = 1 , MILHDBK310 , MILSTD210C } AtmosTypeIdx ; typedef
enum { PROFILE = 1 , ENVELOPE } ModelIdx ; typedef enum { HIGHTEMP = 1 ,
LOWTEMP , HIGHDENSITY , LOWDENSITY , HIGHPRESSURE , LOWPRESSURE } VarIdx ;
typedef enum { PP1 = 1 , PP10 } PPercentIdx ; typedef enum { K5 = 1 , K10 ,
K20 , K30 , K40 } PAltIdx ; typedef enum { EXTREME = 1 , P1 , P5 , P10 , P20
} EPercentIdx ;
#define ATMOS_TYPEDEF
#endif
#ifndef ATMOS_DEFINE
#define PRESSURE0   101325.0     
#define TEMPERATURE0   288.15    
#define GRAV_CONST       9.80665 
#define MOL_WT          28.9644  
#define R_HAT         8314.32    
#define GAMMA            1.4     
#define GMR       ( GRAV_CONST * MOL_WT / R_HAT )
#define ATMOS_DEFINE
#endif
#ifndef NONSTD_DEFINE
#define R_EARTH 6371010
#define NONSTD_DEFINE
#endif
extern real_T rt_urand_Upu32_Yd_f_pw_snf ( uint32_T * u ) ; extern real_T
rt_nrand_Upu32_Yd_f_pw_snf ( uint32_T * u ) ; void InitCalcAtmosProfile210c (
real_T ppercent , real_T pvar , real_T palt , real_T * altitude , real_T *
temperature210c , real_T * density210c , real_T * minmax ) ; uint_T LookBinXd
( const real_T altitude , real_T * fraction , const real_T * altitudeTab ,
const uint_T maxIndex ) ; real_T LinearInterp ( const real_T * Tab , const
real_T fraction , const uint_T idx ) ; void InterpolateTempAndDens ( const
real_T altitude , const real_T * temperatureTab , const real_T * densityTab ,
real_T * temp , real_T * density , const real_T fraction , const uint_T idx ,
const real_T lower_alt , const real_T upper_alt ) ; void CalcAtmosProfile (
const real_T * altitude , const real_T * altitudeTab , const real_T *
temperatureTab , const real_T * densityTab , real_T * temp , real_T *
pressure , real_T * density , real_T * speedofsound , const int_T numPoints ,
const real_T maxIdx , const real_T lower_alt , const real_T upper_alt ) ;
extern real_T look1_binlxpw ( real_T u0 , const real_T bp0 [ ] , const real_T
table [ ] , uint32_T maxIndex ) ; extern uint32_T plook_bincpa ( real_T u ,
const real_T bp [ ] , uint32_T maxIndex , real_T * fraction , uint32_T *
prevIndex ) ; extern real_T intrp2d_la_pw ( const uint32_T bpIndex [ ] ,
const real_T frac [ ] , const real_T table [ ] , const uint32_T stride ,
const uint32_T maxIndex [ ] ) ; extern uint32_T binsearch_u32d_prevIdx (
real_T u , const real_T bp [ ] , uint32_T startIndex , uint32_T maxIndex ) ;
extern void jzp4iqvwoh ( ht3jp1qdkv * localB , fok0ikyqof * localP ,
kdue4qfija * localX ) ; extern void drrqsgkejy ( fok0ikyqof * localP ,
kdue4qfija * localX ) ; extern void bylcnelski ( SimStruct * rtS_p ,
ob5cj1kyzo * localDW , ofbkpwji3l * localXdis ) ; extern void hf4d1h4vwm (
real_T dg12dswfs5 , real_T rtp_d_m , ob5cj1kyzo * localDW , fok0ikyqof *
localP , kdue4qfija * localX , guqigewwsg * localXdot ) ; extern void
i4bbbkubvn ( ob5cj1kyzo * localDW ) ; extern void ll11mjwfrf ( SimStruct *
rtS_i , boolean_T higopjac1h , real_T rtp_d_m , ht3jp1qdkv * localB ,
ob5cj1kyzo * localDW , fok0ikyqof * localP , kdue4qfija * localX , ofbkpwji3l
* localXdis ) ; extern void dkotov2bai ( j1oeb1rvnd * localB , pqpklmddmd *
localP , o2kzbph3jy * localX ) ; extern void mb1o2l5oka ( pqpklmddmd * localP
, o2kzbph3jy * localX ) ; extern void bcnjcykqog ( SimStruct * rtS_p ,
nd4x2fsgr0 * localDW , njj5yalzvk * localXdis ) ; extern void ngbeyqhw30 (
real_T dqsxoyfanv , real_T rtp_d_m , nd4x2fsgr0 * localDW , pqpklmddmd *
localP , o2kzbph3jy * localX , khj0i4c5b2 * localXdot ) ; extern void
okgtmuspq4 ( nd4x2fsgr0 * localDW ) ; extern void ger0owotcq ( SimStruct *
rtS_f , boolean_T j05frfiqjw , real_T rtp_d_m , j1oeb1rvnd * localB ,
nd4x2fsgr0 * localDW , pqpklmddmd * localP , o2kzbph3jy * localX , njj5yalzvk
* localXdis ) ;
#if defined(MULTITASKING)
#error Model (ver1_3DOF_draft2) was built in \SingleTasking solver mode, however the MULTITASKING define is \present. If you have multitasking (e.g. -DMT or -DMULTITASKING) \defined on the Code Generation page of Simulation parameter dialog, please \remove it and on the Solver page, select solver mode \MultiTasking. If the Simulation parameter dialog is configured \correctly, please verify that your template makefile is \configured correctly.
#endif
#endif
