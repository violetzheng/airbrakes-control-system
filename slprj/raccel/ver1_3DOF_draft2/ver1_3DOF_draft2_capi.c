#include "rtw_capi.h"
#ifdef HOST_CAPI_BUILD
#include "ver1_3DOF_draft2_capi_host.h"
#define sizeof(s) ((size_t)(0xFFFF))
#undef rt_offsetof
#define rt_offsetof(s,el) ((uint16_T)(0xFFFF))
#define TARGET_CONST
#define TARGET_STRING(s) (s)
#ifndef SS_UINT64
#define SS_UINT64 17
#endif
#ifndef SS_INT64
#define SS_INT64 18
#endif
#else
#include "builtin_typeid_types.h"
#include "ver1_3DOF_draft2.h"
#include "ver1_3DOF_draft2_capi.h"
#include "ver1_3DOF_draft2_private.h"
#ifdef LIGHT_WEIGHT_CAPI
#define TARGET_CONST
#define TARGET_STRING(s)               ((NULL))
#else
#define TARGET_CONST                   const
#define TARGET_STRING(s)               (s)
#endif
#endif
static const rtwCAPI_Signals rtBlockSignals [ ] = { { 0 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/Vector Concatenate" ) , TARGET_STRING (
"aerodynamic coefficients" ) , 0 , 0 , 0 , 0 , 0 } , { 1 , 0 , TARGET_STRING
( "ver1_3DOF_draft2/Integrator" ) , TARGET_STRING ( "height" ) , 0 , 0 , 1 ,
0 , 0 } , { 2 , 0 , TARGET_STRING ( "ver1_3DOF_draft2/Integrator1" ) ,
TARGET_STRING ( "velocity" ) , 0 , 0 , 1 , 0 , 0 } , { 3 , 0 , TARGET_STRING
( "ver1_3DOF_draft2/Integrator2" ) , TARGET_STRING ( "horizontal vel" ) , 0 ,
0 , 1 , 0 , 0 } , { 4 , 0 , TARGET_STRING ( "ver1_3DOF_draft2/Integrator3" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 5 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/Divide" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , {
6 , 0 , TARGET_STRING ( "ver1_3DOF_draft2/Divide1" ) , TARGET_STRING (
"vertical accel" ) , 0 , 0 , 1 , 0 , 0 } , { 7 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/Divide2" ) , TARGET_STRING ( "horizontal accel" ) , 0 , 0 ,
1 , 0 , 0 } , { 8 , 0 , TARGET_STRING ( "ver1_3DOF_draft2/Product1" ) ,
TARGET_STRING ( "gravitational" ) , 0 , 0 , 1 , 0 , 0 } , { 9 , 0 ,
TARGET_STRING ( "ver1_3DOF_draft2/Atan2" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 0 } , { 10 , 0 , TARGET_STRING ( "ver1_3DOF_draft2/Delay3" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 11 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/ m(t)/Divide" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0
} , { 12 , 0 , TARGET_STRING ( "ver1_3DOF_draft2/ m(t)/Subtract" ) ,
TARGET_STRING ( "m(t)" ) , 0 , 0 , 1 , 0 , 0 } , { 13 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/Axial force coefficient/Product4" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 2 } , { 14 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/Axial force coefficient/Reciprocal" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 2 } , { 15 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/Axial force coefficient/Switch" ) , TARGET_STRING ( "" ) ,
0 , 0 , 1 , 0 , 0 } , { 16 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/COESA Atmosphere Model/S-Function" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 2 } , { 17 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/COESA Atmosphere Model/S-Function" ) , TARGET_STRING ( "" )
, 1 , 0 , 1 , 0 , 2 } , { 18 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/COESA Atmosphere Model/S-Function" ) , TARGET_STRING ( "" )
, 2 , 0 , 1 , 0 , 2 } , { 19 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/COESA Atmosphere Model/S-Function" ) , TARGET_STRING ( "" )
, 3 , 0 , 1 , 0 , 2 } , { 20 , 1 , TARGET_STRING (
"ver1_3DOF_draft2/Discrete Wind Gust Model/Distance into gust (x)" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 21 , 2 , TARGET_STRING (
"ver1_3DOF_draft2/Discrete Wind Gust Model/Distance into gust (y)" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 22 , 3 , TARGET_STRING (
"ver1_3DOF_draft2/Discrete Wind Gust Model/Distance into gust (z)" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 23 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/Discrete Wind Gust Model/Logical Operator1" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 0 } , { 24 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/Discrete Wind Gust Model/Logical Operator2" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 0 } , { 25 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/Discrete Wind Gust Model/Logical Operator3" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 0 } , { 26 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/Normal Force coefficient/Product" ) , TARGET_STRING (
"A plan" ) , 0 , 0 , 1 , 0 , 1 } , { 27 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/Normal Force coefficient/Sum" ) , TARGET_STRING ( "" ) , 0
, 0 , 1 , 0 , 2 } , { 28 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/Pitch moment coefficient/Product4" ) , TARGET_STRING ( "" )
, 0 , 0 , 1 , 0 , 1 } , { 29 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/Pitch moment coefficient/Square Root" ) , TARGET_STRING (
"" ) , 0 , 0 , 1 , 0 , 0 } , { 30 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Product2" ) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 0
} , { 31 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/drag/drag curve function/is_active_c2_ver1_3DOF_draft2" ) ,
TARGET_STRING ( "is_active_c2_ver1_3DOF_draft2" ) , 0 , 2 , 1 , 0 , 0 } , {
32 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/drag/drag curve function1/is_active_c1_ver1_3DOF_draft2" )
, TARGET_STRING ( "is_active_c1_ver1_3DOF_draft2" ) , 0 , 2 , 1 , 0 , 0 } , {
33 , 0 , TARGET_STRING ( "ver1_3DOF_draft2/drag/Gain1" ) , TARGET_STRING ( ""
) , 0 , 0 , 1 , 0 , 0 } , { 34 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/drag/1-D Lookup Table" ) , TARGET_STRING ( "" ) , 0 , 0 , 1
, 0 , 0 } , { 35 , 0 , TARGET_STRING ( "ver1_3DOF_draft2/drag/Square Root" )
, TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 36 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/thrust/Product6" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 ,
0 } , { 37 , 0 , TARGET_STRING ( "ver1_3DOF_draft2/thrust/Cos" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 } , { 38 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/thrust/Sin" ) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 2 }
, { 39 , 1 , TARGET_STRING (
 "ver1_3DOF_draft2/Discrete Wind Gust Model/Distance into gust (x)/Distance into Gust (x) (Limited to gust length d)"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 40 , 2 , TARGET_STRING (
 "ver1_3DOF_draft2/Discrete Wind Gust Model/Distance into gust (y)/Distance into Gust (x) (Limited to gust length d) "
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 41 , 3 , TARGET_STRING (
 "ver1_3DOF_draft2/Discrete Wind Gust Model/Distance into gust (z)/Distance into Gust (x) (Limited to gust length d) "
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 42 , 4 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Distance into gust (x)" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 43 , 5 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Distance into gust (y)" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 44 , 6 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Distance into gust (z)" ) ,
TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 45 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Logical Operator1" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 0 } , { 46 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Logical Operator2" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 0 } , { 47 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Logical Operator3" ) ,
TARGET_STRING ( "" ) , 0 , 1 , 1 , 0 , 0 } , { 48 , 0 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Unit Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 2 , 0 , 2 } , { 49 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/drag/Mach Number/Product1" ) , TARGET_STRING ( "" ) , 0 , 0
, 1 , 0 , 2 } , { 50 , 4 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Distance into gust (x)/Distance into Gust (x) (Limited to gust length d)"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 51 , 5 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Distance into gust (y)/Distance into Gust (x) (Limited to gust length d) "
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 52 , 6 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Distance into gust (z)/Distance into Gust (x) (Limited to gust length d) "
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 0 } , { 53 , 0 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Angle Conversion/Unit Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 54 , 7 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hpgw"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 55 , 8 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hqgw"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 56 , 9 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hrgw"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 57 , 10 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hugw(z)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 58 , 11 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hvgw(z)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 59 , 12 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hwgw(z)"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 60 , 0 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/White Noise/Divide"
) , TARGET_STRING ( "" ) , 0 , 0 , 4 , 0 , 1 } , { 61 , 7 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hpgw/dt1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 62 , 7 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hpgw/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 63 , 8 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hqgw/dt1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 64 , 8 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hqgw/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 65 , 9 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hrgw/dt1"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 66 , 9 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hrgw/Sum1"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 67 , 10 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hugw(z)/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 68 , 11 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hvgw(z)/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 69 , 12 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hwgw(z)/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 3 , 0 , 2 } , { 70 , 0 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/RMS turbulence  intensities/High Altitude Intensity/PreLook-Up Index Search  (prob of exceed)"
) , TARGET_STRING ( "" ) , 0 , 3 , 1 , 0 , 1 } , { 71 , 0 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/RMS turbulence  intensities/High Altitude Intensity/PreLook-Up Index Search  (prob of exceed)"
) , TARGET_STRING ( "" ) , 1 , 0 , 1 , 0 , 1 } , { 72 , 0 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/RMS turbulence  intensities/Low Altitude Intensity/sigma_wg "
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 73 , 13 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Select angular rates/Interpolate  rates/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 74 , 16 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Select velocities/Interpolate  velocities/Sum"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 75 , 0 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Turbulence scale lengths/Medium//High altitude scale length/Length Conversion/Unit Conversion"
) , TARGET_STRING ( "" ) , 0 , 0 , 1 , 0 , 1 } , { 0 , 0 , ( NULL ) , ( NULL
) , 0 , 0 , 0 , 0 , 0 } } ; static const rtwCAPI_BlockParameters
rtBlockParameters [ ] = { { 76 , TARGET_STRING (
"ver1_3DOF_draft2/COESA Atmosphere Model" ) , TARGET_STRING ( "action" ) , 0
, 1 , 0 } , { 77 , TARGET_STRING (
"ver1_3DOF_draft2/Discrete Wind Gust Model" ) , TARGET_STRING ( "Gx" ) , 1 ,
1 , 0 } , { 78 , TARGET_STRING ( "ver1_3DOF_draft2/Discrete Wind Gust Model"
) , TARGET_STRING ( "Gy" ) , 1 , 1 , 0 } , { 79 , TARGET_STRING (
"ver1_3DOF_draft2/Discrete Wind Gust Model" ) , TARGET_STRING ( "Gz" ) , 1 ,
1 , 0 } , { 80 , TARGET_STRING ( "ver1_3DOF_draft2/Discrete Wind Gust Model"
) , TARGET_STRING ( "t_0" ) , 0 , 1 , 0 } , { 81 , TARGET_STRING (
"ver1_3DOF_draft2/Side force coefficient" ) , TARGET_STRING ( "Value" ) , 0 ,
1 , 0 } , { 82 , TARGET_STRING ( "ver1_3DOF_draft2/gravity g" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 83 , TARGET_STRING (
"ver1_3DOF_draft2/propellant mass" ) , TARGET_STRING ( "Value" ) , 0 , 1 , 0
} , { 84 , TARGET_STRING ( "ver1_3DOF_draft2/roll moment coefficient" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 85 , TARGET_STRING (
"ver1_3DOF_draft2/total impulse" ) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 }
, { 86 , TARGET_STRING ( "ver1_3DOF_draft2/yaw moment coefficient" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 87 , TARGET_STRING (
"ver1_3DOF_draft2/Integrator" ) , TARGET_STRING ( "InitialCondition" ) , 0 ,
1 , 0 } , { 88 , TARGET_STRING ( "ver1_3DOF_draft2/Integrator1" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 89 , TARGET_STRING (
"ver1_3DOF_draft2/Integrator2" ) , TARGET_STRING ( "InitialCondition" ) , 0 ,
1 , 0 } , { 90 , TARGET_STRING ( "ver1_3DOF_draft2/Integrator3" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 91 , TARGET_STRING (
"ver1_3DOF_draft2/ m(t)/Total initial mass" ) , TARGET_STRING ( "Value" ) , 0
, 1 , 0 } , { 92 , TARGET_STRING ( "ver1_3DOF_draft2/ m(t)/Integrator" ) ,
TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 93 , TARGET_STRING (
"ver1_3DOF_draft2/Axial force coefficient/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 94 , TARGET_STRING (
"ver1_3DOF_draft2/Axial force coefficient/Constant1" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 95 , TARGET_STRING (
"ver1_3DOF_draft2/Axial force coefficient/area_ref" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 96 , TARGET_STRING (
"ver1_3DOF_draft2/Axial force coefficient/length_ref" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 97 , TARGET_STRING (
"ver1_3DOF_draft2/Axial force coefficient/Switch" ) , TARGET_STRING (
"Threshold" ) , 0 , 1 , 0 } , { 98 , TARGET_STRING (
"ver1_3DOF_draft2/Discrete Wind Gust Model/Distance into gust (x)" ) ,
TARGET_STRING ( "d_m" ) , 0 , 1 , 0 } , { 99 , TARGET_STRING (
"ver1_3DOF_draft2/Discrete Wind Gust Model/Distance into gust (y)" ) ,
TARGET_STRING ( "d_m" ) , 0 , 1 , 0 } , { 100 , TARGET_STRING (
"ver1_3DOF_draft2/Discrete Wind Gust Model/Distance into gust (z)" ) ,
TARGET_STRING ( "d_m" ) , 0 , 1 , 0 } , { 101 , TARGET_STRING (
"ver1_3DOF_draft2/Dynamic Pressure/Constant" ) , TARGET_STRING ( "Value" ) ,
0 , 5 , 0 } , { 102 , TARGET_STRING (
"ver1_3DOF_draft2/Normal Force coefficient/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 103 , TARGET_STRING (
"ver1_3DOF_draft2/Normal Force coefficient/area_ref" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 104 , TARGET_STRING (
"ver1_3DOF_draft2/Normal Force coefficient/correction constant" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 105 , TARGET_STRING (
"ver1_3DOF_draft2/Normal Force coefficient/d" ) , TARGET_STRING ( "Value" ) ,
0 , 1 , 0 } , { 106 , TARGET_STRING (
"ver1_3DOF_draft2/Normal Force coefficient/l" ) , TARGET_STRING ( "Value" ) ,
0 , 1 , 0 } , { 107 , TARGET_STRING (
"ver1_3DOF_draft2/Pitch moment coefficient/A(l)" ) , TARGET_STRING ( "Value"
) , 0 , 1 , 0 } , { 108 , TARGET_STRING (
"ver1_3DOF_draft2/Pitch moment coefficient/Constant" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 109 , TARGET_STRING (
"ver1_3DOF_draft2/Pitch moment coefficient/area_ref" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 110 , TARGET_STRING (
"ver1_3DOF_draft2/Pitch moment coefficient/length of rocket" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 111 , TARGET_STRING (
"ver1_3DOF_draft2/Pitch moment coefficient/length_ref" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 112 , TARGET_STRING (
"ver1_3DOF_draft2/Pitch moment coefficient/volume" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 113 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1" ) , TARGET_STRING ( "Gx" )
, 1 , 1 , 0 } , { 114 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1" ) , TARGET_STRING ( "Gy" )
, 1 , 1 , 0 } , { 115 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1" ) , TARGET_STRING ( "Gz" )
, 1 , 1 , 0 } , { 116 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1" ) , TARGET_STRING ( "t_0" )
, 0 , 1 , 0 } , { 117 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1" ) , TARGET_STRING ( "d_m" )
, 0 , 5 , 0 } , { 118 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1" ) , TARGET_STRING ( "v_m" )
, 0 , 5 , 0 } , { 119 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))" ) ,
TARGET_STRING ( "W20" ) , 0 , 1 , 0 } , { 120 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))" ) ,
TARGET_STRING ( "Wdeg" ) , 0 , 1 , 0 } , { 121 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))" ) ,
TARGET_STRING ( "TurbProb" ) , 0 , 1 , 0 } , { 122 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))" ) ,
TARGET_STRING ( "L_high" ) , 0 , 1 , 0 } , { 123 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))" ) ,
TARGET_STRING ( "Wingspan" ) , 0 , 1 , 0 } , { 124 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))" ) ,
TARGET_STRING ( "Seed" ) , 0 , 6 , 0 } , { 125 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))" ) ,
TARGET_STRING ( "T_on" ) , 0 , 1 , 0 } , { 126 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/area_ref" ) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 }
, { 127 , TARGET_STRING ( "ver1_3DOF_draft2/drag/Constant" ) , TARGET_STRING
( "Value" ) , 0 , 5 , 0 } , { 128 , TARGET_STRING (
"ver1_3DOF_draft2/drag/extension" ) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 }
, { 129 , TARGET_STRING ( "ver1_3DOF_draft2/drag/Gain" ) , TARGET_STRING (
"Gain" ) , 0 , 1 , 0 } , { 130 , TARGET_STRING (
"ver1_3DOF_draft2/drag/Gain1" ) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , {
131 , TARGET_STRING ( "ver1_3DOF_draft2/drag/1-D Lookup Table" ) ,
TARGET_STRING ( "Table" ) , 0 , 7 , 0 } , { 132 , TARGET_STRING (
"ver1_3DOF_draft2/drag/1-D Lookup Table" ) , TARGET_STRING (
"BreakpointsForDimension1" ) , 0 , 7 , 0 } , { 133 , TARGET_STRING (
"ver1_3DOF_draft2/drag/Extension Plan" ) , TARGET_STRING ( "Table" ) , 0 , 8
, 0 } , { 134 , TARGET_STRING ( "ver1_3DOF_draft2/drag/Extension Plan" ) ,
TARGET_STRING ( "BreakpointsForDimension1" ) , 0 , 8 , 0 } , { 135 ,
TARGET_STRING ( "ver1_3DOF_draft2/drag/increasing velocity" ) , TARGET_STRING
( "Table" ) , 0 , 9 , 0 } , { 136 , TARGET_STRING (
"ver1_3DOF_draft2/drag/increasing velocity" ) , TARGET_STRING (
"BreakpointsForDimension1" ) , 0 , 9 , 0 } , { 137 , TARGET_STRING (
"ver1_3DOF_draft2/thrust/Constant" ) , TARGET_STRING ( "Value" ) , 0 , 1 , 0
} , { 138 , TARGET_STRING ( "ver1_3DOF_draft2/thrust/Constant1" ) ,
TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 139 , TARGET_STRING (
"ver1_3DOF_draft2/thrust/thrust curve N5800" ) , TARGET_STRING ( "Table" ) ,
0 , 10 , 0 } , { 140 , TARGET_STRING (
"ver1_3DOF_draft2/thrust/thrust curve N5800" ) , TARGET_STRING (
"BreakpointsForDimension1" ) , 0 , 10 , 0 } , { 141 , TARGET_STRING (
"ver1_3DOF_draft2/thrust/Switch" ) , TARGET_STRING ( "Threshold" ) , 0 , 1 ,
0 } , { 142 , TARGET_STRING (
"ver1_3DOF_draft2/Discrete Wind Gust Model/Distance into gust (x)/x" ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 143 , TARGET_STRING (
 "ver1_3DOF_draft2/Discrete Wind Gust Model/Distance into gust (x)/Distance into Gust (x) (Limited to gust length d)"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 144 ,
TARGET_STRING (
 "ver1_3DOF_draft2/Discrete Wind Gust Model/Distance into gust (x)/Distance into Gust (x) (Limited to gust length d)"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 1 , 0 } , { 145 ,
TARGET_STRING (
"ver1_3DOF_draft2/Discrete Wind Gust Model/Distance into gust (y)/x" ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 146 , TARGET_STRING (
 "ver1_3DOF_draft2/Discrete Wind Gust Model/Distance into gust (y)/Distance into Gust (x) (Limited to gust length d) "
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 147 ,
TARGET_STRING (
 "ver1_3DOF_draft2/Discrete Wind Gust Model/Distance into gust (y)/Distance into Gust (x) (Limited to gust length d) "
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 1 , 0 } , { 148 ,
TARGET_STRING (
"ver1_3DOF_draft2/Discrete Wind Gust Model/Distance into gust (z)/x" ) ,
TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 149 , TARGET_STRING (
 "ver1_3DOF_draft2/Discrete Wind Gust Model/Distance into gust (z)/Distance into Gust (x) (Limited to gust length d) "
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 150 ,
TARGET_STRING (
 "ver1_3DOF_draft2/Discrete Wind Gust Model/Distance into gust (z)/Distance into Gust (x) (Limited to gust length d) "
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 1 , 0 } , { 151 ,
TARGET_STRING (
"ver1_3DOF_draft2/Dynamic Pressure/Dynamic Pressure/1//2rhoV^2" ) ,
TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 152 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Distance into gust (x)" ) ,
TARGET_STRING ( "d_m" ) , 0 , 1 , 0 } , { 153 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Distance into gust (y)" ) ,
TARGET_STRING ( "d_m" ) , 0 , 1 , 0 } , { 154 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Distance into gust (z)" ) ,
TARGET_STRING ( "d_m" ) , 0 , 1 , 0 } , { 155 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/2" ) , TARGET_STRING (
"Value" ) , 0 , 1 , 0 } , { 156 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/White Noise"
) , TARGET_STRING ( "pwr" ) , 0 , 6 , 0 } , { 157 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/White Noise"
) , TARGET_STRING ( "Ts" ) , 0 , 1 , 0 } , { 158 , TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Distance into gust (x)/x" )
, TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 159 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Distance into gust (x)/Distance into Gust (x) (Limited to gust length d)"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 160 ,
TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Distance into gust (x)/Distance into Gust (x) (Limited to gust length d)"
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 1 , 0 } , { 161 ,
TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Distance into gust (y)/x" )
, TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 162 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Distance into gust (y)/Distance into Gust (x) (Limited to gust length d) "
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 163 ,
TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Distance into gust (y)/Distance into Gust (x) (Limited to gust length d) "
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 1 , 0 } , { 164 ,
TARGET_STRING (
"ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Distance into gust (z)/x" )
, TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 165 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Distance into gust (z)/Distance into Gust (x) (Limited to gust length d) "
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 166 ,
TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Discrete Wind Gust Model1/Distance into gust (z)/Distance into Gust (x) (Limited to gust length d) "
) , TARGET_STRING ( "LowerSaturationLimit" ) , 0 , 1 , 0 } , { 167 ,
TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Turbulence scale lengths/Lv"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 168 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Turbulence scale lengths/Lw"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 169 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/White Noise/White Noise"
) , TARGET_STRING ( "Mean" ) , 0 , 1 , 0 } , { 170 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/White Noise/White Noise"
) , TARGET_STRING ( "StdDev" ) , 0 , 1 , 0 } , { 171 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hpgw/pgw"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 172 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hpgw/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 173 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hpgw/Constant1"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 174 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hpgw/Constant2"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 175 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hpgw/2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 176 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hpgw/dt"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 177 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hpgw/dt1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 178 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hpgw/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 179 ,
TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hqgw/qgw"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 180 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hqgw/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 181 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hqgw/dt"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 182 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hqgw/dt1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 183 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hqgw/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 184 ,
TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hqgw/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 185 ,
TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hrgw/rgw"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 186 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hrgw/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 187 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hrgw/dt"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 188 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hrgw/dt1"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 189 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hrgw/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 190 ,
TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on angular rates/Hrgw/Unit Delay1"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 191 ,
TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hugw(z)/ugw"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 192 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hugw(z)/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 193 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hugw(z)/2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 194 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hugw(z)/dt"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 195 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hugw(z)/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 196 ,
TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hvgw(z)/vgw"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 197 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hvgw(z)/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 198 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hvgw(z)/2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 199 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hvgw(z)/dt"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 200 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hvgw(z)/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 201 ,
TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hwgw(z)/wgw"
) , TARGET_STRING ( "InitialOutput" ) , 0 , 1 , 0 } , { 202 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hwgw(z)/Constant"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 203 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hwgw(z)/2"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 204 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hwgw(z)/dt"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 205 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Filters on velocities/Hwgw(z)/Unit Delay"
) , TARGET_STRING ( "InitialCondition" ) , 0 , 1 , 0 } , { 206 ,
TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/RMS turbulence  intensities/High Altitude Intensity/Medium//High Altitude Intensity"
) , TARGET_STRING ( "Table" ) , 0 , 11 , 0 } , { 207 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/RMS turbulence  intensities/High Altitude Intensity/Medium//High Altitude Intensity"
) , TARGET_STRING ( "maxIndex" ) , 3 , 3 , 0 } , { 208 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/RMS turbulence  intensities/High Altitude Intensity/PreLook-Up Index Search  (altitude)"
) , TARGET_STRING ( "BreakpointsData" ) , 0 , 12 , 0 } , { 209 ,
TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/RMS turbulence  intensities/High Altitude Intensity/PreLook-Up Index Search  (prob of exceed)"
) , TARGET_STRING ( "BreakpointsData" ) , 0 , 13 , 0 } , { 210 ,
TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/RMS turbulence  intensities/Low Altitude Intensity/sigma_wg "
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 211 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/RMS turbulence  intensities/Low Altitude Intensity/Limit Height h<1000ft"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 1 , 0 } , { 212 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/RMS turbulence  intensities/Low Altitude Intensity/Limit Height h<1000ft"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 1 , 0 } , { 213 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Select angular rates/Interpolate  rates/max_height_low"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 214 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Select angular rates/Interpolate  rates/min_height_high"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 215 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Select angular rates/Medium//High  altitude rates/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 216 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Select velocities/Interpolate  velocities/max_height_low"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 217 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Select velocities/Interpolate  velocities/min_height_high"
) , TARGET_STRING ( "Value" ) , 0 , 1 , 0 } , { 218 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Select velocities/Medium//High  altitude velocities/Gain"
) , TARGET_STRING ( "Gain" ) , 0 , 1 , 0 } , { 219 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Turbulence scale lengths/Low altitude scale length/Limit Function 10ft to 1000ft"
) , TARGET_STRING ( "UpperLimit" ) , 0 , 1 , 0 } , { 220 , TARGET_STRING (
 "ver1_3DOF_draft2/WIND/Dryden Wind Turbulence Model  (Discrete (+q +r))/Turbulence scale lengths/Low altitude scale length/Limit Function 10ft to 1000ft"
) , TARGET_STRING ( "LowerLimit" ) , 0 , 1 , 0 } , { 0 , ( NULL ) , ( NULL )
, 0 , 0 , 0 } } ; static int_T rt_LoggedStateIdxList [ ] = { - 1 } ; static
const rtwCAPI_Signals rtRootInputs [ ] = { { 0 , 0 , ( NULL ) , ( NULL ) , 0
, 0 , 0 , 0 , 0 } } ; static const rtwCAPI_Signals rtRootOutputs [ ] = { {
221 , 0 , TARGET_STRING ( "ver1_3DOF_draft2/Out1" ) , TARGET_STRING (
"height" ) , 1 , 0 , 1 , 0 , 0 } , { 222 , 0 , TARGET_STRING (
"ver1_3DOF_draft2/Out2" ) , TARGET_STRING ( "velocity" ) , 2 , 0 , 1 , 0 , 0
} , { 0 , 0 , ( NULL ) , ( NULL ) , 0 , 0 , 0 , 0 , 0 } } ; static const
rtwCAPI_ModelParameters rtModelParameters [ ] = { { 223 , TARGET_STRING (
"current_height" ) , 0 , 1 , 0 } , { 224 , TARGET_STRING ( "current_pitch" )
, 0 , 1 , 0 } , { 225 , TARGET_STRING ( "current_vel" ) , 0 , 1 , 0 } , { 0 ,
( NULL ) , 0 , 0 , 0 } } ;
#ifndef HOST_CAPI_BUILD
static void * rtDataAddrMap [ ] = { & rtB . pj53y2b3p4 [ 0 ] , & rtB .
hz2kmtqu1f , & rtB . o3s4fcgwmt , & rtB . detk0s4fqu , & rtB . hrazt0r2wn , &
rtB . esteppb0zl , & rtB . lkc3j3yuwh , & rtB . cdfbg3lury , & rtB .
amcljpynk0 , & rtB . brwswwy2ms , & rtB . pbgkhmfpry , & rtB . ji5szdrtlz , &
rtB . omggdvqf00 , & rtB . nk4to3tqks , & rtB . auftp4d5el , & rtB .
jzq2oluchc , & rtB . p4s2k254ea , & rtB . ahu0mnszbx , & rtB . dez2mrpu5t , &
rtB . kszf3wzrkw , & rtB . ll11mjwfrfq . heioiu1r3j , & rtB . ger0owotcqg .
odt0bd1y2u , & rtB . he3nztz2xz . odt0bd1y2u , & rtB . cjukmufvjx , & rtB .
lxbsoqncto , & rtB . bhya5jpb3h , & rtB . b2dbyc1czi , & rtB . m02klal15g , &
rtB . gf45ascklx , ( & rtB . pj53y2b3p4 [ 0 ] + 4 ) , & rtB . hspoedt4x1 [ 0
] , & rtDW . cxapz0c1jg , & rtDW . gou0cyiqo0 , & rtB . imuryazloq , & rtB .
h0oni2qr14 , & rtB . a12gzgkxk1 , & rtB . n0hunpaunb , & rtB . et5dubzkzh , &
rtB . dcxuq4g2al , & rtB . ll11mjwfrfq . heioiu1r3j , & rtB . ger0owotcqg .
odt0bd1y2u , & rtB . he3nztz2xz . odt0bd1y2u , & rtB . jtzk2crbxn .
heioiu1r3j , & rtB . n5ulon0gce . odt0bd1y2u , & rtB . gvg1dfussm .
odt0bd1y2u , & rtB . fd1l0pzkss , & rtB . gku0fw43pi , & rtB . dqyzhpatpx , &
rtB . od2fp5g24u [ 0 ] , & rtB . n2ko3ely1v , & rtB . jtzk2crbxn . heioiu1r3j
, & rtB . n5ulon0gce . odt0bd1y2u , & rtB . gvg1dfussm . odt0bd1y2u , & rtB .
kltm5q5tqr , & rtB . eocpymidke [ 0 ] , & rtB . g23b0jm4op [ 0 ] , & rtB .
bpo25katpj [ 0 ] , & rtB . kpyi2sl22z [ 0 ] , & rtB . k4g5orb5le [ 0 ] , &
rtB . oqkrhxecua [ 0 ] , & rtB . gu3b4yt5xh [ 0 ] , & rtB . kgnnktcay5 , &
rtB . eocpymidke [ 0 ] , & rtB . ap5uo0kana , & rtB . g23b0jm4op [ 0 ] , &
rtB . dsg4323yrq , & rtB . bpo25katpj [ 0 ] , & rtB . kpyi2sl22z [ 0 ] , &
rtB . k4g5orb5le [ 0 ] , & rtB . oqkrhxecua [ 0 ] , & rtB . jlp2ppl0vn , &
rtB . pl0jd11r4n , & rtB . bui0byvgel , & rtB . j4ludbxjtl , & rtB .
kl4flpfp4i , & rtB . dqz4xqyfqe , & rtP . COESAAtmosphereModel_action , & rtP
. DiscreteWindGustModel_Gx , & rtP . DiscreteWindGustModel_Gy , & rtP .
DiscreteWindGustModel_Gz , & rtP . DiscreteWindGustModel_t_0 , & rtP .
Sideforcecoefficient_Value , & rtP . gravityg_Value , & rtP .
propellantmass_Value , & rtP . rollmomentcoefficient_Value , & rtP .
totalimpulse_Value , & rtP . yawmomentcoefficient_Value , & rtP .
Integrator_IC , & rtP . Integrator1_IC , & rtP . Integrator2_IC , & rtP .
Integrator3_IC , & rtP . Totalinitialmass_Value , & rtP .
Integrator_IC_iltpotqliy , & rtP . Constant_Value_j4uvipadjw , & rtP .
Constant1_Value_j5lbep2i5s , & rtP . area_ref_Value , & rtP .
length_ref_Value , & rtP . Switch_Threshold , & rtP .
Distanceintogustx_d_m_dqou0x0xrn , & rtP . Distanceintogusty_d_m_gim0l1ebzs ,
& rtP . Distanceintogustz_d_m_ishqd0dad1 , & rtP . Constant_Value_ljjrc4ac51
[ 0 ] , & rtP . Constant_Value_bnuzop5o1l , & rtP . area_ref_Value_agropua0cl
, & rtP . correctionconstant_Value , & rtP . d_Value , & rtP . l_Value , &
rtP . Al_Value , & rtP . Constant_Value_nh4qnxlmtb , & rtP .
area_ref_Value_ogzj0ybhah , & rtP . lengthofrocket_Value , & rtP .
length_ref_Value_jqw25fydac , & rtP . volume_Value , & rtP .
DiscreteWindGustModel1_Gx , & rtP . DiscreteWindGustModel1_Gy , & rtP .
DiscreteWindGustModel1_Gz , & rtP . DiscreteWindGustModel1_t_0 , & rtP .
DiscreteWindGustModel1_d_m [ 0 ] , & rtP . DiscreteWindGustModel1_v_m [ 0 ] ,
& rtP . DrydenWindTurbulenceModelDiscreteqr_W20 , & rtP .
DrydenWindTurbulenceModelDiscreteqr_Wdeg , & rtP .
DrydenWindTurbulenceModelDiscreteqr_TurbProb , & rtP .
DrydenWindTurbulenceModelDiscreteqr_L_high , & rtP .
DrydenWindTurbulenceModelDiscreteqr_Wingspan , & rtP .
DrydenWindTurbulenceModelDiscreteqr_Seed [ 0 ] , & rtP .
DrydenWindTurbulenceModelDiscreteqr_T_on , & rtP . area_ref_Value_fcrkhd1pwn
, & rtP . Constant_Value_c1kdrdr2wo [ 0 ] , & rtP . extension_Value , & rtP .
Gain_Gain_aepuuv4xlg , & rtP . Gain1_Gain , & rtP . uDLookupTable_tableData [
0 ] , & rtP . uDLookupTable_bp01Data [ 0 ] , & rtP . ExtensionPlan_tableData
[ 0 ] , & rtP . ExtensionPlan_bp01Data [ 0 ] , & rtP .
increasingvelocity_tableData [ 0 ] , & rtP . increasingvelocity_bp01Data [ 0
] , & rtP . Constant_Value_exs12nteho , & rtP . Constant1_Value_ivo13icu2r ,
& rtP . thrustcurveN5800_tableData [ 0 ] , & rtP . thrustcurveN5800_bp01Data
[ 0 ] , & rtP . Switch_Threshold_ouid5vbrll , & rtP . ll11mjwfrfq . x_Y0 , &
rtP . ll11mjwfrfq . DistanceintoGustxLimitedtogustlengthd_IC , & rtP .
ll11mjwfrfq . DistanceintoGustxLimitedtogustlengthd_LowerSat , & rtP .
ger0owotcqg . x_Y0 , & rtP . ger0owotcqg .
DistanceintoGustxLimitedtogustlengthd_IC , & rtP . ger0owotcqg .
DistanceintoGustxLimitedtogustlengthd_LowerSat , & rtP . he3nztz2xz . x_Y0 ,
& rtP . he3nztz2xz . DistanceintoGustxLimitedtogustlengthd_IC , & rtP .
he3nztz2xz . DistanceintoGustxLimitedtogustlengthd_LowerSat , & rtP .
u2rhoV2_Gain , & rtP . Distanceintogustx_d_m , & rtP . Distanceintogusty_d_m
, & rtP . Distanceintogustz_d_m , & rtP . u_Value , & rtP . WhiteNoise_pwr [
0 ] , & rtP . WhiteNoise_Ts , & rtP . jtzk2crbxn . x_Y0 , & rtP . jtzk2crbxn
. DistanceintoGustxLimitedtogustlengthd_IC , & rtP . jtzk2crbxn .
DistanceintoGustxLimitedtogustlengthd_LowerSat , & rtP . n5ulon0gce . x_Y0 ,
& rtP . n5ulon0gce . DistanceintoGustxLimitedtogustlengthd_IC , & rtP .
n5ulon0gce . DistanceintoGustxLimitedtogustlengthd_LowerSat , & rtP .
gvg1dfussm . x_Y0 , & rtP . gvg1dfussm .
DistanceintoGustxLimitedtogustlengthd_IC , & rtP . gvg1dfussm .
DistanceintoGustxLimitedtogustlengthd_LowerSat , & rtP . Lv_Gain , & rtP .
Lw_Gain , & rtP . WhiteNoise_Mean , & rtP . WhiteNoise_StdDev , & rtP .
pgw_Y0 , & rtP . Constant_Value , & rtP . Constant1_Value , & rtP .
Constant2_Value , & rtP . u_Gain , & rtP . dt_Gain , & rtP . dt1_Gain , & rtP
. UnitDelay_InitialCondition , & rtP . qgw_Y0 , & rtP .
Constant_Value_mc3ng20zp3 , & rtP . dt_Gain_dd5gnplcmj , & rtP .
dt1_Gain_nztsi2a1kq , & rtP . UnitDelay_InitialCondition_pwarikqkkg , & rtP .
UnitDelay1_InitialCondition , & rtP . rgw_Y0 , & rtP .
Constant_Value_cyiae5qdaq , & rtP . dt_Gain_f0lm3egpry , & rtP .
dt1_Gain_nta1kkksv5 , & rtP . UnitDelay_InitialCondition_byfhr24th5 , & rtP .
UnitDelay1_InitialCondition_gvw5z1apgo , & rtP . ugw_Y0 , & rtP .
Constant_Value_e1xlqjuxc5 , & rtP . u_Gain_e0zlfgmyiz , & rtP .
dt_Gain_pxqvpbvf4u , & rtP . UnitDelay_InitialCondition_axjdscgnbh , & rtP .
vgw_Y0 , & rtP . Constant_Value_cr2kwqvzxu , & rtP . u_Gain_ky430x1en1 , &
rtP . dt_Gain_msbw321ckr , & rtP . UnitDelay_InitialCondition_bvmi2vzu1n , &
rtP . wgw_Y0 , & rtP . Constant_Value_i1pvkuyoub , & rtP . u_Gain_p0stpplhad
, & rtP . dt_Gain_leuqrst5ru , & rtP . UnitDelay_InitialCondition_lkw5bbronu
, & rtP . MediumHighAltitudeIntensity_Table [ 0 ] , & rtP .
MediumHighAltitudeIntensity_maxIndex [ 0 ] , & rtP .
PreLookUpIndexSearchaltitude_BreakpointsData [ 0 ] , & rtP .
PreLookUpIndexSearchprobofexceed_BreakpointsData [ 0 ] , & rtP .
sigma_wg_Gain , & rtP . LimitHeighth1000ft_UpperSat , & rtP .
LimitHeighth1000ft_LowerSat , & rtP . max_height_low_Value , & rtP .
min_height_high_Value , & rtP . Gain_Gain , & rtP .
max_height_low_Value_kq15juzkkq , & rtP . min_height_high_Value_ou01ccqz5e ,
& rtP . Gain_Gain_jecly514iu , & rtP . LimitFunction10ftto1000ft_UpperSat , &
rtP . LimitFunction10ftto1000ft_LowerSat , & rtY . pcm1uw5ps3 , & rtY .
c3skmi1gop , & rtP . current_height , & rtP . current_pitch , & rtP .
current_vel , } ; static int32_T * rtVarDimsAddrMap [ ] = { ( NULL ) } ;
#endif
static TARGET_CONST rtwCAPI_DataTypeMap rtDataTypeMap [ ] = { { "double" ,
"real_T" , 0 , 0 , sizeof ( real_T ) , ( uint8_T ) SS_DOUBLE , 0 , 0 , 0 } ,
{ "unsigned char" , "boolean_T" , 0 , 0 , sizeof ( boolean_T ) , ( uint8_T )
SS_BOOLEAN , 0 , 0 , 0 } , { "unsigned char" , "uint8_T" , 0 , 0 , sizeof (
uint8_T ) , ( uint8_T ) SS_UINT8 , 0 , 0 , 0 } , { "unsigned int" ,
"uint32_T" , 0 , 0 , sizeof ( uint32_T ) , ( uint8_T ) SS_UINT32 , 0 , 0 , 0
} } ;
#ifdef HOST_CAPI_BUILD
#undef sizeof
#endif
static TARGET_CONST rtwCAPI_ElementMap rtElementMap [ ] = { { ( NULL ) , 0 ,
0 , 0 , 0 } , } ; static const rtwCAPI_DimensionMap rtDimensionMap [ ] = { {
rtwCAPI_VECTOR , 0 , 2 , 0 } , { rtwCAPI_SCALAR , 2 , 2 , 0 } , {
rtwCAPI_VECTOR , 4 , 2 , 0 } , { rtwCAPI_VECTOR , 6 , 2 , 0 } , {
rtwCAPI_VECTOR , 8 , 2 , 0 } , { rtwCAPI_VECTOR , 10 , 2 , 0 } , {
rtwCAPI_VECTOR , 12 , 2 , 0 } , { rtwCAPI_VECTOR , 14 , 2 , 0 } , {
rtwCAPI_VECTOR , 16 , 2 , 0 } , { rtwCAPI_VECTOR , 18 , 2 , 0 } , {
rtwCAPI_VECTOR , 20 , 2 , 0 } , { rtwCAPI_MATRIX_COL_MAJOR , 22 , 2 , 0 } , {
rtwCAPI_VECTOR , 24 , 2 , 0 } , { rtwCAPI_VECTOR , 26 , 2 , 0 } } ; static
const uint_T rtDimensionArray [ ] = { 6 , 1 , 1 , 1 , 3 , 1 , 2 , 1 , 4 , 1 ,
1 , 3 , 1 , 4 , 787 , 1 , 21 , 1 , 1 , 8 , 15 , 1 , 12 , 7 , 1 , 12 , 1 , 7 }
; static const real_T rtcapiStoredFloats [ ] = { 0.0 , 0.1 } ; static const
rtwCAPI_FixPtMap rtFixPtMap [ ] = { { ( NULL ) , ( NULL ) ,
rtwCAPI_FIX_RESERVED , 0 , 0 , ( boolean_T ) 0 } , } ; static const
rtwCAPI_SampleTimeMap rtSampleTimeMap [ ] = { { ( const void * ) &
rtcapiStoredFloats [ 0 ] , ( const void * ) & rtcapiStoredFloats [ 0 ] , (
int8_T ) 0 , ( uint8_T ) 0 } , { ( NULL ) , ( NULL ) , 2 , 0 } , { ( const
void * ) & rtcapiStoredFloats [ 1 ] , ( const void * ) & rtcapiStoredFloats [
0 ] , ( int8_T ) 1 , ( uint8_T ) 0 } } ; static
rtwCAPI_ModelMappingStaticInfo mmiStatic = { { rtBlockSignals , 76 ,
rtRootInputs , 0 , rtRootOutputs , 2 } , { rtBlockParameters , 145 ,
rtModelParameters , 3 } , { ( NULL ) , 0 } , { rtDataTypeMap , rtDimensionMap
, rtFixPtMap , rtElementMap , rtSampleTimeMap , rtDimensionArray } , "float"
, { 3596416260U , 609365716U , 666158425U , 577418733U } , ( NULL ) , 0 , (
boolean_T ) 0 , rt_LoggedStateIdxList } ; const
rtwCAPI_ModelMappingStaticInfo * ver1_3DOF_draft2_GetCAPIStaticMap ( void ) {
return & mmiStatic ; }
#ifndef HOST_CAPI_BUILD
void ver1_3DOF_draft2_InitializeDataMapInfo ( void ) { rtwCAPI_SetVersion ( (
* rt_dataMapInfoPtr ) . mmi , 1 ) ; rtwCAPI_SetStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , & mmiStatic ) ; rtwCAPI_SetLoggingStaticMap ( ( *
rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ; rtwCAPI_SetDataAddressMap ( ( *
rt_dataMapInfoPtr ) . mmi , rtDataAddrMap ) ; rtwCAPI_SetVarDimsAddressMap (
( * rt_dataMapInfoPtr ) . mmi , rtVarDimsAddrMap ) ;
rtwCAPI_SetInstanceLoggingInfo ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArray ( ( * rt_dataMapInfoPtr ) . mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( ( * rt_dataMapInfoPtr ) . mmi , 0 ) ; }
#else
#ifdef __cplusplus
extern "C" {
#endif
void ver1_3DOF_draft2_host_InitializeDataMapInfo (
ver1_3DOF_draft2_host_DataMapInfo_T * dataMap , const char * path ) {
rtwCAPI_SetVersion ( dataMap -> mmi , 1 ) ; rtwCAPI_SetStaticMap ( dataMap ->
mmi , & mmiStatic ) ; rtwCAPI_SetDataAddressMap ( dataMap -> mmi , ( NULL ) )
; rtwCAPI_SetVarDimsAddressMap ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetPath ( dataMap -> mmi , path ) ; rtwCAPI_SetFullPath ( dataMap ->
mmi , ( NULL ) ) ; rtwCAPI_SetChildMMIArray ( dataMap -> mmi , ( NULL ) ) ;
rtwCAPI_SetChildMMIArrayLen ( dataMap -> mmi , 0 ) ; }
#ifdef __cplusplus
}
#endif
#endif
