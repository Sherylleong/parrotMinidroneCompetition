#ifndef RTW_HEADER_flightControlSystem_private_h_
#define RTW_HEADER_flightControlSystem_private_h_
#include "rtwtypes.h"
#include "builtin_typeid_types.h"
#include "multiword_types.h"
#include "zero_crossing_types.h"
#include "simstruc.h"
#include "fixedpoint.h"
#include "flightControlSystem.h"
#include "flightControlSystem_types.h"
#include "rtw_modelmap_simtarget.h"
#include "simtarget/slMdlrefSimTargetCoreHeaders.h"
#include "simtarget/slMdlrefSimTargetInstrumentationHeaders.h"
#include "messages/slMessagesSfcnBridge.h"
#include "sl_fileio_rtw.h"
extern const char_T * rt_GetMatSignalLoggingFileName ( void ) ; extern const
char_T * rt_GetMatSigLogSelectorFileName ( void ) ; extern void *
rt_GetOSigstreamManager ( void ) ; extern void * *
rt_GetOSigstreamManagerAddr ( void ) ; extern void * rt_slioCatalogue ( void
) ; extern void * * rt_slioCatalogueAddr ( void ) ; extern void
rt_ssSet_slErrMsg ( void * S , void * diag ) ; extern void
rt_ssReportDiagnosticAsWarning ( void * S , void * diag ) ; extern void
rt_ssReportDiagnosticAsInfo ( void * S , void * diag ) ; extern const char_T
* rt_CreateFullPathToTop ( const char_T * toppath , const char_T * subpath )
; extern boolean_T slIsRapidAcceleratorSimulating ( void ) ; extern void
rt_RAccelReplaceFromFilename ( const char_T * blockpath , char_T * fileNam )
; extern void rt_RAccelReplaceToFilename ( const char_T * blockpath , char_T
* fileNam ) ; extern void slsaCacheDWorkPointerForSimTargetOP ( void * ss ,
void * * ptr ) ; extern void slsaCacheDWorkDataForSimTargetOP ( void * ss ,
void * ptr , unsigned int sizeInBytes ) ; extern void
slsaSaveRawMemoryForSimTargetOP ( void * ss , const char_T * key , void * *
ptr , unsigned int sizeInBytes , void * ( * customOPSaveFcn ) ( void *
dworkPtr , unsigned int * sizeInBytes ) , void ( * customOPRestoreFcn ) (
void * dworkPtr , const void * data , unsigned int sizeInBytes ) ) ; extern
void * gblLoggingInterval ;
#ifndef rtmCancelTimerToRaiseEvent
#define rtmCancelTimerToRaiseEvent(rtm, timerIndex) simTgtCancelTimerToRaiseEvent(_ssGetRootSS((rtm)->_mdlRefSfcnS), [timerIndex])
#endif
#ifndef rtmDisableTaskUsingRateIndex
#define rtmDisableTaskUsingRateIndex(rtm, sti) simTgtDisableTaskUsingRateIndex(_ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti])
#endif
#ifndef rtmEnableTaskUsingRateIndex
#define rtmEnableTaskUsingRateIndex(rtm, sti) simTgtEnableTaskUsingRateIndex(_ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti])
#endif
#ifndef rtmIsFirstInitCond
#define rtmIsFirstInitCond(rtm) ssIsFirstInitCond((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmIsMajorTimeStep
#define rtmIsMajorTimeStep(rtm) ssIsMajorTimeStep((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmIsMinorTimeStep
#define rtmIsMinorTimeStep(rtm) ssIsMinorTimeStep((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmRaiseEvent
#define rtmRaiseEvent(rtm, runtimeEventIndex) simTgtRaiseEvent(_ssGetRootSS((rtm)->_mdlRefSfcnS), [runtimeEventIndex])
#endif
#ifndef rtmRaiseEventWithEnqueue
#define rtmRaiseEventWithEnqueue(rtm, runtimeEventIndex) simTgtRaiseEventWithEnqueue(_ssGetRootSS((rtm)->_mdlRefSfcnS), [runtimeEventIndex])
#endif
#ifndef rtmRaiseWhenTimerExpiresAfter
#define rtmRaiseWhenTimerExpiresAfter(rtm, timerIndex, isRecurring, afterDur, runtimeEventIndex) simTgtRaiseWhenTimerExpiresAfter(_ssGetRootSS((rtm)->_mdlRefSfcnS), [timerIndex], isRecurring, afterDur, [runtimeEventIndex])
#endif
#ifndef rtmRaiseWhenTimerExpiresAt
#define rtmRaiseWhenTimerExpiresAt(rtm, timerIndex, atT, runtimeEventIndex) simTgtRaiseWhenTimerExpiresAt(_ssGetRootSS((rtm)->_mdlRefSfcnS), [timerIndex], atT, [runtimeEventIndex])
#endif
#ifndef rtmIsSpecialSampleHit
#define rtmIsSpecialSampleHit(rtm, sti, prom_sti, tid) ssIsSpecialSampleHit( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti], nmtwkzsqud[prom_sti], tid)
#endif
typedef struct { int8_T fau3qf03xm ; } hrtts4l5bc ; typedef struct { real32_T
n4u2gwmeck [ 2 ] ; } orji2pbk05 ; typedef struct { int8_T mkkaskumzr ;
boolean_T jhr0womnye ; } imbf3wrgri ; typedef struct { real32_T higb232ks1 [
2 ] ; } dyc32xehtl ; typedef struct { int8_T ley0an2uip ; boolean_T
njk4w5jozv ; } gabr0rnvjj ; typedef struct { real32_T iaci3ejhv2_mbvzarwird [
16 ] ; real32_T edzg5ojurz_cl54gopm0x [ 12 ] ; real32_T gnjka4005e_kkiq3xxxve
[ 9 ] ; real_T mziz3nn5lr_cxarnvbvui [ 4 ] ; real_T j13avt3ya4_bhxxfovxdy [ 3
] ; real_T gnjka4005e_pbm3vprmfu [ 3 ] ; real32_T fqlqwbd5is [ 6 ] ; real32_T
diwkkstwzv [ 4 ] ; real32_T bev5geht2k [ 4 ] ; real32_T ofzk4yqaty [ 4 ] ;
real32_T ozh1synzu3_cv5hdgrwft [ 4 ] ; real32_T kxwpfggynr_fqdqrf4qbc [ 4 ] ;
real32_T fv [ 4 ] ; real32_T n0icskb4jd_g2mlkqadfk [ 4 ] ; real_T a3etzmu5xt
[ 2 ] ; real_T e40yrpzyuq [ 2 ] ; real_T an1r03ms1q [ 4 ] ; real_T lesgjjhdse
[ 2 ] ; real_T cedlzypbo1 [ 2 ] ; real_T bdybuugoyn [ 2 ] ; real_T
hckumpkidc_g1smspu5ke [ 2 ] ; real32_T leirljwdz1_merlcviukg [ 3 ] ; real32_T
ai5dxuta3d_nz4o0shxby [ 3 ] ; real32_T hfe2uccrp1_ppxrqq0gsf [ 3 ] ; real_T
pjzxds4w1y ; real_T ctkxulxqbp [ 2 ] ; real_T nwc2w0behm ; real_T mg5gm1rrwc
[ 3 ] ; real_T bb5gw3vwdf [ 2 ] ; real_T egzubxuu5t_llw0u2ae0v ; real_T
d1sdpoe5zq_jwzvbuczlb ; real_T hb323v315k_dhmrxtyqop ; real_T unnamed_idx_2 ;
real_T avc2vkjfub_idx_0 ; real_T e2jse4qsm2_idx_1 ; real_T avc2vkjfub_idx_1 ;
real_T j13avt3ya4_tmp ; real32_T ggkmgq4uf0 [ 2 ] ; real32_T nfeaax1ctn [ 2 ]
; real32_T iedrhj0ljm [ 2 ] ; real32_T iiejrobht0 [ 4 ] ; real32_T br1hdqrr4b
[ 3 ] ; real32_T c0hr2x2r2u [ 16 ] ; real32_T plrk4i0s0t [ 2 ] ; real32_T
g0omvaowkd [ 2 ] ; real32_T lhkppeq5nc [ 4 ] ; real32_T kkdshod4h5 [ 2 ] ;
real32_T dkw510cvug [ 2 ] ; real32_T dts03pec5w [ 2 ] ; real32_T hqeuvdzx1l [
4 ] ; real32_T fchjjv4ub4 [ 2 ] ; real32_T pw0mcsqzmb [ 8 ] ; real32_T
blc1o30hbu [ 8 ] ; real32_T eq1h3gdlhw [ 16 ] ; real32_T d2r1shdz5z [ 4 ] ;
real32_T hx2cmwv4pr_guugdwf2m3 [ 2 ] ; real32_T pxonda0hgb_ldqodwenvz [ 2 ] ;
real32_T fczu5pq2ol_dhamdvybc1 [ 2 ] ; real32_T nsrhsdvi0b_dypejvacrn [ 2 ] ;
real32_T lzpya54qds_lxo5edjg3c [ 2 ] ; real32_T ivkfv1y5m1_owjr1h1vqy [ 2 ] ;
real32_T hciyp3btjt_bjbgfqrolh [ 2 ] ; real32_T mkqfkkpu35_nuebgmauvi [ 2 ] ;
real32_T n3ascxko3i_bsqwvugooi [ 2 ] ; real32_T a11u0nevmi_lnjdk5wtww [ 2 ] ;
real32_T gnmjshxnpv ; real32_T ja34uxmhnw ; real32_T h2w3fyzeix ; real32_T
dc3qn403cz ; real32_T blgzljheti ; real32_T oa13vjflhr [ 2 ] ; real32_T
gzpfxw0cb0 [ 2 ] ; real32_T awk13lcnc4 [ 4 ] ; real32_T jlabr4qxfo ; real32_T
mjj0hsvmxi [ 2 ] ; real32_T mxtb45j1vs [ 2 ] ; real32_T ca22pxn2ik [ 2 ] ;
real32_T eaw04hnn2p ; real32_T muuoe5y0sn ; real32_T jikbjddfc3 ; real32_T
pgfs04fsei ; real32_T bqcvsssbyu ; real32_T hqabpva4ig ; real32_T
cwkr5nfnsr_hv2ho1zopz ; real32_T mysvteaea1_bnlywzniup ; real32_T
pln304gd5j_dapv3jlyq5 ; real32_T ilrv1eq3wt_ezqlmfzvpq ; real32_T
pe1upt24z4_bjvjhhzy4i ; real32_T ftpfhpmq1t_jzx3amusab ; real32_T
bffdy4oprb_tmp ; real32_T bffdy4oprb_tmp_fdinthrxmb ; real32_T
je3oqwzoez_idx_2 ; real32_T hhgts5cvdm_idx_0 ; real32_T hhgts5cvdm_idx_1 ;
real32_T hhgts5cvdm_idx_2 ; real32_T je3oqwzoez_idx_0 ; real32_T
je3oqwzoez_idx_1 ; real32_T lc3c33xvq2_idx_1 ; real32_T lc3c33xvq2_idx_2 ;
real32_T nwqezykn5p_idx_0 ; real32_T bsng3p25ac_idx_1 ; real32_T
gnjka4005e_al00mdgrv4 ; real32_T gnjka4005e_tmp ; real32_T
gnjka4005e_tmp_ju13rw2h0m ; real32_T gnjka4005e_tmp_jz50ptvnrg ; real32_T
gnjka4005e_tmp_o4f35lbcvx ; real32_T gnjka4005e_tmp_nyxm0bsxsn ; real32_T
gnjka4005e_tmp_icdfyazkhu ; real32_T oehll4wgvd_oyypvi4boh ; real32_T
bodf4gi0av_nvsvtgkap4 ; real32_T blwstyolvy_m3yhjduhi1 ; real32_T
nbzmfofdw4_czkfpwuzm5 ; int32_T cff ; int32_T memOffset ; int32_T i ;
uint32_T i55i5dbrnk ; uint32_T jtkoloo2gf ; uint32_T hcymkhwaz2 ; uint32_T
j1jkeoiq0d_mdoasc5av4 ; uint32_T guvms2f3oy_m3ybdk4ikc ; uint32_T
mjnlaghkab_jacdjrqyev ; uint32_T lig4ya1hwn_h522xzlxvt ; uint32_T
ntwzhidvef_c0dok3111h ; uint32_T i3yk023g5r_ctvw0tpkon ; uint16_T mxir0xx3l1
; int16_T ndnrca1ph5 ; uint16_T kem2atjgpd_pxqvlbal2i ; uint16_T
iqe035hsoy_p5h3gwuwqg ; int8_T i_afnsueciae ; int8_T i1 ; uint8_T n43fsoetjx
; boolean_T f3qs4ytaki ; boolean_T dfuwr1jk03 ; boolean_T ahyw5cm0rj ;
boolean_T ckblav2twl ; boolean_T abfe3d3zz3_evg4t2fsev ; boolean_T
n4hjyaug4z_ax3wx1gs5w ; boolean_T da04unwzo4_as0qznsxlv ; boolean_T
ca5lhwbyek_ifotjnizh4 ; boolean_T pj2xsg2ewo_ltu3syw14q ; boolean_T
ktdizr245u_ojunzewo4f ; boolean_T jk2y40vph2_o2tow3gxzm ; boolean_T
hvzpu5ojd3_ipgns4eet5 ; boolean_T gbrpsno10i_fkr0r45bcn ; boolean_T
e0zxqcrfyp_izlwqhinl5 ; boolean_T bdb2nwluvi_fft32lqtda ; boolean_T
bw1nuulehe_gxhmnjv5xa ; dyc32xehtl ipbtas1tys ; orji2pbk05 bm3dpymkhz ;
dyc32xehtl ifzbhw4mrws ; orji2pbk05 phrpuocqmvu ; } eo4bbte2ey ; typedef
struct { real_T mi4mocbazh ; real_T mtonzezz2z [ 2 ] ; real_T ddv3ztj2wp [ 3
] ; real_T bw2ribqmwm ; real_T f2ynnmexgv ; real_T oypkwoqg1d ; struct { void
* AQHandles ; } puq03cpvbg ; real32_T b3fmbw5stg [ 2 ] ; real32_T aq2aymvaio
[ 3 ] ; real32_T dzwopklw3c ; real32_T d4fp3a2mpz [ 15 ] ; real32_T
fl0vv44tbs [ 2 ] ; real32_T as5a0ikbk1 [ 2 ] ; real32_T ncgo1wegzg ; real32_T
mirtkskmtr ; real32_T jduomia1pb [ 5 ] ; real32_T od5c00niot [ 4 ] ; real32_T
dqfv1m130o [ 10 ] ; real32_T meognsjf1t [ 2 ] ; real32_T gcgpru4rcb [ 2 ] ;
real32_T peklmaellz [ 2 ] ; real32_T bsetqjfri4 ; real32_T dsjbzv2lh4 [ 2 ] ;
real32_T gixvkpnpus [ 2 ] ; real32_T ow5xb5ovt0 [ 2 ] ; real32_T krs1cvkxzk [
2 ] ; real32_T c4kiksmhh2 ; int32_T bbkjtf4kuy ; uint32_T l3lcputuyl ;
uint32_T pjgu33zeph ; uint32_T dxm3w2i52x ; real32_T orkq4iljgu ; real32_T
b1nmhkw4zo ; real32_T n0mydijbcx ; real32_T iwg03owvar ; real32_T mf2pp40f5v
[ 2 ] ; real32_T pwlp5beuqs [ 2 ] ; real32_T c4slvrb3tr ; uint16_T gaxgdudnvc
; int8_T dq5lalhp1e ; int8_T fpr1qi0oiw ; int8_T klyrn0mwhb ; int8_T
mfifybuxty ; int8_T a1oodzfxvv ; int8_T mgysgsd2g4 ; int8_T idn2v5d33m ;
uint8_T ibnsbzvyrn ; uint8_T jv32slkoka ; boolean_T de4yc1bkky ; boolean_T
jd3dqtmo2p ; boolean_T f1jy25gy04 ; boolean_T gdn4qfzvsk ; boolean_T
cqi2pi21ow ; boolean_T kh1khihcrt ; boolean_T iftedegxuv ; boolean_T
g4zcogq4xi ; gabr0rnvjj ipbtas1tys ; imbf3wrgri bm3dpymkhz ; gabr0rnvjj
ifzbhw4mrws ; imbf3wrgri phrpuocqmvu ; hrtts4l5bc ciy1c2o0rv ; hrtts4l5bc
jvbbqhrajh ; hrtts4l5bc clwiujjdqo ; hrtts4l5bc acfz1zxm4t ; hrtts4l5bc
ghadbep3bbv ; } dmp1xsadgu ; typedef struct { real_T b3ouxrig41 ; }
k5baggiqtb ; typedef struct { ZCSigState b1rw3rggh2 ; } ph1mky0ofs ; typedef
struct { real_T ghvphapyei_mbvzarwird [ 57600 ] ; real32_T msog5l3bnt [ 20340
] ; uint8_T RGB [ 57600 ] ; int8_T ifvu3rf4yt_cl54gopm0x [ 19200 ] ;
boolean_T fhynllboz2_kkiq3xxxve [ 19200 ] ; real32_T k4xhiig3el_cxarnvbvui [
1600 ] ; boolean_T pcq0hcu34h [ 1600 ] ; boolean_T j4vp20neuo_bhxxfovxdy [
1600 ] ; int8_T hdj2wab0l2_pbm3vprmfu [ 600 ] ; int8_T cs4qnjaabf_cv5hdgrwft
[ 400 ] ; int8_T ibvkeidjbg_fqdqrf4qbc [ 200 ] ; int8_T fghw2aujxx_g2mlkqadfk
[ 100 ] ; int8_T mtvj0piiv4_g1smspu5ke [ 50 ] ; real_T d2jh3qji2a_merlcviukg
; real_T mccpod1wka_nz4o0shxby ; real32_T di1qnpfe3a_ppxrqq0gsf ; boolean_T
d0lonclty2_llw0u2ae0v ; boolean_T kiqazg501o_jwzvbuczlb ; boolean_T
bfcfvhg1yd_dhmrxtyqop ; boolean_T kh4hdt0ale_guugdwf2m3 ; boolean_T
cdug11nwec_ldqodwenvz ; boolean_T hannubgkmc_dhamdvybc1 ; boolean_T
awic4ozdfs_dypejvacrn ; boolean_T kvuyj1lakv_lxo5edjg3c ; eo4bbte2ey
otjykwnhb3s ; } ircitwx3zdm ; typedef struct { real32_T l151cvw20a [ 1600 ] ;
real32_T ddaipbjyii [ 1600 ] ; real32_T ijit51fap0 [ 1600 ] ; real_T
c3zfo1eioy [ 2 ] ; real_T bepi0pxnzh [ 3 ] ; real_T kd4gpvuq4d ; real_T
coagx5q5tk [ 15 ] ; real_T eubxngdwfx ; real_T lqnetrhqrb [ 15 ] ; real_T
p4an1zxeb3 ; real32_T ollsqe4tkk [ 2 ] ; bjqsgn0csy l152eirbdu ; int8_T
nbojvdn3wx ; int8_T is0fkrkenr ; boolean_T apmirysnvx ; boolean_T fxn4ff02p2
; boolean_T idji1cak4a ; boolean_T jacbm5emdo ; boolean_T iha3wpkzdg ;
boolean_T a55o5m4tjh ; boolean_T nuya4u3miw ; boolean_T k0zvsd1cqm ;
boolean_T jjrfotind4 ; dmp1xsadgu otjykwnhb3s ; } nllkaxiwhzw ; typedef
struct { k5baggiqtb otjykwnhb3s ; } h5liyesltnn ; typedef struct { ph1mky0ofs
otjykwnhb3s ; } cspyln32yuv ; struct bpvdgm2xq5_ { uint8_T P_0 ; } ; struct
je33m1dqwd_ { real32_T P_0 ; } ; struct fpqg1jdlo0_ { real32_T P_0 ; } ;
struct nu4qaxumex_ { real_T P_0 ; real_T P_1 ; real_T P_2 ; real_T P_3 ;
real_T P_4 ; real_T P_5 ; real32_T P_6 [ 2 ] ; real32_T P_7 [ 2 ] ; real32_T
P_8 ; real32_T P_9 ; real32_T P_10 ; real32_T P_11 ; real32_T P_12 ; real32_T
P_13 ; real32_T P_14 ; real32_T P_15 ; real32_T P_16 [ 2 ] ; real32_T P_17 ;
real32_T P_18 ; real32_T P_19 ; real32_T P_20 [ 2 ] ; real32_T P_21 ;
real32_T P_22 ; real32_T P_23 ; real32_T P_24 ; real32_T P_25 ; real32_T P_26
; real32_T P_27 ; real32_T P_28 ; real32_T P_29 ; real32_T P_30 ; real32_T
P_31 ; real32_T P_32 ; real32_T P_33 ; real32_T P_34 ; real32_T P_35 ;
real32_T P_36 ; real32_T P_37 ; real32_T P_38 ; real32_T P_39 ; real32_T P_40
; real32_T P_41 ; real32_T P_42 ; real32_T P_43 ; real32_T P_44 ; real32_T
P_45 ; uint32_T P_46 ; uint32_T P_47 ; uint32_T P_48 ; uint32_T P_49 ;
uint32_T P_50 ; uint16_T P_51 ; uint16_T P_52 ; real_T P_53 ; real_T P_54 ;
real_T P_55 ; real_T P_56 ; real_T P_57 [ 4 ] ; real_T P_58 [ 4 ] ; real_T
P_59 ; real_T P_60 ; real_T P_61 ; real_T P_62 ; real_T P_63 ; real_T P_64 ;
real_T P_65 [ 4 ] ; real_T P_66 [ 2 ] ; real_T P_67 [ 2 ] ; real_T P_68 [ 4 ]
; real_T P_69 [ 2 ] ; real_T P_70 [ 2 ] ; real_T P_71 ; real_T P_72 [ 4 ] ;
real_T P_73 [ 2 ] ; real_T P_74 ; real_T P_75 ; real_T P_76 ; real_T P_77 ;
real_T P_78 [ 2 ] ; real_T P_79 [ 3 ] ; real_T P_80 [ 4 ] ; real_T P_81 [ 2 ]
; real_T P_82 [ 2 ] ; real_T P_83 [ 4 ] ; real_T P_84 [ 2 ] ; real_T P_85 [ 2
] ; real_T P_86 ; real_T P_87 [ 3 ] ; real_T P_88 [ 16 ] ; real_T P_89 [ 8 ]
; real_T P_90 [ 8 ] ; real32_T P_91 ; real32_T P_92 ; real32_T P_93 ;
real32_T P_94 [ 2 ] ; real32_T P_95 ; real32_T P_96 ; real32_T P_97 ;
real32_T P_98 ; real32_T P_99 ; real32_T P_100 ; real32_T P_101 ; real32_T
P_102 ; real32_T P_103 ; real32_T P_104 ; real32_T P_105 [ 4 ] ; real32_T
P_106 [ 4 ] ; real32_T P_107 ; real32_T P_108 ; real32_T P_109 ; real32_T
P_110 [ 6 ] ; real32_T P_111 [ 6 ] ; real32_T P_112 ; real32_T P_113 [ 6 ] ;
real32_T P_114 ; real32_T P_115 [ 2 ] ; real32_T P_116 [ 2 ] ; real32_T P_117
; real32_T P_118 [ 2 ] ; real32_T P_119 [ 2 ] ; real32_T P_120 ; real32_T
P_121 [ 6 ] ; real32_T P_122 [ 6 ] ; real32_T P_123 ; real32_T P_124 ;
real32_T P_125 [ 6 ] ; real32_T P_126 [ 6 ] ; real32_T P_127 ; real32_T P_128
; real32_T P_129 ; real32_T P_130 ; real32_T P_131 ; real32_T P_132 ;
real32_T P_133 ; real32_T P_134 ; real32_T P_135 ; real32_T P_136 ; real32_T
P_137 ; real32_T P_138 ; real32_T P_139 ; real32_T P_140 [ 2 ] ; real32_T
P_141 [ 2 ] ; real32_T P_142 ; real32_T P_143 ; real32_T P_144 ; real32_T
P_145 ; real32_T P_146 ; real32_T P_147 ; real32_T P_148 ; real32_T P_149 ;
real32_T P_150 ; real32_T P_151 ; real32_T P_152 ; real32_T P_153 ; real32_T
P_154 ; real32_T P_155 [ 4 ] ; real32_T P_156 ; real32_T P_157 ; real32_T
P_158 ; real32_T P_159 ; real32_T P_160 [ 16 ] ; real32_T P_161 ; real32_T
P_162 ; real32_T P_163 ; real32_T P_164 [ 4 ] ; real32_T P_165 [ 2 ] ;
real32_T P_166 [ 2 ] ; real32_T P_167 ; real32_T P_168 [ 4 ] ; real32_T P_169
[ 4 ] ; real32_T P_170 [ 2 ] ; real32_T P_171 [ 2 ] ; real32_T P_172 [ 4 ] ;
real32_T P_173 ; real32_T P_174 [ 2 ] ; real32_T P_175 [ 4 ] ; real32_T P_176
[ 2 ] ; real32_T P_177 [ 2 ] ; real32_T P_178 ; real32_T P_179 [ 4 ] ;
real32_T P_180 [ 4 ] ; real32_T P_181 [ 2 ] ; real32_T P_182 [ 2 ] ; real32_T
P_183 [ 4 ] ; real32_T P_184 ; real32_T P_185 [ 2 ] ; real32_T P_186 ;
real32_T P_187 ; real32_T P_188 [ 16 ] ; real32_T P_189 [ 8 ] ; real32_T
P_190 [ 8 ] ; real32_T P_191 [ 4 ] ; real32_T P_192 [ 16 ] ; real32_T P_193 [
16 ] ; real32_T P_194 [ 8 ] ; real32_T P_195 [ 8 ] ; real32_T P_196 [ 16 ] ;
real32_T P_197 [ 4 ] ; real32_T P_198 [ 4 ] ; uint32_T P_199 ; uint32_T P_200
; uint32_T P_201 ; uint32_T P_202 ; uint32_T P_203 ; uint32_T P_204 ;
uint32_T P_205 ; uint32_T P_206 ; uint32_T P_207 ; uint16_T P_208 ; uint16_T
P_209 ; uint16_T P_210 ; boolean_T P_211 ; boolean_T P_212 ; boolean_T P_213
; boolean_T P_214 ; boolean_T P_215 ; int8_T P_216 ; int8_T P_217 ; int8_T
P_218 ; int8_T P_219 ; int8_T P_220 ; int8_T P_221 ; int8_T P_222 ; int8_T
P_223 ; uint8_T P_224 ; uint8_T P_225 ; fpqg1jdlo0 ipbtas1tys ; je33m1dqwd
bm3dpymkhz ; fpqg1jdlo0 ifzbhw4mrws ; je33m1dqwd phrpuocqmvu ; bpvdgm2xq5
ciy1c2o0rv ; bpvdgm2xq5 jvbbqhrajh ; bpvdgm2xq5 clwiujjdqo ; bpvdgm2xq5
acfz1zxm4t ; bpvdgm2xq5 ghadbep3bbv ; } ; struct ileg2v2ld1r_ { real_T P_1 ;
real_T P_2 ; real_T P_3 ; real32_T P_4 ; uint16_T P_5 ; uint16_T P_6 ;
uint16_T P_7 ; uint16_T P_8 ; uint16_T P_9 ; uint16_T P_10 ; uint16_T P_11 ;
uint16_T P_12 ; int8_T P_13 ; uint8_T P_14 ; real_T P_15 ; real_T P_16 ;
real_T P_17 ; int32_T P_18 [ 2 ] ; real32_T P_19 ; real32_T P_20 ; boolean_T
P_21 ; boolean_T P_22 ; boolean_T P_23 ; boolean_T P_24 ; boolean_T P_25 ;
boolean_T P_26 ; boolean_T P_27 ; boolean_T P_28 ; int8_T P_29 ; int8_T P_30
; int8_T P_31 ; int8_T P_32 ; int8_T P_33 ; int8_T P_34 ; int8_T P_35 ;
int8_T P_36 ; int8_T P_37 ; int8_T P_38 ; int8_T P_39 ; int8_T P_40 ; int8_T
P_41 ; int8_T P_42 ; int8_T P_43 ; int8_T P_44 ; int8_T P_45 ; int8_T P_46 ;
int8_T P_47 ; int8_T P_48 ; int8_T P_49 ; int8_T P_50 ; int8_T P_51 ; int8_T
P_52 ; int8_T P_53 ; int8_T P_54 ; int8_T P_55 ; int8_T P_56 ; int8_T P_57 ;
int8_T P_58 ; int8_T P_59 ; int8_T P_60 ; int8_T P_61 ; int8_T P_62 ; int8_T
P_63 ; int8_T P_64 ; int8_T P_65 ; int8_T P_66 ; nu4qaxumex otjykwnhb3s ; } ;
struct diqjpw4041 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; void * dataAddress [ 29 ] ; int32_T * vardimsAddress [
29 ] ; RTWLoggingFcnPtr loggingPtrs [ 29 ] ; sysRanDType * systemRan [ 34 ] ;
int_T systemTid [ 34 ] ; } DataMapInfo ; } ;
#ifndef rtmGetDataMapInfo
#define rtmGetDataMapInfo(rtm) ((rtm)->DataMapInfo)
#endif
#ifndef rtmSetDataMapInfo
#define rtmSetDataMapInfo(rtm, val) ((rtm)->DataMapInfo = (val))
#endif
#ifndef rtmGetClockTick0
#define rtmGetClockTick0(rtm) ssGetClockTick( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[0])
#endif
#ifndef rtmGetClockTick1
#define rtmGetClockTick1(rtm) ssGetClockTick( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[1])
#endif
#ifndef rtmGetClockTick2
#define rtmGetClockTick2(rtm) ssGetClockTick( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[2])
#endif
#ifndef rtmGetClockTickH0
#define rtmGetClockTickH0(rtm) ssGetClockTickH( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[0])
#endif
#ifndef rtmGetClockTickH1
#define rtmGetClockTickH1(rtm) ssGetClockTickH( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[1])
#endif
#ifndef rtmGetClockTickH2
#define rtmGetClockTickH2(rtm) ssGetClockTickH( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[2])
#endif
#ifndef rtmGetLogOutput
#define rtmGetLogOutput(rtm) ssGetLogOutput((rtm)->_mdlRefSfcnS)
#endif
#ifndef rtmSetSampleHit
#define rtmSetSampleHit(rtm, sti, tid, val) _ssSetSampleHit(_ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti], val)
#endif
#ifndef rtmIsSampleHit
#define rtmIsSampleHit(rtm, sti, tid) ssIsSampleHit( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti], tid)
#endif
#ifndef rtmGetT
#define rtmGetT(rtm) (ssGetT((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetTFinal
#define rtmGetTFinal(rtm) (ssGetTFinal((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetTNextWasAdjusted
#define rtmGetTNextWasAdjusted(rtm, sti) (ssGetTNextWasAdjusted((rtm)->_mdlRefSfcnS,  nmtwkzsqud[sti]))
#endif
#ifndef rtmGetTStart
#define rtmGetTStart(rtm) (ssGetTStart((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetTaskTime
#define rtmGetTaskTime(rtm, sti) ssGetTaskTime( _ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti])
#endif
#ifndef rtmSetTaskTime
#define rtmSetTaskTime(rtm, sti, val) _ssSetTaskTime(_ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti], val)
#endif
#ifndef rtmGetTimeOfLastOutput
#define rtmGetTimeOfLastOutput(rtm) (ssGetTimeOfLastOutput((rtm)->_mdlRefSfcnS))
#endif
#ifndef rtmGetVarNextHitTime
#define rtmGetVarNextHitTime(rtm, sti) (_ssGetVarNextHitTime((rtm)->_mdlRefSfcnS,  (int)(ssGetOffsetTime(_ssGetRootSS((rtm)->_mdlRefSfcnS), nmtwkzsqud[sti+2]))))
#endif
#ifndef rtmSetVarNextHitTime
#define rtmSetVarNextHitTime(rtm, sti, val) ssSetTimeOfNextVarHit((rtm)->_mdlRefSfcnS,  nmtwkzsqud[sti], val)
#endif
typedef struct { real32_T eio110x2j3 [ 4 ] ; real32_T pe52hrcn00 [ 4 ] ;
real32_T kkohvvbsbe [ 91 ] ; real32_T onpfjg5t2w ; } mu24dhzibl ; typedef
struct { ipf5ube4r0 rtm ; } lhjbdsj2rjg ; extern int_T nmtwkzsqud [ 3 ] ;
extern void ghadbep3bb ( uint8_T * hfpztkhwej , bpvdgm2xq5 * localP ) ;
extern void jfkq2sjtgw ( const real32_T duqg5o24fi [ 4 ] , boolean_T
pfxu5bb25d ) ; extern void gcledvfwzt ( orji2pbk05 * localB , je33m1dqwd *
localP ) ; extern void alfdzl2fz1 ( orji2pbk05 * localB , imbf3wrgri *
localDW , je33m1dqwd * localP ) ; extern void phrpuocqmv ( ipf5ube4r0 * const
accn4cnket , boolean_T hjrswm4ob0 , const real32_T ndqlqfbq0n [ 2 ] ,
real32_T pp4ryk1bnn , const real32_T crftt4mdlv [ 2 ] , const real32_T
pc1pu0u41d [ 2 ] , real32_T kemszrfmdj , real32_T k3tun14l4o , orji2pbk05 *
localB , imbf3wrgri * localDW , je33m1dqwd * localP ) ; extern void
e0j2slboh1 ( dyc32xehtl * localB , fpqg1jdlo0 * localP ) ; extern void
ng2z3yysbc ( dyc32xehtl * localB , gabr0rnvjj * localDW , fpqg1jdlo0 * localP
) ; extern void ifzbhw4mrw ( ipf5ube4r0 * const accn4cnket , boolean_T
ny1m4yhfkt , const real32_T izmwj1ddpc [ 2 ] , const real32_T fppyei0jac [ 2
] , real32_T fjag4trd4p , const real32_T fn1cyjs1o0 [ 2 ] , dyc32xehtl *
localB , gabr0rnvjj * localDW , fpqg1jdlo0 * localP ) ; extern void
mr51bswvyz ( ipf5ube4r0 * const accn4cnket , dmp1xsadgu * localDW ) ; extern
void ic5jb3movn ( eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex *
localP ) ; extern void bxsrqc204k ( eo4bbte2ey * localB , dmp1xsadgu *
localDW , nu4qaxumex * localP ) ; extern void eyt3piuhqz ( ipf5ube4r0 * const
accn4cnket , dmp1xsadgu * localDW ) ; extern void kegjp2lgms ( eo4bbte2ey *
localB , dmp1xsadgu * localDW , nu4qaxumex * localP ) ; extern void
lsjhvu4egy ( eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex * localP
) ; extern void otjykwnhb3 ( ipf5ube4r0 * const accn4cnket , const SensorsBus
* fp0u5nlpgw , real_T ay1xsyaztb , boolean_T nfqd2uxnr0 , boolean_T
melqzsunve , boolean_T a1uyjx15qi , boolean_T bgilitfgis , real32_T
kio5ncohny , boolean_T nngxyygivx , boolean_T gzviwcrhrs , boolean_T
kw1kgjtfj2 , boolean_T jb3o2smbxo , eo4bbte2ey * localB , dmp1xsadgu *
localDW , nu4qaxumex * localP , ph1mky0ofs * localZCE ) ; extern void
otjykwnhb3TID2 ( eo4bbte2ey * localB , nu4qaxumex * localP ) ; extern
ileg2v2ld1r b1hr2q0zjh ; extern const mu24dhzibl mu24dhzibl1 ; extern
lhjbdsj2rjg lhjbdsj2rj ; extern ircitwx3zdm ksm0js2nhsy ; extern nllkaxiwhzw
dqykr4eggmg ; extern cspyln32yuv f51itwtzkqf ;
#endif
