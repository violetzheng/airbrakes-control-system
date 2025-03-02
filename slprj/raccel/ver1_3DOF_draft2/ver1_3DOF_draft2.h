#ifndef RTW_HEADER_ver1_3DOF_draft2_h_
#define RTW_HEADER_ver1_3DOF_draft2_h_
#ifndef ver1_3DOF_draft2_COMMON_INCLUDES_
#define ver1_3DOF_draft2_COMMON_INCLUDES_
#include <stdlib.h>
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "rtwtypes.h"
#include "sigstream_rtw.h"
#include "simtarget/slSimTgtSigstreamRTW.h"
#include "simtarget/slSimTgtSlioCoreRTW.h"
#include "simtarget/slSimTgtSlioClientsRTW.h"
#include "simtarget/slSimTgtSlioSdiRTW.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "raccel.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "rt_logging_simtarget.h"
#include "dt_info.h"
#include "ext_work.h"
#endif
#include "ver1_3DOF_draft2_types.h"
#include <string.h>
#include "mwmathutil.h"
#include <stddef.h>
#include "rtw_modelmap_simtarget.h"
#include "rt_defines.h"
#include "rt_nonfinite.h"
#define MODEL_NAME ver1_3DOF_draft2
#define NSAMPLE_TIMES (3) 
#define NINPUTS (0)       
#define NOUTPUTS (2)     
#define NBLOCKIO (63) 
#define NUM_ZC_EVENTS (0) 
#ifndef NCSTATES
#define NCSTATES (11)   
#elif NCSTATES != 11
#error Invalid specification of NCSTATES defined in compiler command
#endif
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) (*rt_dataMapInfoPtr)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) (rt_dataMapInfoPtr = &val)
#endif
#ifndef IN_RACCEL_MAIN
#endif
typedef struct { real_T heioiu1r3j ; } ht3jp1qdkv ; typedef struct { int8_T
fgmjumzbkr ; boolean_T bxuyreg3bt ; } ob5cj1kyzo ; typedef struct { real_T
eq4ikaxs0l ; } kdue4qfija ; typedef struct { real_T eq4ikaxs0l ; } guqigewwsg
; typedef struct { boolean_T eq4ikaxs0l ; } ofbkpwji3l ; typedef struct {
real_T odt0bd1y2u ; } j1oeb1rvnd ; typedef struct { int8_T iwd5hf3e4b ;
boolean_T ncvavhwoml ; } nd4x2fsgr0 ; typedef struct { real_T bj3t0b0gcs ; }
o2kzbph3jy ; typedef struct { real_T bj3t0b0gcs ; } khj0i4c5b2 ; typedef
struct { boolean_T bj3t0b0gcs ; } njj5yalzvk ; typedef struct { real_T
hz2kmtqu1f ; real_T o3s4fcgwmt ; real_T detk0s4fqu ; real_T brwswwy2ms ;
real_T m02klal15g ; real_T h0oni2qr14 ; real_T pbgkhmfpry ; real_T p4s2k254ea
; real_T ahu0mnszbx ; real_T dez2mrpu5t ; real_T kszf3wzrkw ; real_T
od2fp5g24u [ 3 ] ; real_T hspoedt4x1 [ 3 ] ; real_T auftp4d5el ; real_T
nk4to3tqks ; real_T jzq2oluchc ; real_T omggdvqf00 ; real_T amcljpynk0 ;
real_T dcxuq4g2al ; real_T n0hunpaunb ; real_T cdfbg3lury ; real_T hrazt0r2wn
; real_T et5dubzkzh ; real_T lkc3j3yuwh ; real_T ji5szdrtlz ; real_T
pj53y2b3p4 [ 6 ] ; real_T n2ko3ely1v ; real_T a12gzgkxk1 ; real_T imuryazloq
; real_T esteppb0zl ; real_T b2dbyc1czi ; real_T gf45ascklx ; real_T
kltm5q5tqr ; real_T bui0byvgel ; real_T dqz4xqyfqe ; real_T pl0jd11r4n ;
real_T gu3b4yt5xh [ 4 ] ; real_T kl4flpfp4i ; real_T j4ludbxjtl ; real_T
oqkrhxecua [ 2 ] ; real_T k4g5orb5le [ 2 ] ; real_T kpyi2sl22z [ 2 ] ; real_T
bpo25katpj [ 2 ] ; real_T dsg4323yrq ; real_T g23b0jm4op [ 2 ] ; real_T
ap5uo0kana ; real_T eocpymidke [ 2 ] ; real_T kgnnktcay5 ; uint32_T
jlp2ppl0vn ; boolean_T gku0fw43pi ; boolean_T fd1l0pzkss ; boolean_T
dqyzhpatpx ; boolean_T lxbsoqncto ; boolean_T cjukmufvjx ; boolean_T
bhya5jpb3h ; j1oeb1rvnd gvg1dfussm ; j1oeb1rvnd n5ulon0gce ; ht3jp1qdkv
jtzk2crbxn ; j1oeb1rvnd he3nztz2xz ; j1oeb1rvnd ger0owotcqg ; ht3jp1qdkv
ll11mjwfrfq ; } B ; typedef struct { real_T e2hziedsbk ; real_T cm32h5zuyd ;
real_T g4vgu4eh5q ; real_T n03y0na0km [ 2 ] ; real_T l2twxmlcem [ 2 ] ;
real_T axocjnebjt [ 2 ] ; real_T cc1zgnydar [ 2 ] ; real_T dtrqh0jzdm [ 2 ] ;
real_T be3zbv11ep [ 2 ] ; real_T j0fq3kqpc1 [ 2 ] ; real_T iwyty5ttci [ 2 ] ;
real_T npog0sgne3 ; real_T fghcnn10kv [ 41 ] ; real_T nqlh5ds4cz [ 41 ] ;
real_T pmg45wdlle [ 41 ] ; real_T agqjtql55m [ 3 ] ; real_T hfvwtrx3vv [ 4 ]
; struct { void * LoggedData ; } k22avhip4l ; struct { void * LoggedData ; }
kqlnedaru4 ; struct { void * LoggedData ; } lgozs3hhbz ; struct { void *
LoggedData ; } nlnaokhuqi ; struct { void * LoggedData ; } hqdmt1uvxz ;
struct { void * LoggedData ; } lvivt402or ; struct { void * LoggedData ; }
ftk2p113mj ; struct { void * LoggedData ; } gsjwbi101m ; struct { void *
LoggedData ; } en2kejl0u5 ; struct { void * LoggedData ; } mexrcbcf3j ;
struct { void * AQHandles ; } dqey5ojoes ; struct { void * AQHandles ; }
gndom1iial ; struct { void * LoggedData ; } dxljsvtavp ; struct { void *
LoggedData ; } fjigp44sul ; struct { void * LoggedData ; } hcxsxkryei ;
struct { void * LoggedData ; } pl3wiifq4y ; struct { void * LoggedData ; }
lh1anqbya0 ; struct { void * LoggedData ; } kb3volnjlk ; int32_T jnncd2sq4w ;
int32_T mmhkwxx3ki ; uint32_T evedzazbq1 ; uint32_T nphcpd4kp1 [ 4 ] ;
uint32_T b4b4xbh0zy ; int8_T mchbqbzbsu ; int8_T iyux1j0x3a ; int8_T
p4skp3dttn ; int8_T ndrlkc3b34 ; int8_T ldf3zjiz4i ; int8_T adl1bl4joc ;
int8_T cvm0mb4zot ; int8_T j4iw55pfet ; int8_T kyu40ob1un ; int8_T eiolx41ugz
; int8_T l1ximba4da ; int8_T g5qs0iunrk ; int8_T ond2pizxua ; int8_T
dozjmoymwu ; uint8_T gou0cyiqo0 ; uint8_T cxapz0c1jg ; boolean_T hhl5e4wghu ;
boolean_T ho1eexse32 ; boolean_T ixwzcimkbe ; boolean_T pspabon31m ;
boolean_T hqfdair2to ; boolean_T lcggv1dr2l ; boolean_T hpz1gyhn0z ;
boolean_T op3ivjjjc3 ; boolean_T aj0tzh3kxr ; boolean_T g2zzh5btgc ;
boolean_T jhohwk2pcr ; nd4x2fsgr0 gvg1dfussm ; nd4x2fsgr0 n5ulon0gce ;
ob5cj1kyzo jtzk2crbxn ; nd4x2fsgr0 he3nztz2xz ; nd4x2fsgr0 ger0owotcqg ;
ob5cj1kyzo ll11mjwfrfq ; } DW ; typedef struct { real_T g0mdmdktas ; real_T
ok0u4mticx ; real_T af0p1kca4r ; real_T imxltedjxv ; real_T iv3asg1nx5 ;
o2kzbph3jy gvg1dfussm ; o2kzbph3jy n5ulon0gce ; kdue4qfija jtzk2crbxn ;
o2kzbph3jy he3nztz2xz ; o2kzbph3jy ger0owotcqg ; kdue4qfija ll11mjwfrfq ; } X
; typedef struct { real_T g0mdmdktas ; real_T ok0u4mticx ; real_T af0p1kca4r
; real_T imxltedjxv ; real_T iv3asg1nx5 ; khj0i4c5b2 gvg1dfussm ; khj0i4c5b2
n5ulon0gce ; guqigewwsg jtzk2crbxn ; khj0i4c5b2 he3nztz2xz ; khj0i4c5b2
ger0owotcqg ; guqigewwsg ll11mjwfrfq ; } XDot ; typedef struct { boolean_T
g0mdmdktas ; boolean_T ok0u4mticx ; boolean_T af0p1kca4r ; boolean_T
imxltedjxv ; boolean_T iv3asg1nx5 ; njj5yalzvk gvg1dfussm ; njj5yalzvk
n5ulon0gce ; ofbkpwji3l jtzk2crbxn ; njj5yalzvk he3nztz2xz ; njj5yalzvk
ger0owotcqg ; ofbkpwji3l ll11mjwfrfq ; } XDis ; typedef struct { real_T
pcm1uw5ps3 ; real_T c3skmi1gop ; } ExtY ; typedef struct {
rtwCAPI_ModelMappingInfo mmi ; } DataMapInfo ; struct fok0ikyqof_ { real_T
x_Y0 ; real_T DistanceintoGustxLimitedtogustlengthd_IC ; real_T
DistanceintoGustxLimitedtogustlengthd_LowerSat ; } ; struct pqpklmddmd_ {
real_T x_Y0 ; real_T DistanceintoGustxLimitedtogustlengthd_IC ; real_T
DistanceintoGustxLimitedtogustlengthd_LowerSat ; } ; struct P_ { real_T
current_height ; real_T current_pitch ; real_T current_vel ; real_T
DrydenWindTurbulenceModelDiscreteqr_L_high ; real_T
DrydenWindTurbulenceModelDiscreteqr_Seed [ 4 ] ; real_T
DrydenWindTurbulenceModelDiscreteqr_T_on ; real_T WhiteNoise_Ts ; real_T
DrydenWindTurbulenceModelDiscreteqr_TurbProb ; real_T
DrydenWindTurbulenceModelDiscreteqr_W20 ; real_T
DrydenWindTurbulenceModelDiscreteqr_Wdeg ; real_T
DrydenWindTurbulenceModelDiscreteqr_Wingspan ; real_T
COESAAtmosphereModel_action ; real_T Distanceintogustx_d_m ; real_T
Distanceintogusty_d_m ; real_T Distanceintogustz_d_m ; real_T
DiscreteWindGustModel1_d_m [ 3 ] ; real_T Distanceintogustx_d_m_dqou0x0xrn ;
real_T Distanceintogusty_d_m_gim0l1ebzs ; real_T
Distanceintogustz_d_m_ishqd0dad1 ; real_T WhiteNoise_pwr [ 4 ] ; real_T
DiscreteWindGustModel1_t_0 ; real_T DiscreteWindGustModel_t_0 ; real_T
DiscreteWindGustModel1_v_m [ 3 ] ; boolean_T DiscreteWindGustModel1_Gx ;
boolean_T DiscreteWindGustModel_Gx ; boolean_T DiscreteWindGustModel1_Gy ;
boolean_T DiscreteWindGustModel_Gy ; boolean_T DiscreteWindGustModel1_Gz ;
boolean_T DiscreteWindGustModel_Gz ; real_T pgw_Y0 ; real_T u_Gain ; real_T
dt_Gain ; real_T UnitDelay_InitialCondition ; real_T Constant_Value ; real_T
Constant1_Value ; real_T Constant2_Value ; real_T dt1_Gain ; real_T qgw_Y0 ;
real_T dt_Gain_dd5gnplcmj ; real_T UnitDelay_InitialCondition_pwarikqkkg ;
real_T UnitDelay1_InitialCondition ; real_T Constant_Value_mc3ng20zp3 ;
real_T dt1_Gain_nztsi2a1kq ; real_T rgw_Y0 ; real_T dt_Gain_f0lm3egpry ;
real_T UnitDelay_InitialCondition_byfhr24th5 ; real_T
UnitDelay1_InitialCondition_gvw5z1apgo ; real_T Constant_Value_cyiae5qdaq ;
real_T dt1_Gain_nta1kkksv5 ; real_T ugw_Y0 ; real_T u_Gain_e0zlfgmyiz ;
real_T dt_Gain_pxqvpbvf4u ; real_T UnitDelay_InitialCondition_axjdscgnbh ;
real_T Constant_Value_e1xlqjuxc5 ; real_T vgw_Y0 ; real_T u_Gain_ky430x1en1 ;
real_T dt_Gain_msbw321ckr ; real_T UnitDelay_InitialCondition_bvmi2vzu1n ;
real_T Constant_Value_cr2kwqvzxu ; real_T wgw_Y0 ; real_T u_Gain_p0stpplhad ;
real_T dt_Gain_leuqrst5ru ; real_T UnitDelay_InitialCondition_lkw5bbronu ;
real_T Constant_Value_i1pvkuyoub ; real_T Gain_Gain ; real_T
max_height_low_Value ; real_T min_height_high_Value ; real_T
Gain_Gain_jecly514iu ; real_T max_height_low_Value_kq15juzkkq ; real_T
min_height_high_Value_ou01ccqz5e ; real_T Integrator_IC ; real_T
Integrator1_IC ; real_T Integrator2_IC ; real_T uDLookupTable_tableData [ 787
] ; real_T uDLookupTable_bp01Data [ 787 ] ; real_T
LimitFunction10ftto1000ft_UpperSat ; real_T
LimitFunction10ftto1000ft_LowerSat ; real_T LimitHeighth1000ft_UpperSat ;
real_T LimitHeighth1000ft_LowerSat ; real_T
PreLookUpIndexSearchaltitude_BreakpointsData [ 12 ] ; real_T
MediumHighAltitudeIntensity_Table [ 84 ] ; real_T WhiteNoise_Mean ; real_T
WhiteNoise_StdDev ; real_T Lv_Gain ; real_T Lw_Gain ; real_T u2rhoV2_Gain ;
real_T Switch_Threshold ; real_T Integrator_IC_iltpotqliy ; real_T
Switch_Threshold_ouid5vbrll ; real_T thrustcurveN5800_tableData [ 15 ] ;
real_T thrustcurveN5800_bp01Data [ 15 ] ; real_T Integrator3_IC ; real_T
ExtensionPlan_tableData [ 21 ] ; real_T ExtensionPlan_bp01Data [ 21 ] ;
real_T Gain_Gain_aepuuv4xlg ; real_T increasingvelocity_tableData [ 8 ] ;
real_T increasingvelocity_bp01Data [ 8 ] ; real_T Gain1_Gain ; real_T
Totalinitialmass_Value ; real_T Constant_Value_j4uvipadjw ; real_T
Constant1_Value_j5lbep2i5s ; real_T area_ref_Value ; real_T length_ref_Value
; real_T totalimpulse_Value ; real_T propellantmass_Value ; real_T
Constant_Value_ljjrc4ac51 [ 3 ] ; real_T Constant_Value_bnuzop5o1l ; real_T
l_Value ; real_T d_Value ; real_T area_ref_Value_agropua0cl ; real_T
correctionconstant_Value ; real_T Al_Value ; real_T Constant_Value_nh4qnxlmtb
; real_T area_ref_Value_ogzj0ybhah ; real_T length_ref_Value_jqw25fydac ;
real_T lengthofrocket_Value ; real_T volume_Value ; real_T
Sideforcecoefficient_Value ; real_T u_Value ; real_T sigma_wg_Gain ; real_T
PreLookUpIndexSearchprobofexceed_BreakpointsData [ 7 ] ; real_T
area_ref_Value_fcrkhd1pwn ; real_T Constant_Value_c1kdrdr2wo [ 3 ] ; real_T
extension_Value ; real_T gravityg_Value ; real_T rollmomentcoefficient_Value
; real_T Constant_Value_exs12nteho ; real_T Constant1_Value_ivo13icu2r ;
real_T yawmomentcoefficient_Value ; uint32_T
MediumHighAltitudeIntensity_maxIndex [ 2 ] ; pqpklmddmd gvg1dfussm ;
pqpklmddmd n5ulon0gce ; fok0ikyqof jtzk2crbxn ; pqpklmddmd he3nztz2xz ;
pqpklmddmd ger0owotcqg ; fok0ikyqof ll11mjwfrfq ; } ; extern const char_T *
RT_MEMORY_ALLOCATION_ERROR ; extern B rtB ; extern X rtX ; extern DW rtDW ;
extern ExtY rtY ; extern P rtP ; extern mxArray *
mr_ver1_3DOF_draft2_GetDWork ( ) ; extern void mr_ver1_3DOF_draft2_SetDWork (
const mxArray * ssDW ) ; extern mxArray *
mr_ver1_3DOF_draft2_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * ver1_3DOF_draft2_GetCAPIStaticMap ( void ) ;
extern SimStruct * const rtS ; extern DataMapInfo * rt_dataMapInfoPtr ;
extern rtwCAPI_ModelMappingInfo * rt_modelMapInfoPtr ; void MdlOutputs (
int_T tid ) ; void MdlOutputsParameterSampleTime ( int_T tid ) ; void
MdlUpdate ( int_T tid ) ; void MdlTerminate ( void ) ; void
MdlInitializeSizes ( void ) ; void MdlInitializeSampleTimes ( void ) ;
SimStruct * raccel_register_model ( ssExecutionInfo * executionInfo ) ;
#endif
