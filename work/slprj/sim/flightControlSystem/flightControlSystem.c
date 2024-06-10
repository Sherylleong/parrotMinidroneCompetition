#include "flightControlSystem.h"
#include "rtwtypes.h"
#include "flightControlSystem_private.h"
#include "flightControlSystem_types.h"
#include "mwmathutil.h"
#include <xmmintrin.h>
#include <emmintrin.h>
#include <string.h>
#include "flightControlSystem_capi.h"
#include "zero_crossing_types.h"
#include "div_s32_floor.h"
#include "rt_nonfinite.h"
#define cviu4wqjit ((uint8_T)4U)
#define g3nj33y0px ((uint8_T)0U)
#define hutwe2lsfa ((uint8_T)1U)
#define i5bi0qgnvh ((uint8_T)5U)
#define ivtwmn4hvv ((uint8_T)2U)
#define oj1ibndfoh ((uint8_T)3U)
int_T nmtwkzsqud [ 3 ] ; static RegMdlInfo rtMdlInfo_flightControlSystem [
208 ] = { { "pjles00mjh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "flightControlSystem" } , { "hpijc0phcq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "e3kwjfmtyq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "gnaa0kdq4f" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "clwgr5jdek" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "hb5mq1jp4d" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ibbiqytpnr" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "kgkmz2ehxp" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "lq5gtrqmfy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "i0nykibtoa" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "fpqg1jdlo0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gabr0rnvjj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dyc32xehtl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "gvrocgqiar" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "chqb5yk4na" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ohupmhckxo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "indibvooxj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "lwnnlvnhdo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "hxh5tgi533" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "fj00x4sgwu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nqkihlj0vf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ckpmcwhwmu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "l5zi4xqiqo" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "je33m1dqwd" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "imbf3wrgri" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "orji2pbk05" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "abzv3zworu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "d2thaieuby" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "nybory5x2z" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "oby15q5y4g" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dhaumv5oxy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "nlzlprwh35" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ps2hd2ktn0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "jm1sywurry" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "grsgxiu05c" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gux1we1f0x" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cfn0s3jrfx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "f3ujivsrsw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "hw3h0zldnq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ezsua5bijx" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "omkirkweac" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "lrsxga1mux" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "edl35owv4q" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "jig1nknlld" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "npn1dfesfs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "iffergcei1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "bsr3dujuk0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "crxyn1tssm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "lwj4qypsny" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "bpvdgm2xq5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "hrtts4l5bc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "mqmoncitu3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "k5baggiqtb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ei3m5g1hta" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "hn4i3fu15a" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "lbu5phzg3y" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "mtaqz0ggi1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "mfdtth4fkl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "cn2vepzj0w" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dfqhc4tws4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ph1mky0ofs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "femqyyfyjs" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nu4qaxumex" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dmp1xsadgu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "eo4bbte2ey" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "lhjbdsj2rjg" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"flightControlSystem" } , { "lhjbdsj2rj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "h5liyesltnn" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "k0lgy5kzmig" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "d2rcqsbpxyc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "kekotmnbk54" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "no25hyfktuo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ht3wudfgy2u" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "iesycof4wox" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "eev4eat4b5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cspyln32yuv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "dhuzh5wmni3" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "b1hr2q0zjhm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nllkaxiwhzw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "ircitwx3zdm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "h5liyesltn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "k0lgy5kzmi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "d2rcqsbpxy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "kekotmnbk5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "no25hyfktu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ht3wudfgy2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "iesycof4wo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "cspyln32yu" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "dhuzh5wmni" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "b1hr2q0zjh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nllkaxiwhz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ircitwx3zd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "b42rzqdx01" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "o2f5l50guo" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "m0l5se3ogg" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "bog0frvixl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "o5hyd2bjrc" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "pyvd4pdf3i" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gwlyno50ln" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ha1ipjbq54" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "f4qzdbbxmw" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "k3yxem35zg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dw0zngvhyq" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "o0d2t1xos2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "oplbkbi520" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "eyt3piuhqz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "kegjp2lgms" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nwvibpjmp0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "lsjhvu4egy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "bxsrqc204k" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "ic5jb3movn" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "n4xf3lkvmk" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "cyp5v4ller" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "mr51bswvyz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "otjykwnhb3" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "Control System" } , { "o3myonyzve" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "cbxjbqi34b" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "kwdvu5ctzj" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ng2z3yysbc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "e0j2slboh1" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "geavflab1i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "lc0erw2cz2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "flqbd5kc2h" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ifzbhw4mrw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "Enabled Subsystem" } , { "o1pgdacg0u" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "cxgwlvxv4s" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "ofaogkyrt4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "alfdzl2fz1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "gcledvfwzt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "flsbajpzfi" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "aummrq21x4" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dq3x4qvypw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "phrpuocqmv" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "MeasurementUpdate" } , { "lfexhnspuh" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nbew0lql35" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "o10422rka0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ns1oanlnmc" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "i5cf5wjr13" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "pmrewofspm" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "gabbhpxdh0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "cj0oeh3eko" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "jfkq2sjtgw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , 0 , ( void * ) "SqrtUsedFcn" } , { "itmfjpgv1o" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "dychmi5jvf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "okzguhbnst" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "gjrgypdhn2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "nsvs5ni5i5" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "b5nnaqep53" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ghadbep3bb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( void * ) "Geofencing error" } ,
{ "flightControlSystem" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL )
} , { "d0ohl2eoh0m" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "nmtwkzsqud" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "mu24dhzibl1" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "f51itwtzkqf" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "dqykr4eggmg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT
, 0 , - 1 , ( void * ) "flightControlSystem" } , { "ksm0js2nhsy" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "mu24dhzibl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "diqjpw4041" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "flightControlSystem" } , { "ipf5ube4r0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "flightControlSystem"
} , { "parrot_ImageProcess1" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } ,
{ "struct_TiYjGQy9n8bHGyacNpAe5G" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL
) } , { "struct_ySQ4RIodpBjWyWISwhI9L" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_WLOnDAJlMFi5IZVHs48dt" , MDL_INFO_ID_DATA_TYPE , 0 , - 1
, ( NULL ) } , { "struct_pkh41Wu1S5KReKZhn4FPzG" , MDL_INFO_ID_DATA_TYPE , 0
, - 1 , ( NULL ) } , { "struct_OSJpyIZcrpXqReVWwh9iuG" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_p3FXZIgqtjF2uqDpmYjb6C" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_OMRgDnJcZuQneKEj9vdTyD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_q6UUpnZ4gTjFvULFx6Rxa" , MDL_INFO_ID_DATA_TYPE , 0 , - 1
, ( NULL ) } , { "struct_IZWOW0zYvpphl7qLgSfN7E" , MDL_INFO_ID_DATA_TYPE , 0
, - 1 , ( NULL ) } , { "struct_hxsmtt0xTZOLDNa2Rz7GAF" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_XRMsui9C07VjBvdq1msujB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_eAf0NJvzCY9HYTXF7bLNgB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "SensorsBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_acquisition_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_vbat_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_ultrasound_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_list_echo_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_echo_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_pressure_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_magn_mG_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_fifo_gyro_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_gyro_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"HAL_acc_SI_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"extraSensorData_t" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"CommandBus" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_iVffV1TBXj5FV1arW9HEXD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL )
} , { "struct_upN04LJx4fKLPytCMWCPsB" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_8SSZ93PxvPkADZcA4gG8MD" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "struct_eFnp8sKFNJLN84XLbLzaFF" , MDL_INFO_ID_DATA_TYPE ,
0 , - 1 , ( NULL ) } , { "struct_FIfaVnupBjYAxo1EdNiDlF" ,
MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) } , {
"struct_eF5OUT33sX0T9pzS8027m" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , ( NULL ) }
, { "struct_LZS2kzYWg8ZnmAKAaEUHJD" , MDL_INFO_ID_DATA_TYPE , 0 , - 1 , (
NULL ) } , { "struct_hE1099BMemg5OfzqcWAA6G" , MDL_INFO_ID_DATA_TYPE , 0 , -
1 , ( NULL ) } , { "mr_flightControlSystem_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_restoreDataFromMxArray" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"mr_flightControlSystem_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "flightControlSystem" } , { "mr_flightControlSystem_GetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "flightControlSystem" } , {
"bjqsgn0csy" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"flightControlSystem" } , { "flightControlSystem.h" , MDL_INFO_MODEL_FILENAME
, 0 , - 1 , ( NULL ) } , { "flightControlSystem.c" , MDL_INFO_MODEL_FILENAME
, 0 , - 1 , ( void * ) "flightControlSystem" } } ; ileg2v2ld1r b1hr2q0zjh = {
0.6 , 0.6 , 0.6 , 70.0F , 60U , 30U , 30U , 30U , 110U , 110U , 20U , 50U , 3
, 10U , 91.0 , - 1.0 , 0.0 , { 113 , 0 } , 0.0174532924F , 0.0F , false ,
false , false , false , false , false , false , false , 80 , 60 , 60 , 20 ,
40 , 5 , 60 , 40 , 20 , 10 , 75 , 30 , 10 , 10 , 80 , 40 , 20 , 10 , 60 , 10
, 40 , 40 , 40 , 10 , 10 , 60 , 110 , 10 , 10 , 60 , 75 , 0 , 10 , 5 , 75 ,
10 , 10 , 10 , { 50.0 , - 1.0 , 0.8 , 0.4 , 0.1 , 0.0 , { 0.00012F , 9.72E-5F
} , { 0.006F , 0.00486F } , 0.1F , 0.0F , 0.0F , 0.0F , 0.0F , - 0.5F , -
0.34906584F , - 0.02F , { 70.0F , 70.0F } , 0.7F , 0.2F , 4.0F , { 0.003F ,
0.00243F } , 0.5F , 0.34906584F , 0.02F , 10.0F , 10.0F , 6.0F , 6.0F , 0.01F
, 0.01F , 6.867F , 12.753F , - 0.4F , 0.0F , 0.0F , 80.0F , 80.0F , 0.6F ,
0.5F , 0.6F , 0.5F , 7.0F , 7.0F , 5.0F , 5.0F , - 0.4F , 4294967295U ,
4294967295U , 4294967295U , 1U , 800U , 65535U , 100U , 0.0 , 0.0 , 0.0 , 0.0
, { 3.7568380197512489E-6 , 1.1270514059253748E-5 , 1.1270514059253748E-5 ,
3.7568380197512489E-6 } , { 1.0 , - 2.9371707284498907 , 2.8762997234793319 ,
- 0.939098940325283 } , 0.0 , 0.0 , 1.0 , 0.0 , 0.5 , 600.0 , { 1.0 , 0.0 ,
0.005 , 1.0 } , { 0.0 , 0.005 } , { 1.0 , 0.0 } , { 0.0026241420641871381 ,
0.0069776736071491255 , 0.0069776736071491255 , 0.037607692935052436 } , {
0.026590304322228774 , 0.069776736071487447 } , { 0.026241420641871387 ,
0.069776736071491249 } , 0.0 , { 0.0026948589925820132 ,
0.0071657120718244052 , 0.0071657120718244052 , 0.03810769293505243 } , { 0.0
, 1.0 } , 0.0 , 0.0 , 0.0005 , 0.1 , { - 0.046 , 0.0 } , { 0.0 , 0.0 , 9.81 }
, { 1097.3834951566071 , - 30.388465402648372 , - 30.388465402648375 ,
7.2223686232287516 } , { 0.0011870943291822833 , - 3.2868164179504543E-5 } ,
{ 0.0011869299883613858 , - 3.2868164179504482E-5 } , { 1097.3834951566071 ,
- 30.388465402648372 , - 30.388465402648375 , 7.2223686232287516 } , {
0.0011870943291822833 , - 3.2868164179504543E-5 } , { 0.0011869299883613858 ,
- 3.2868164179504482E-5 } , 0.0 , { 0.0 , 0.0 , - 9.81 } , {
1.3281632400274295 , 0.0 , - 0.43210920795533914 , 0.0 , 0.0 ,
1.3281632400274295 , 0.0 , - 0.43210920795533914 , - 0.43210920795533914 ,
0.0 , 6.147349862376486 , 0.0 , 0.0 , - 0.43210920795533914 , 0.0 ,
6.147349862376486 } , { 0.066516189303360257 , 4.5053399924773407E-19 , -
0.021605460397767236 , 2.4451005888416897E-19 , - 1.4532182529622698E-18 ,
0.066516189303360257 , 4.1595130505436516E-18 , - 0.021605460397767229 } , {
0.066408162001371465 , 0.0 , - 0.021605460397766958 , 0.0 , 0.0 ,
0.066408162001371465 , 0.0 , - 0.021605460397766958 } , 0.45F , 0.8F , 0.5F ,
{ - 1.0F , 1.0F } , 0.00228F , 0.0F , 0.0F , 0.0F , - 1.0F , 1.15F , 0.005F ,
0.0F , - 1.0F , 0.0832137167F , { 3.75683794E-6F , 1.12705138E-5F ,
1.12705138E-5F , 3.75683794E-6F } , { 1.0F , - 2.93717074F , 2.87629962F , -
0.939098954F } , 0.0F , 0.005F , 0.0F , { 0.0F , 0.0F , 9.81F , 0.0F , 0.0F ,
0.0F } , { 0.994075298F , 0.996184587F , 1.00549F , 1.00139189F ,
0.993601203F , 1.00003F } , 0.0F , { 0.0264077242F , 0.140531361F ,
0.33306092F , 0.33306092F , 0.140531361F , 0.0264077242F } , 0.101936802F , {
1.0F , 1.0F } , { 2.5915494F , - 0.591549456F } , 0.0F , { 1.0F , 1.0F } , {
2.5915494F , - 0.591549456F } , 0.0F , { 0.282124132F , 1.27253926F ,
2.42084408F , 2.42084408F , 1.27253926F , 0.282124132F } , { 1.0F ,
2.22871494F , 2.52446198F , 1.57725322F , 0.54102242F , 0.0795623958F } ,
0.0F , - 1.0F , { 0.282124132F , 1.27253926F , 2.42084408F , 2.42084408F ,
1.27253926F , 0.282124132F } , { 1.0F , 2.22871494F , 2.52446198F ,
1.57725322F , 0.54102242F , 0.0795623958F } , 0.0F , 200.0F , 0.0F , 0.0F ,
0.005F , 0.0F , 2.0F , - 2.0F , 0.24F , - 0.61803F , 1.20204329F , -
1.20204329F , 0.005F , { 1.0F , 1.0F } , { 8.95774746F , - 6.95774698F } ,
0.0F , 0.005F , 0.005F , 0.52359879F , - 0.52359879F , 0.004F , 0.005F , 0.0F
, 0.0012F , 0.002F , - 1530.72681F , 500.0F , 10.0F , { 1.0F , - 1.0F , 1.0F
, - 1.0F } , 1.0F , 1.0F , 0.0F , 0.0F , { 0.25F , 0.25F , 0.25F , 0.25F ,
103.573624F , - 103.573624F , 103.573624F , - 103.573624F , - 5.66592F , -
5.66592F , 5.66592F , 5.66592F , - 5.66592F , 5.66592F , 5.66592F , -
5.66592F } , 0.0F , 0.0F , 0.0F , { 1.0F , 0.0F , - 0.005F , 1.0F } , {
0.005F , 0.0F } , { 1.0F , 0.0F } , 0.0F , { 1098.6875F , - 30.4245777F , -
30.4245777F , 7.22336864F } , { 1.0F , 0.0F , 0.0F , 1.0F } , { 0.0F , 0.0F }
, { 0.0F , 0.0F } , { 1.0F , 0.0F , 0.0F , 0.001F } , 924556.188F , { 0.0F ,
0.0F } , { 1.0F , 0.0F , - 0.005F , 1.0F } , { 0.005F , 0.0F } , { 1.0F ,
0.0F } , 0.0F , { 1098.6875F , - 30.4245777F , - 30.4245777F , 7.22336864F }
, { 1.0F , 0.0F , 0.0F , 1.0F } , { 0.0F , 0.0F } , { 0.0F , 0.0F } , { 1.0F
, 0.0F , 0.0F , 0.001F } , 924556.188F , { 0.0F , 0.0F } , 0.0F , 2.0F , {
1.0F , 0.0F , 0.0F , 0.0F , 0.0F , 1.0F , 0.0F , 0.0F , - 0.005F , 0.0F ,
1.0F , 0.0F , 0.0F , - 0.005F , 0.0F , 1.0F } , { 0.005F , 0.0F , 0.0F , 0.0F
, 0.0F , 0.005F , 0.0F , 0.0F } , { 1.0F , 0.0F , 0.0F , 1.0F , 0.0F , 0.0F ,
0.0F , 0.0F } , { 0.0F , 0.0F , 0.0F , 0.0F } , { 1.42263806F , 0.0F , -
0.462845951F , 0.0F , 0.0F , 1.42263806F , 0.0F , - 0.462845951F , -
0.462845951F , 0.0F , 6.15735F , 0.0F , 0.0F , - 0.462845951F , 0.0F ,
6.15735F } , { 1.0F , 0.0F , 0.0F , 0.0F , 0.0F , 1.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 1.0F , 0.0F , 0.0F , 0.0F , 0.0F , 1.0F } , { 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.0F , 0.0F } , { 0.0F , 0.0F , 0.0F , 0.0F , 0.0F ,
0.0F , 0.0F , 0.0F } , { 0.09F , 0.0F , 0.0F , 0.0F , 0.0F , 0.09F , 0.0F ,
0.0F , 0.0F , 0.0F , 0.01F , 0.0F , 0.0F , 0.0F , 0.0F , 0.01F } , { 20.0F ,
0.0F , 0.0F , 20.0F } , { 0.0F , 0.0F , 0.0F , 0.0F } , 0U , 0U , 0U , 1U ,
0U , 1U , 0U , 1U , 0U , 0U , 1U , 0U , false , false , false , false , true
, 1 , - 1 , 1 , - 1 , 1 , - 1 , 1 , - 1 , 1U , 0U , { 0.0F } , { 0.0F } , {
0.0F } , { 0.0F } , { 0U } , { 0U } , { 0U } , { 99U } , { 1U } } } ;
lhjbdsj2rjg lhjbdsj2rj ; ircitwx3zdm ksm0js2nhsy ; nllkaxiwhzw dqykr4eggmg ;
cspyln32yuv f51itwtzkqf ; void ghadbep3bb ( uint8_T * hfpztkhwej , bpvdgm2xq5
* localP ) { * hfpztkhwej = localP -> P_0 ; } void jfkq2sjtgw ( const
real32_T duqg5o24fi [ 4 ] , boolean_T pfxu5bb25d ) { real32_T mzoesetdez [ 4
] ; int32_T i ; real32_T mzoesetdez_tmp ; if ( pfxu5bb25d ) { for ( i = 0 ; i
< 2 ; i ++ ) { mzoesetdez_tmp = duqg5o24fi [ i + 2 ] ; mzoesetdez [ i ] =
mzoesetdez_tmp * duqg5o24fi [ 2 ] + duqg5o24fi [ i ] * duqg5o24fi [ 0 ] ;
mzoesetdez [ i + 2 ] = mzoesetdez_tmp * duqg5o24fi [ 3 ] + duqg5o24fi [ i ] *
duqg5o24fi [ 1 ] ; } } else { for ( i = 0 ; i < 2 ; i ++ ) { mzoesetdez [ i ]
= duqg5o24fi [ i ] ; mzoesetdez [ i + 2 ] = duqg5o24fi [ i + 2 ] ; } } } void
gcledvfwzt ( orji2pbk05 * localB , je33m1dqwd * localP ) { localB ->
n4u2gwmeck [ 0 ] = localP -> P_0 ; localB -> n4u2gwmeck [ 1 ] = localP -> P_0
; } void alfdzl2fz1 ( orji2pbk05 * localB , imbf3wrgri * localDW , je33m1dqwd
* localP ) { localB -> n4u2gwmeck [ 0 ] = localP -> P_0 ; localB ->
n4u2gwmeck [ 1 ] = localP -> P_0 ; localDW -> jhr0womnye = false ; } void
phrpuocqmv ( ipf5ube4r0 * const accn4cnket , boolean_T hjrswm4ob0 , const
real32_T ndqlqfbq0n [ 2 ] , real32_T pp4ryk1bnn , const real32_T crftt4mdlv [
2 ] , const real32_T pc1pu0u41d [ 2 ] , real32_T kemszrfmdj , real32_T
k3tun14l4o , orji2pbk05 * localB , imbf3wrgri * localDW , je33m1dqwd * localP
) { real32_T aohxlltyk5 ; real32_T phh0xhhm2i_p ; if ( hjrswm4ob0 ) { if ( !
localDW -> jhr0womnye ) { if ( rtmGetTaskTime ( accn4cnket , 0 ) !=
rtmGetTStart ( accn4cnket ) ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; } localDW -> jhr0womnye = true ; } aohxlltyk5
= crftt4mdlv [ 0 ] ; phh0xhhm2i_p = aohxlltyk5 * pc1pu0u41d [ 0 ] ;
aohxlltyk5 = crftt4mdlv [ 1 ] ; phh0xhhm2i_p += aohxlltyk5 * pc1pu0u41d [ 1 ]
; aohxlltyk5 = pp4ryk1bnn - ( kemszrfmdj * k3tun14l4o + phh0xhhm2i_p ) ;
localB -> n4u2gwmeck [ 0 ] = ndqlqfbq0n [ 0 ] * aohxlltyk5 ; localB ->
n4u2gwmeck [ 1 ] = ndqlqfbq0n [ 1 ] * aohxlltyk5 ; srUpdateBC ( localDW ->
mkkaskumzr ) ; } else if ( localDW -> jhr0womnye ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
alfdzl2fz1 ( localB , localDW , localP ) ; } } void e0j2slboh1 ( dyc32xehtl *
localB , fpqg1jdlo0 * localP ) { localB -> higb232ks1 [ 0 ] = localP -> P_0 ;
localB -> higb232ks1 [ 1 ] = localP -> P_0 ; } void ng2z3yysbc ( dyc32xehtl *
localB , gabr0rnvjj * localDW , fpqg1jdlo0 * localP ) { localB -> higb232ks1
[ 0 ] = localP -> P_0 ; localB -> higb232ks1 [ 1 ] = localP -> P_0 ; localDW
-> njk4w5jozv = false ; } void ifzbhw4mrw ( ipf5ube4r0 * const accn4cnket ,
boolean_T ny1m4yhfkt , const real32_T izmwj1ddpc [ 2 ] , const real32_T
fppyei0jac [ 2 ] , real32_T fjag4trd4p , const real32_T fn1cyjs1o0 [ 2 ] ,
dyc32xehtl * localB , gabr0rnvjj * localDW , fpqg1jdlo0 * localP ) { real32_T
mjzsyo5ls5 ; real32_T tmp ; if ( ny1m4yhfkt ) { if ( ! localDW -> njk4w5jozv
) { if ( rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> njk4w5jozv = true ; } tmp = fppyei0jac [ 0 ] ; mjzsyo5ls5 = tmp *
fn1cyjs1o0 [ 0 ] ; tmp = fppyei0jac [ 1 ] ; mjzsyo5ls5 += tmp * fn1cyjs1o0 [
1 ] ; mjzsyo5ls5 = fjag4trd4p - mjzsyo5ls5 ; tmp = izmwj1ddpc [ 0 ] *
mjzsyo5ls5 ; mjzsyo5ls5 *= izmwj1ddpc [ 1 ] ; localB -> higb232ks1 [ 0 ] =
tmp ; localB -> higb232ks1 [ 1 ] = mjzsyo5ls5 ; srUpdateBC ( localDW ->
ley0an2uip ) ; } else if ( localDW -> njk4w5jozv ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
ng2z3yysbc ( localB , localDW , localP ) ; } } void mr51bswvyz ( ipf5ube4r0 *
const accn4cnket , dmp1xsadgu * localDW ) { if ( ( ssGetSimMode ( accn4cnket
-> _mdlRefSfcnS ) != SS_SIMMODE_EXTERNAL ) && ( ( accn4cnket -> _mdlRefSfcnS
) -> mdlInfo -> rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { { if
( slIsRapidAcceleratorSimulating ( ) || ( ssGetSimMode ( accn4cnket ->
_mdlRefSfcnS ) == SS_SIMMODE_NORMAL ) || ssRTWGenIsAccelerator ( accn4cnket
-> _mdlRefSfcnS ) ) { bool isStreamoutAlreadyRegistered = false ; {
sdiSignalSourceInfoU srcInfo ; sdiLabelU loggedName = sdiGetLabelFromChars (
"State Estimator:1" ) ; sdiLabelU origSigName = sdiGetLabelFromChars ( "" ) ;
sdiLabelU propName = sdiGetLabelFromChars ( "State Estimator:1" ) ; sdiLabelU
blockPath = sdiGetLabelFromChars (
"flightControlSystem/Control System/To Workspace" ) ; sdiLabelU blockSID =
sdiGetLabelFromChars ( "" ) ; sdiLabelU subPath = sdiGetLabelFromChars ( "" )
; sdiDims sigDims ; sdiDims forEachMdlRefDims ; int_T forEachMdlRefDimsArray
[ 32 ] ; sdiLabelU sigName = sdiGetLabelFromChars ( "State Estimator:1" ) ;
sdiAsyncQueueHandle hForEachParent = ( NULL ) ; sdiAsyncRepoDataTypeHandle
hDT = sdiAsyncRepoGetBuiltInDataTypeHandle ( DATA_TYPE_SINGLE ) ; {
sdiComplexity sigComplexity = REAL ; sdiSampleTimeContinuity stCont =
SAMPLE_TIME_DISCRETE ; int_T sigDimsArray [ 1 ] = { 12 } ; sigDims . nDims =
1 ; sigDims . dimensions = sigDimsArray ; srcInfo . numBlockPathElems = 1 ;
srcInfo . fullBlockPath = ( sdiFullBlkPathU ) & blockPath ; srcInfo . SID = (
sdiSignalIDU ) & blockSID ; srcInfo . subPath = subPath ; srcInfo . portIndex
= 0 + 1 ; srcInfo . signalName = sigName ; srcInfo . sigSourceUUID = 0 ; if (
slIsRapidAcceleratorSimulating ( ) ) { forEachMdlRefDims . nDims = 0 ; } else
{ forEachMdlRefDims . nDims = slSigLogGetForEachDimsForRefModel ( accn4cnket
-> _mdlRefSfcnS , forEachMdlRefDimsArray ) ; forEachMdlRefDims . dimensions =
forEachMdlRefDimsArray ; } if ( forEachMdlRefDims . nDims > 0 ) {
hForEachParent = sdiCreateForEachParent ( & srcInfo , accn4cnket ->
DataMapInfo . mmi . InstanceMap . fullPath , ( NULL ) , loggedName ,
origSigName , propName , & forEachMdlRefDims ) ; sdiUpdateForEachLeafName ( &
srcInfo , hForEachParent ) ; { sdiLabelU varName = sdiGetLabelFromChars (
"estimatedStates" ) ; sdiRegisterWksVariable ( hForEachParent , varName ,
"structwithtime" ) ; sdiFreeLabel ( varName ) ; }
sdiAsyncRepoSetBlockPathDomain ( hForEachParent ) ;
isStreamoutAlreadyRegistered = true ; } localDW -> puq03cpvbg . AQHandles =
sdiStartAsyncioQueueCreation ( hDT , & srcInfo , accn4cnket -> DataMapInfo .
mmi . InstanceMap . fullPath , "310c2554-8f2f-4a9c-8991-331a0a443ff3" ,
sigComplexity , & sigDims , DIMENSIONS_MODE_FIXED , stCont , "" ) ;
sdiCompleteAsyncioQueueCreation ( localDW -> puq03cpvbg . AQHandles , hDT , &
srcInfo ) ; if ( localDW -> puq03cpvbg . AQHandles ) {
sdiSetSignalSampleTimeString ( localDW -> puq03cpvbg . AQHandles , "0.005" ,
0.005 , rtmGetTFinal ( accn4cnket ) ) ; sdiSetSignalRefRate ( localDW ->
puq03cpvbg . AQHandles , 0.0 ) ; sdiSetRunStartTime ( localDW -> puq03cpvbg .
AQHandles , rtmGetTaskTime ( accn4cnket , 0 ) ) ;
sdiAsyncRepoSetSignalExportSettings ( localDW -> puq03cpvbg . AQHandles , 1 ,
0 ) ; sdiAsyncRepoSetSignalExportName ( localDW -> puq03cpvbg . AQHandles ,
loggedName , origSigName , propName ) ; sdiAsyncRepoSetBlockPathDomain (
localDW -> puq03cpvbg . AQHandles ) ; if ( forEachMdlRefDims . nDims > 0 ) {
sdiAttachForEachIterationToParent ( hForEachParent , localDW -> puq03cpvbg .
AQHandles , ( NULL ) ) ; if ( srcInfo . signalName != sigName ) { sdiFreeName
( srcInfo . signalName ) ; } } } sdiFreeLabel ( sigName ) ; sdiFreeLabel (
loggedName ) ; sdiFreeLabel ( origSigName ) ; sdiFreeLabel ( propName ) ;
sdiFreeLabel ( blockPath ) ; sdiFreeLabel ( blockSID ) ; sdiFreeLabel (
subPath ) ; } } if ( ! isStreamoutAlreadyRegistered ) { { sdiLabelU varName =
sdiGetLabelFromChars ( "estimatedStates" ) ; sdiRegisterWksVariable ( localDW
-> puq03cpvbg . AQHandles , varName , "structwithtime" ) ; sdiFreeLabel (
varName ) ; } } } } } } void ic5jb3movn ( eo4bbte2ey * localB , dmp1xsadgu *
localDW , nu4qaxumex * localP ) { int32_T i ; localDW -> b3fmbw5stg [ 0 ] =
localP -> P_102 ; localDW -> b3fmbw5stg [ 1 ] = localP -> P_102 ; localDW ->
dq5lalhp1e = 2 ; localDW -> mi4mocbazh = localP -> P_55 ; localDW ->
de4yc1bkky = true ; localDW -> aq2aymvaio [ 0 ] = localP -> P_107 ; localDW
-> ddv3ztj2wp [ 0 ] = localP -> P_59 ; localDW -> aq2aymvaio [ 1 ] = localP
-> P_107 ; localDW -> ddv3ztj2wp [ 1 ] = localP -> P_59 ; localDW ->
aq2aymvaio [ 2 ] = localP -> P_107 ; localDW -> ddv3ztj2wp [ 2 ] = localP ->
P_59 ; localDW -> dzwopklw3c = localP -> P_109 ; localDW -> bbkjtf4kuy = 0 ;
for ( i = 0 ; i < 15 ; i ++ ) { localDW -> d4fp3a2mpz [ i ] = localP -> P_112
; } localDW -> jd3dqtmo2p = true ; localDW -> f1jy25gy04 = true ; localDW ->
l3lcputuyl = localP -> P_199 ; localDW -> ncgo1wegzg = localP -> P_117 ;
localDW -> mirtkskmtr = localP -> P_120 ; for ( i = 0 ; i < 5 ; i ++ ) {
localDW -> jduomia1pb [ i ] = localP -> P_123 ; } localDW -> pjgu33zeph =
localP -> P_200 ; localDW -> gdn4qfzvsk = true ; for ( i = 0 ; i < 10 ; i ++
) { localDW -> dqfv1m130o [ i ] = localP -> P_127 ; } localDW -> gaxgdudnvc =
localP -> P_208 ; localDW -> bsetqjfri4 = localP -> P_132 ; localDW ->
fpr1qi0oiw = 2 ; localDW -> meognsjf1t [ 0 ] = localP -> P_9 ; localDW ->
gcgpru4rcb [ 0 ] = localP -> P_129 ; localDW -> peklmaellz [ 0 ] = localP ->
P_130 ; localDW -> dsjbzv2lh4 [ 0 ] = localP -> P_11 ; localDW -> gixvkpnpus
[ 0 ] = localP -> P_142 ; localDW -> ow5xb5ovt0 [ 0 ] = localP -> P_12 ;
localDW -> krs1cvkxzk [ 0 ] = localP -> P_10 ; localDW -> meognsjf1t [ 1 ] =
localP -> P_9 ; localDW -> gcgpru4rcb [ 1 ] = localP -> P_129 ; localDW ->
peklmaellz [ 1 ] = localP -> P_130 ; localDW -> dsjbzv2lh4 [ 1 ] = localP ->
P_11 ; localDW -> gixvkpnpus [ 1 ] = localP -> P_142 ; localDW -> ow5xb5ovt0
[ 1 ] = localP -> P_12 ; localDW -> krs1cvkxzk [ 1 ] = localP -> P_10 ;
localDW -> c4kiksmhh2 = localP -> P_149 ; localDW -> dxm3w2i52x = localP ->
P_201 ; localDW -> bw2ribqmwm = localP -> P_60 ; localB -> n43fsoetjx =
localP -> P_225 ; localDW -> ibnsbzvyrn = 0U ; localDW -> jv32slkoka =
g3nj33y0px ; localB -> jikbjddfc3 = 0.0F ; localB -> pgfs04fsei = 0.0F ;
localB -> bqcvsssbyu = 0.0F ; localB -> hqabpva4ig = 0.0F ; localDW ->
c4slvrb3tr = 0.0F ; localDW -> oypkwoqg1d = 0.0 ; localB -> bdybuugoyn [ 0 ]
= localP -> P_53 ; localB -> cedlzypbo1 [ 0 ] = localP -> P_54 ; localB ->
bdybuugoyn [ 1 ] = localP -> P_53 ; localB -> cedlzypbo1 [ 1 ] = localP ->
P_54 ; gcledvfwzt ( & localB -> phrpuocqmvu , & localP -> phrpuocqmvu ) ;
e0j2slboh1 ( & localB -> ifzbhw4mrws , & localP -> ifzbhw4mrws ) ; gcledvfwzt
( & localB -> bm3dpymkhz , & localP -> bm3dpymkhz ) ; e0j2slboh1 ( & localB
-> ipbtas1tys , & localP -> ipbtas1tys ) ; localB -> muuoe5y0sn = localP ->
P_96 ; localB -> ofzk4yqaty [ 0 ] = localP -> P_97 ; localB -> bev5geht2k [ 0
] = localP -> P_98 ; localB -> ofzk4yqaty [ 1 ] = localP -> P_97 ; localB ->
bev5geht2k [ 1 ] = localP -> P_98 ; localB -> ofzk4yqaty [ 2 ] = localP ->
P_97 ; localB -> bev5geht2k [ 2 ] = localP -> P_98 ; localB -> ofzk4yqaty [ 3
] = localP -> P_97 ; localB -> bev5geht2k [ 3 ] = localP -> P_98 ; } void
bxsrqc204k ( eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex * localP
) { int32_T i ; localDW -> b3fmbw5stg [ 0 ] = localP -> P_102 ; localDW ->
b3fmbw5stg [ 1 ] = localP -> P_102 ; localDW -> dq5lalhp1e = 2 ; localDW ->
mi4mocbazh = localP -> P_55 ; localDW -> de4yc1bkky = true ; localDW ->
aq2aymvaio [ 0 ] = localP -> P_107 ; localDW -> ddv3ztj2wp [ 0 ] = localP ->
P_59 ; localDW -> aq2aymvaio [ 1 ] = localP -> P_107 ; localDW -> ddv3ztj2wp
[ 1 ] = localP -> P_59 ; localDW -> aq2aymvaio [ 2 ] = localP -> P_107 ;
localDW -> ddv3ztj2wp [ 2 ] = localP -> P_59 ; localDW -> dzwopklw3c = localP
-> P_109 ; localDW -> bbkjtf4kuy = 0 ; for ( i = 0 ; i < 15 ; i ++ ) {
localDW -> d4fp3a2mpz [ i ] = localP -> P_112 ; } localDW -> jd3dqtmo2p =
true ; localDW -> f1jy25gy04 = true ; localDW -> l3lcputuyl = localP -> P_199
; localDW -> ncgo1wegzg = localP -> P_117 ; localDW -> mirtkskmtr = localP ->
P_120 ; for ( i = 0 ; i < 5 ; i ++ ) { localDW -> jduomia1pb [ i ] = localP
-> P_123 ; } localDW -> pjgu33zeph = localP -> P_200 ; localDW -> gdn4qfzvsk
= true ; for ( i = 0 ; i < 10 ; i ++ ) { localDW -> dqfv1m130o [ i ] = localP
-> P_127 ; } localDW -> gaxgdudnvc = localP -> P_208 ; localDW -> bsetqjfri4
= localP -> P_132 ; localDW -> fpr1qi0oiw = 2 ; localDW -> meognsjf1t [ 0 ] =
localP -> P_9 ; localDW -> gcgpru4rcb [ 0 ] = localP -> P_129 ; localDW ->
peklmaellz [ 0 ] = localP -> P_130 ; localDW -> dsjbzv2lh4 [ 0 ] = localP ->
P_11 ; localDW -> gixvkpnpus [ 0 ] = localP -> P_142 ; localDW -> ow5xb5ovt0
[ 0 ] = localP -> P_12 ; localDW -> krs1cvkxzk [ 0 ] = localP -> P_10 ;
localDW -> meognsjf1t [ 1 ] = localP -> P_9 ; localDW -> gcgpru4rcb [ 1 ] =
localP -> P_129 ; localDW -> peklmaellz [ 1 ] = localP -> P_130 ; localDW ->
dsjbzv2lh4 [ 1 ] = localP -> P_11 ; localDW -> gixvkpnpus [ 1 ] = localP ->
P_142 ; localDW -> ow5xb5ovt0 [ 1 ] = localP -> P_12 ; localDW -> krs1cvkxzk
[ 1 ] = localP -> P_10 ; localDW -> c4kiksmhh2 = localP -> P_149 ; localDW ->
dxm3w2i52x = localP -> P_201 ; localDW -> bw2ribqmwm = localP -> P_60 ;
localDW -> ibnsbzvyrn = 0U ; localDW -> jv32slkoka = g3nj33y0px ; localB ->
jikbjddfc3 = 0.0F ; localB -> pgfs04fsei = 0.0F ; localB -> bqcvsssbyu = 0.0F
; localB -> hqabpva4ig = 0.0F ; localDW -> c4slvrb3tr = 0.0F ; localDW ->
oypkwoqg1d = 0.0 ; } void kegjp2lgms ( eo4bbte2ey * localB , dmp1xsadgu *
localDW , nu4qaxumex * localP ) { if ( localDW -> g4zcogq4xi ) { localB ->
bdybuugoyn [ 0 ] = localP -> P_53 ; localB -> bdybuugoyn [ 1 ] = localP ->
P_53 ; localDW -> g4zcogq4xi = false ; } if ( localDW -> iftedegxuv ) {
localB -> cedlzypbo1 [ 0 ] = localP -> P_54 ; localB -> cedlzypbo1 [ 1 ] =
localP -> P_54 ; localDW -> iftedegxuv = false ; } if ( localDW -> kh1khihcrt
) { localB -> ofzk4yqaty [ 0 ] = localP -> P_97 ; localB -> ofzk4yqaty [ 1 ]
= localP -> P_97 ; localB -> ofzk4yqaty [ 2 ] = localP -> P_97 ; localB ->
ofzk4yqaty [ 3 ] = localP -> P_97 ; localDW -> kh1khihcrt = false ; } if (
localDW -> cqi2pi21ow ) { localB -> bev5geht2k [ 0 ] = localP -> P_98 ;
localB -> bev5geht2k [ 1 ] = localP -> P_98 ; localB -> bev5geht2k [ 2 ] =
localP -> P_98 ; localB -> bev5geht2k [ 3 ] = localP -> P_98 ; localDW ->
cqi2pi21ow = false ; } if ( localDW -> ifzbhw4mrws . njk4w5jozv ) {
ng2z3yysbc ( & localB -> ifzbhw4mrws , & localDW -> ifzbhw4mrws , & localP ->
ifzbhw4mrws ) ; } if ( localDW -> ipbtas1tys . njk4w5jozv ) { ng2z3yysbc ( &
localB -> ipbtas1tys , & localDW -> ipbtas1tys , & localP -> ipbtas1tys ) ; }
if ( localDW -> phrpuocqmvu . jhr0womnye ) { alfdzl2fz1 ( & localB ->
phrpuocqmvu , & localDW -> phrpuocqmvu , & localP -> phrpuocqmvu ) ; } if (
localDW -> bm3dpymkhz . jhr0womnye ) { alfdzl2fz1 ( & localB -> bm3dpymkhz ,
& localDW -> bm3dpymkhz , & localP -> bm3dpymkhz ) ; } } void otjykwnhb3 (
ipf5ube4r0 * const accn4cnket , const SensorsBus * fp0u5nlpgw , real_T
ay1xsyaztb , boolean_T nfqd2uxnr0 , boolean_T melqzsunve , boolean_T
a1uyjx15qi , boolean_T bgilitfgis , real32_T kio5ncohny , boolean_T
nngxyygivx , boolean_T gzviwcrhrs , boolean_T kw1kgjtfj2 , boolean_T
jb3o2smbxo , eo4bbte2ey * localB , dmp1xsadgu * localDW , nu4qaxumex * localP
, ph1mky0ofs * localZCE ) { int_T tid = 0 ; __m128 tmp_e ; __m128 tmp_g ;
__m128 tmp_i ; __m128 tmp_m ; __m128d tmp ; __m128d tmp_p ; boolean_T guard1
; if ( localP -> P_215 && ( localDW -> dq5lalhp1e <= 0 ) ) { localDW ->
b3fmbw5stg [ 0 ] = localP -> P_102 ; localDW -> b3fmbw5stg [ 1 ] = localP ->
P_102 ; } localB -> hx2cmwv4pr_guugdwf2m3 [ 0 ] = localDW -> b3fmbw5stg [ 0 ]
; localB -> hx2cmwv4pr_guugdwf2m3 [ 1 ] = localDW -> b3fmbw5stg [ 1 ] ;
localB -> pjzxds4w1y = ( real_T ) localP -> P_103 * fp0u5nlpgw -> HALSensors
. HAL_ultrasound_SI . altitude ; localB -> egzubxuu5t_llw0u2ae0v = localB ->
pjzxds4w1y ; localB -> f3qs4ytaki = ( localDW -> mi4mocbazh > localP -> P_5 )
; localDW -> de4yc1bkky = ( localB -> f3qs4ytaki || localDW -> de4yc1bkky ) ;
if ( localDW -> de4yc1bkky ) { localDW -> mtonzezz2z [ 0 ] = localB ->
lesgjjhdse [ 0 ] ; localDW -> mtonzezz2z [ 1 ] = localB -> lesgjjhdse [ 1 ] ;
} localB -> avc2vkjfub_idx_0 = localDW -> mtonzezz2z [ 0 ] ; localB ->
avc2vkjfub_idx_1 = localDW -> mtonzezz2z [ 1 ] ; localDW -> orkq4iljgu = ( (
( ( fp0u5nlpgw -> HALSensors . HAL_pressure_SI . pressure - fp0u5nlpgw ->
SensorCalibration [ 6 ] ) * localP -> P_104 - localDW -> aq2aymvaio [ 0 ] *
localP -> P_106 [ 1 ] ) - localDW -> aq2aymvaio [ 1 ] * localP -> P_106 [ 2 ]
) - localDW -> aq2aymvaio [ 2 ] * localP -> P_106 [ 3 ] ) / localP -> P_106 [
0 ] ; localB -> ftpfhpmq1t_jzx3amusab = ( ( localP -> P_105 [ 0 ] * localDW
-> orkq4iljgu + localDW -> aq2aymvaio [ 0 ] * localP -> P_105 [ 1 ] ) +
localDW -> aq2aymvaio [ 1 ] * localP -> P_105 [ 2 ] ) + localDW -> aq2aymvaio
[ 2 ] * localP -> P_105 [ 3 ] ; localDW -> f2ynnmexgv = ( ( ( localB ->
pjzxds4w1y - localDW -> ddv3ztj2wp [ 0 ] * localP -> P_58 [ 1 ] ) - localDW
-> ddv3ztj2wp [ 1 ] * localP -> P_58 [ 2 ] ) - localDW -> ddv3ztj2wp [ 2 ] *
localP -> P_58 [ 3 ] ) / localP -> P_58 [ 0 ] ; if ( localB -> pjzxds4w1y > -
rtP_Sensors . altSensorMin ) { localB -> d1sdpoe5zq_jwzvbuczlb = -
rtP_Sensors . altSensorMin ; } else if ( localB -> pjzxds4w1y < localP ->
P_56 ) { localB -> d1sdpoe5zq_jwzvbuczlb = localP -> P_56 ; } else { localB
-> d1sdpoe5zq_jwzvbuczlb = localB -> pjzxds4w1y ; } localB -> dfuwr1jk03 = (
( muDoubleScalarAbs ( localDW -> mi4mocbazh - localB -> d1sdpoe5zq_jwzvbuczlb
) <= localP -> P_4 ) && ( localB -> pjzxds4w1y < - rtP_Sensors . altSensorMin
) && ( ( ! ( muDoubleScalarAbs ( localB -> ftpfhpmq1t_jzx3amusab - localDW ->
mi4mocbazh ) >= localP -> P_2 ) ) || ( ! ( muDoubleScalarAbs ( ( ( ( localP
-> P_57 [ 0 ] * localDW -> f2ynnmexgv + localDW -> ddv3ztj2wp [ 0 ] * localP
-> P_57 [ 1 ] ) + localDW -> ddv3ztj2wp [ 1 ] * localP -> P_57 [ 2 ] ) +
localDW -> ddv3ztj2wp [ 2 ] * localP -> P_57 [ 3 ] ) - localDW -> mi4mocbazh
) >= localP -> P_3 ) ) ) ) ; localB -> abfe3d3zz3_evg4t2fsev = localB ->
dfuwr1jk03 ; localB -> pj2xsg2ewo_ltu3syw14q = localB -> dfuwr1jk03 ; if (
localB -> pj2xsg2ewo_ltu3syw14q ) { if ( ! localDW -> iftedegxuv ) { if (
rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> iftedegxuv = true ; } localB -> d1sdpoe5zq_jwzvbuczlb = localB ->
egzubxuu5t_llw0u2ae0v - ( localP -> P_67 [ 0 ] * localB -> avc2vkjfub_idx_0 +
localP -> P_67 [ 1 ] * localB -> avc2vkjfub_idx_1 ) ; localB -> cedlzypbo1 [
0 ] = localB -> e40yrpzyuq [ 0 ] * localB -> d1sdpoe5zq_jwzvbuczlb ; localB
-> cedlzypbo1 [ 1 ] = localB -> e40yrpzyuq [ 1 ] * localB ->
d1sdpoe5zq_jwzvbuczlb ; srUpdateBC ( localDW -> mgysgsd2g4 ) ; } else if (
localDW -> iftedegxuv ) { ssSetBlockStateForSolverChangedAtMajorStep (
accn4cnket -> _mdlRefSfcnS ) ; localB -> cedlzypbo1 [ 0 ] = localP -> P_54 ;
localB -> cedlzypbo1 [ 1 ] = localP -> P_54 ; localDW -> iftedegxuv = false ;
} localB -> ctkxulxqbp [ 0 ] = localB -> cedlzypbo1 [ 0 ] + localB ->
avc2vkjfub_idx_0 ; localB -> ctkxulxqbp [ 1 ] = localB -> cedlzypbo1 [ 1 ] +
localB -> avc2vkjfub_idx_1 ; localB -> cwkr5nfnsr_hv2ho1zopz = ( real32_T )
localB -> ctkxulxqbp [ 0 ] ; localB -> mysvteaea1_bnlywzniup = localDW ->
dzwopklw3c ; for ( localB -> i = 0 ; localB -> i < 6 ; localB -> i ++ ) {
localB -> fqlqwbd5is [ localB -> i ] = fp0u5nlpgw -> SensorCalibration [
localB -> i ] + localP -> P_110 [ localB -> i ] ; } localB ->
hhgts5cvdm_idx_2 = localB -> fqlqwbd5is [ 0 ] ; localB -> bsng3p25ac_idx_1 =
localB -> fqlqwbd5is [ 1 ] ; localB -> pln304gd5j_dapv3jlyq5 = localB ->
fqlqwbd5is [ 2 ] ; localB -> ilrv1eq3wt_ezqlmfzvpq = localB -> fqlqwbd5is [ 3
] ; localB -> lc3c33xvq2_idx_1 = localB -> fqlqwbd5is [ 4 ] ; localB ->
lc3c33xvq2_idx_2 = localB -> fqlqwbd5is [ 5 ] ; localB -> fqlqwbd5is [ 0 ] =
fp0u5nlpgw -> HALSensors . HAL_acc_SI . x - localB -> hhgts5cvdm_idx_2 ;
localB -> fqlqwbd5is [ 1 ] = fp0u5nlpgw -> HALSensors . HAL_acc_SI . y -
localB -> bsng3p25ac_idx_1 ; localB -> fqlqwbd5is [ 2 ] = fp0u5nlpgw ->
HALSensors . HAL_acc_SI . z - localB -> pln304gd5j_dapv3jlyq5 ; localB ->
fqlqwbd5is [ 3 ] = fp0u5nlpgw -> HALSensors . HAL_gyro_SI . x - localB ->
ilrv1eq3wt_ezqlmfzvpq ; localB -> fqlqwbd5is [ 4 ] = fp0u5nlpgw -> HALSensors
. HAL_gyro_SI . y - localB -> lc3c33xvq2_idx_1 ; localB -> fqlqwbd5is [ 5 ] =
fp0u5nlpgw -> HALSensors . HAL_gyro_SI . z - localB -> lc3c33xvq2_idx_2 ; for
( localB -> i = 0 ; localB -> i < 6 ; localB -> i ++ ) { localB -> fqlqwbd5is
[ localB -> i ] *= localP -> P_111 [ localB -> i ] ; } localB ->
bsng3p25ac_idx_1 = localB -> fqlqwbd5is [ 0 ] * localP -> P_113 [ 0 ] ;
localB -> cff = 1 ; localB -> i = localDW -> bbkjtf4kuy ; while ( localB -> i
< 5 ) { localB -> bsng3p25ac_idx_1 += localDW -> d4fp3a2mpz [ localB -> i ] *
localP -> P_113 [ localB -> cff ] ; localB -> cff ++ ; localB -> i ++ ; }
localB -> i = 0 ; while ( localB -> i < localDW -> bbkjtf4kuy ) { localB ->
bsng3p25ac_idx_1 += localDW -> d4fp3a2mpz [ localB -> i ] * localP -> P_113 [
localB -> cff ] ; localB -> cff ++ ; localB -> i ++ ; } localB ->
leirljwdz1_merlcviukg [ 0 ] = localB -> bsng3p25ac_idx_1 ; localB ->
bsng3p25ac_idx_1 = localP -> P_113 [ 0 ] * localB -> fqlqwbd5is [ 1 ] ;
localB -> cff = 1 ; localB -> i = localDW -> bbkjtf4kuy ; while ( localB -> i
< 5 ) { localB -> bsng3p25ac_idx_1 += localDW -> d4fp3a2mpz [ localB -> i + 5
] * localP -> P_113 [ localB -> cff ] ; localB -> cff ++ ; localB -> i ++ ; }
localB -> i = 0 ; while ( localB -> i < localDW -> bbkjtf4kuy ) { localB ->
bsng3p25ac_idx_1 += localDW -> d4fp3a2mpz [ localB -> i + 5 ] * localP ->
P_113 [ localB -> cff ] ; localB -> cff ++ ; localB -> i ++ ; } localB ->
leirljwdz1_merlcviukg [ 1 ] = localB -> bsng3p25ac_idx_1 ; localB ->
bsng3p25ac_idx_1 = localP -> P_113 [ 0 ] * localB -> fqlqwbd5is [ 2 ] ;
localB -> cff = 1 ; localB -> i = localDW -> bbkjtf4kuy ; while ( localB -> i
< 5 ) { localB -> bsng3p25ac_idx_1 += localDW -> d4fp3a2mpz [ localB -> i +
10 ] * localP -> P_113 [ localB -> cff ] ; localB -> cff ++ ; localB -> i ++
; } localB -> i = 0 ; while ( localB -> i < localDW -> bbkjtf4kuy ) { localB
-> bsng3p25ac_idx_1 += localDW -> d4fp3a2mpz [ localB -> i + 10 ] * localP ->
P_113 [ localB -> cff ] ; localB -> cff ++ ; localB -> i ++ ; } localB ->
leirljwdz1_merlcviukg [ 2 ] = localB -> bsng3p25ac_idx_1 ; localB ->
hhgts5cvdm_idx_2 = localP -> P_114 * localB -> leirljwdz1_merlcviukg [ 0 ] ;
if ( localB -> hhgts5cvdm_idx_2 > 1.0F ) { localB -> hhgts5cvdm_idx_2 = 1.0F
; } else if ( localB -> hhgts5cvdm_idx_2 < - 1.0F ) { localB ->
hhgts5cvdm_idx_2 = - 1.0F ; } localB -> gnmjshxnpv = muSingleScalarAsin (
localB -> hhgts5cvdm_idx_2 ) ; localB -> oehll4wgvd_oyypvi4boh = localB ->
gnmjshxnpv ; if ( localDW -> jd3dqtmo2p ) { localDW -> fl0vv44tbs [ 0 ] =
localB -> kkdshod4h5 [ 0 ] ; localDW -> fl0vv44tbs [ 1 ] = localB ->
kkdshod4h5 [ 1 ] ; } localB -> lzpya54qds_lxo5edjg3c [ 0 ] = localDW ->
fl0vv44tbs [ 0 ] ; localB -> lzpya54qds_lxo5edjg3c [ 1 ] = localDW ->
fl0vv44tbs [ 1 ] ; localB -> hhgts5cvdm_idx_2 = muSingleScalarFloor ( localP
-> P_187 ) ; if ( ( localB -> leirljwdz1_merlcviukg [ 0 ] < 0.0F ) && (
localP -> P_187 > localB -> hhgts5cvdm_idx_2 ) ) { localB ->
ai5dxuta3d_nz4o0shxby [ 0 ] = - muSingleScalarPower ( - localB ->
leirljwdz1_merlcviukg [ 0 ] , localP -> P_187 ) ; } else { localB ->
ai5dxuta3d_nz4o0shxby [ 0 ] = muSingleScalarPower ( localB ->
leirljwdz1_merlcviukg [ 0 ] , localP -> P_187 ) ; } if ( ( localB ->
leirljwdz1_merlcviukg [ 1 ] < 0.0F ) && ( localP -> P_187 > localB ->
hhgts5cvdm_idx_2 ) ) { localB -> ai5dxuta3d_nz4o0shxby [ 1 ] = -
muSingleScalarPower ( - localB -> leirljwdz1_merlcviukg [ 1 ] , localP ->
P_187 ) ; } else { localB -> ai5dxuta3d_nz4o0shxby [ 1 ] =
muSingleScalarPower ( localB -> leirljwdz1_merlcviukg [ 1 ] , localP -> P_187
) ; } if ( ( localB -> bsng3p25ac_idx_1 < 0.0F ) && ( localP -> P_187 >
localB -> hhgts5cvdm_idx_2 ) ) { localB -> ai5dxuta3d_nz4o0shxby [ 2 ] = -
muSingleScalarPower ( - localB -> bsng3p25ac_idx_1 , localP -> P_187 ) ; }
else { localB -> ai5dxuta3d_nz4o0shxby [ 2 ] = muSingleScalarPower ( localB
-> bsng3p25ac_idx_1 , localP -> P_187 ) ; } localB -> pln304gd5j_dapv3jlyq5 =
muSingleScalarSqrt ( ( localB -> ai5dxuta3d_nz4o0shxby [ 0 ] + localB ->
ai5dxuta3d_nz4o0shxby [ 1 ] ) + localB -> ai5dxuta3d_nz4o0shxby [ 2 ] ) ;
localB -> ndnrca1ph5 = ( int16_T ) ( ( localB -> pln304gd5j_dapv3jlyq5 >
localP -> P_30 ) && ( localB -> pln304gd5j_dapv3jlyq5 < localP -> P_31 ) ) ;
localB -> n4hjyaug4z_ax3wx1gs5w = ( localB -> ndnrca1ph5 != 0 ) ; localB ->
ktdizr245u_ojunzewo4f = ( localB -> ndnrca1ph5 != 0 ) ; ifzbhw4mrw (
accn4cnket , localB -> ktdizr245u_ojunzewo4f , localB -> g0omvaowkd , localP
-> P_166 , localB -> oehll4wgvd_oyypvi4boh , localB -> lzpya54qds_lxo5edjg3c
, & localB -> ifzbhw4mrws , & localDW -> ifzbhw4mrws , & localP ->
ifzbhw4mrws ) ; localB -> pxonda0hgb_ldqodwenvz [ 0 ] = localB -> ifzbhw4mrws
. higb232ks1 [ 0 ] + localB -> lzpya54qds_lxo5edjg3c [ 0 ] ; localB ->
pxonda0hgb_ldqodwenvz [ 1 ] = localB -> ifzbhw4mrws . higb232ks1 [ 1 ] +
localB -> lzpya54qds_lxo5edjg3c [ 1 ] ; localB -> ja34uxmhnw =
muSingleScalarAtan ( localB -> leirljwdz1_merlcviukg [ 1 ] / localB ->
bsng3p25ac_idx_1 ) ; localB -> bodf4gi0av_nvsvtgkap4 = localB -> ja34uxmhnw ;
if ( localDW -> f1jy25gy04 ) { localDW -> as5a0ikbk1 [ 0 ] = localB ->
fchjjv4ub4 [ 0 ] ; localDW -> as5a0ikbk1 [ 1 ] = localB -> fchjjv4ub4 [ 1 ] ;
} localB -> ivkfv1y5m1_owjr1h1vqy [ 0 ] = localDW -> as5a0ikbk1 [ 0 ] ;
localB -> ivkfv1y5m1_owjr1h1vqy [ 1 ] = localDW -> as5a0ikbk1 [ 1 ] ; localB
-> da04unwzo4_as0qznsxlv = ( localB -> ndnrca1ph5 != 0 ) ; localB ->
jk2y40vph2_o2tow3gxzm = ( localB -> ndnrca1ph5 != 0 ) ; ifzbhw4mrw (
accn4cnket , localB -> jk2y40vph2_o2tow3gxzm , localB -> dts03pec5w , localP
-> P_177 , localB -> bodf4gi0av_nvsvtgkap4 , localB -> ivkfv1y5m1_owjr1h1vqy
, & localB -> ipbtas1tys , & localDW -> ipbtas1tys , & localP -> ipbtas1tys )
; localB -> ai5dxuta3d_nz4o0shxby [ 0 ] = localB -> mysvteaea1_bnlywzniup ;
localB -> ai5dxuta3d_nz4o0shxby [ 1 ] = localB -> pxonda0hgb_ldqodwenvz [ 0 ]
; localB -> ai5dxuta3d_nz4o0shxby [ 2 ] = localB -> ipbtas1tys . higb232ks1 [
0 ] + localB -> ivkfv1y5m1_owjr1h1vqy [ 0 ] ; localB -> mjnlaghkab_jacdjrqyev
= localDW -> l3lcputuyl ; if ( localB -> mjnlaghkab_jacdjrqyev < localP ->
P_50 ) { localB -> mysvteaea1_bnlywzniup = fp0u5nlpgw -> VisionSensors .
opticalFlow_data [ 0 ] ; localB -> pln304gd5j_dapv3jlyq5 = fp0u5nlpgw ->
VisionSensors . opticalFlow_data [ 1 ] ; } else { localB ->
pln304gd5j_dapv3jlyq5 = localP -> P_99 * localB -> cwkr5nfnsr_hv2ho1zopz ;
localB -> mysvteaea1_bnlywzniup = fp0u5nlpgw -> VisionSensors .
opticalFlow_data [ 0 ] * localB -> pln304gd5j_dapv3jlyq5 * localP -> P_100 ;
localB -> pln304gd5j_dapv3jlyq5 = fp0u5nlpgw -> VisionSensors .
opticalFlow_data [ 1 ] * localB -> pln304gd5j_dapv3jlyq5 * localP -> P_100 ;
} localB -> ilrv1eq3wt_ezqlmfzvpq = muSingleScalarAbs ( localB ->
cwkr5nfnsr_hv2ho1zopz ) ; localDW -> b1nmhkw4zo = ( localB -> fqlqwbd5is [ 3
] - localP -> P_116 [ 1 ] * localDW -> ncgo1wegzg ) / localP -> P_116 [ 0 ] ;
localB -> h2w3fyzeix = localP -> P_115 [ 0 ] * localDW -> b1nmhkw4zo + localP
-> P_115 [ 1 ] * localDW -> ncgo1wegzg ; localDW -> n0mydijbcx = ( localB ->
fqlqwbd5is [ 4 ] - localP -> P_119 [ 1 ] * localDW -> mirtkskmtr ) / localP
-> P_119 [ 0 ] ; localB -> dc3qn403cz = localP -> P_118 [ 0 ] * localDW ->
n0mydijbcx + localP -> P_118 [ 1 ] * localDW -> mirtkskmtr ; localDW ->
iwg03owvar = localB -> fqlqwbd5is [ 5 ] ; for ( localB -> i = 0 ; localB -> i
< 5 ; localB -> i ++ ) { localDW -> iwg03owvar -= localP -> P_122 [ localB ->
i + 1 ] * localDW -> jduomia1pb [ localB -> i ] ; } localDW -> iwg03owvar /=
localP -> P_122 [ 0 ] ; localB -> lc3c33xvq2_idx_1 = localP -> P_121 [ 0 ] *
localDW -> iwg03owvar ; for ( localB -> i = 0 ; localB -> i < 5 ; localB -> i
++ ) { localB -> lc3c33xvq2_idx_1 += localP -> P_121 [ localB -> i + 1 ] *
localDW -> jduomia1pb [ localB -> i ] ; } localB -> j1jkeoiq0d_mdoasc5av4 =
localDW -> pjgu33zeph ; localB -> ca5lhwbyek_ifotjnizh4 = ( localB ->
j1jkeoiq0d_mdoasc5av4 == localP -> P_49 ) ; if ( ( ( localZCE -> b1rw3rggh2
== POS_ZCSIG ) != ( int32_T ) localB -> ca5lhwbyek_ifotjnizh4 ) && ( localZCE
-> b1rw3rggh2 != UNINITIALIZED_ZCSIG ) ) { localB -> muuoe5y0sn = fp0u5nlpgw
-> HALSensors . HAL_gyro_SI . temperature ; localDW -> a1oodzfxvv = 4 ; }
localZCE -> b1rw3rggh2 = localB -> ca5lhwbyek_ifotjnizh4 ; if ( localP ->
P_224 == 1 ) { localB -> d1sdpoe5zq_jwzvbuczlb = ( fp0u5nlpgw -> HALSensors .
HAL_gyro_SI . temperature - localB -> muuoe5y0sn ) * localP -> P_95 ; } else
{ localB -> d1sdpoe5zq_jwzvbuczlb = localP -> P_86 ; } localB -> blgzljheti =
localB -> lc3c33xvq2_idx_1 - ( real32_T ) localB -> d1sdpoe5zq_jwzvbuczlb ;
localB -> je3oqwzoez_idx_0 = localB -> h2w3fyzeix - ( localB -> ipbtas1tys .
higb232ks1 [ 1 ] + localB -> ivkfv1y5m1_owjr1h1vqy [ 1 ] ) ; localB ->
je3oqwzoez_idx_1 = localB -> dc3qn403cz - localB -> pxonda0hgb_ldqodwenvz [ 1
] ; localB -> je3oqwzoez_idx_2 = localB -> blgzljheti - localP -> P_186 ;
localB -> oa13vjflhr [ 0 ] = localB -> ilrv1eq3wt_ezqlmfzvpq * localB ->
je3oqwzoez_idx_1 * localP -> P_124 + localB -> mysvteaea1_bnlywzniup ; localB
-> oa13vjflhr [ 1 ] = localB -> ilrv1eq3wt_ezqlmfzvpq * localB ->
je3oqwzoez_idx_0 + localB -> pln304gd5j_dapv3jlyq5 ; localB ->
pxonda0hgb_ldqodwenvz [ 0 ] = localB -> oa13vjflhr [ 0 ] ; localB ->
pxonda0hgb_ldqodwenvz [ 1 ] = localB -> oa13vjflhr [ 1 ] ; if ( localDW ->
gdn4qfzvsk ) { localDW -> od5c00niot [ 0 ] = localB -> d2r1shdz5z [ 0 ] ;
localDW -> od5c00niot [ 1 ] = localB -> d2r1shdz5z [ 1 ] ; localDW ->
od5c00niot [ 2 ] = localB -> d2r1shdz5z [ 2 ] ; localDW -> od5c00niot [ 3 ] =
localB -> d2r1shdz5z [ 3 ] ; } localB -> ozh1synzu3_cv5hdgrwft [ 0 ] =
localDW -> od5c00niot [ 0 ] ; localB -> ozh1synzu3_cv5hdgrwft [ 1 ] = localDW
-> od5c00niot [ 1 ] ; localB -> ozh1synzu3_cv5hdgrwft [ 2 ] = localDW ->
od5c00niot [ 2 ] ; localB -> ozh1synzu3_cv5hdgrwft [ 3 ] = localDW ->
od5c00niot [ 3 ] ; localB -> fczu5pq2ol_dhamdvybc1 [ 0 ] = localB ->
h2w3fyzeix ; localB -> fczu5pq2ol_dhamdvybc1 [ 1 ] = localB -> dc3qn403cz ;
for ( localB -> cff = 0 ; localB -> cff < 2 ; localB -> cff ++ ) { localB ->
memOffset = localB -> cff * 5 ; localB -> hhgts5cvdm_idx_2 = localB ->
fczu5pq2ol_dhamdvybc1 [ localB -> cff ] ; for ( localB -> i = 0 ; localB -> i
< 5 ; localB -> i ++ ) { localB -> hhgts5cvdm_idx_2 -= localP -> P_126 [
localB -> i + 1 ] * localDW -> dqfv1m130o [ localB -> memOffset + localB -> i
] ; } localB -> hhgts5cvdm_idx_2 /= localP -> P_126 [ 0 ] ; localDW ->
mf2pp40f5v [ localB -> cff ] = localB -> hhgts5cvdm_idx_2 ; localB ->
lc3c33xvq2_idx_1 = localP -> P_125 [ 0 ] * localB -> hhgts5cvdm_idx_2 ; for (
localB -> i = 0 ; localB -> i < 5 ; localB -> i ++ ) { localB ->
lc3c33xvq2_idx_1 += localP -> P_125 [ localB -> i + 1 ] * localDW ->
dqfv1m130o [ localB -> memOffset + localB -> i ] ; } localB -> gzpfxw0cb0 [
localB -> cff ] = localB -> lc3c33xvq2_idx_1 * localP -> P_128 ; } localB ->
a11u0nevmi_lnjdk5wtww [ 0 ] = localDW -> meognsjf1t [ 0 ] ; localB ->
a11u0nevmi_lnjdk5wtww [ 1 ] = localDW -> meognsjf1t [ 1 ] ; localB ->
n3ascxko3i_bsqwvugooi [ 0 ] = localB -> gzpfxw0cb0 [ 0 ] - localB ->
a11u0nevmi_lnjdk5wtww [ 0 ] ; localB -> n3ascxko3i_bsqwvugooi [ 1 ] = localB
-> gzpfxw0cb0 [ 1 ] - localB -> a11u0nevmi_lnjdk5wtww [ 1 ] ; localB ->
ilrv1eq3wt_ezqlmfzvpq = muSingleScalarAbs ( localB -> h2w3fyzeix ) ; localB
-> lc3c33xvq2_idx_1 = muSingleScalarAbs ( localB -> dc3qn403cz ) ; localB ->
ahyw5cm0rj = ( ( ( ( muSingleScalarAbs ( localB -> ai5dxuta3d_nz4o0shxby [ 1
] ) <= localP -> P_37 ) && ( muSingleScalarAbs ( localB ->
ai5dxuta3d_nz4o0shxby [ 2 ] ) <= localP -> P_39 ) && ( localB ->
ilrv1eq3wt_ezqlmfzvpq <= localP -> P_41 ) && ( localB -> lc3c33xvq2_idx_1 <=
localP -> P_42 ) && ( muSingleScalarAbs ( localB -> n3ascxko3i_bsqwvugooi [ 0
] ) <= localP -> P_35 ) && ( muSingleScalarAbs ( localB ->
n3ascxko3i_bsqwvugooi [ 1 ] ) <= localP -> P_36 ) ) || ( ( localB ->
ilrv1eq3wt_ezqlmfzvpq <= localP -> P_38 ) && ( localB -> lc3c33xvq2_idx_1 <=
localP -> P_40 ) ) ) && ( muSingleScalarAbs ( localB -> mysvteaea1_bnlywzniup
- localDW -> gcgpru4rcb [ 0 ] ) <= localP -> P_43 ) && ( muSingleScalarAbs (
localB -> pln304gd5j_dapv3jlyq5 - localDW -> gcgpru4rcb [ 1 ] ) <= localP ->
P_44 ) && ( localB -> cwkr5nfnsr_hv2ho1zopz <= localP -> P_45 ) ) ; localB ->
ca5lhwbyek_ifotjnizh4 = localB -> ahyw5cm0rj ; localB ->
hvzpu5ojd3_ipgns4eet5 = localB -> ahyw5cm0rj ; if ( localB ->
hvzpu5ojd3_ipgns4eet5 ) { if ( ! localDW -> cqi2pi21ow ) { if (
rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> cqi2pi21ow = true ; } localB -> ilrv1eq3wt_ezqlmfzvpq = localB ->
ozh1synzu3_cv5hdgrwft [ 1 ] ; localB -> lc3c33xvq2_idx_1 = localB ->
ozh1synzu3_cv5hdgrwft [ 0 ] ; localB -> lc3c33xvq2_idx_2 = localB ->
ozh1synzu3_cv5hdgrwft [ 2 ] ; localB -> hhgts5cvdm_idx_2 = localB ->
ozh1synzu3_cv5hdgrwft [ 3 ] ; for ( localB -> i = 0 ; localB -> i < 2 ;
localB -> i ++ ) { localB -> nsrhsdvi0b_dypejvacrn [ localB -> i ] = localB
-> pxonda0hgb_ldqodwenvz [ localB -> i ] - ( ( ( localP -> P_190 [ localB ->
i + 2 ] * localB -> ilrv1eq3wt_ezqlmfzvpq + localP -> P_190 [ localB -> i ] *
localB -> lc3c33xvq2_idx_1 ) + localP -> P_190 [ localB -> i + 4 ] * localB
-> lc3c33xvq2_idx_2 ) + localP -> P_190 [ localB -> i + 6 ] * localB ->
hhgts5cvdm_idx_2 ) ; } localB -> ilrv1eq3wt_ezqlmfzvpq = localB ->
nsrhsdvi0b_dypejvacrn [ 1 ] ; localB -> lc3c33xvq2_idx_1 = localB ->
nsrhsdvi0b_dypejvacrn [ 0 ] ; for ( localB -> i = 0 ; localB -> i <= 0 ;
localB -> i += 4 ) { tmp_m = _mm_loadu_ps ( & localB -> blc1o30hbu [ localB
-> i + 4 ] ) ; tmp_g = _mm_loadu_ps ( & localB -> blc1o30hbu [ localB -> i ]
) ; _mm_storeu_ps ( & localB -> bev5geht2k [ localB -> i ] , _mm_add_ps (
_mm_mul_ps ( tmp_m , _mm_set1_ps ( localB -> ilrv1eq3wt_ezqlmfzvpq ) ) ,
_mm_mul_ps ( tmp_g , _mm_set1_ps ( localB -> lc3c33xvq2_idx_1 ) ) ) ) ; }
srUpdateBC ( localDW -> klyrn0mwhb ) ; } else if ( localDW -> cqi2pi21ow ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
localB -> bev5geht2k [ 0 ] = localP -> P_98 ; localB -> bev5geht2k [ 1 ] =
localP -> P_98 ; localB -> bev5geht2k [ 2 ] = localP -> P_98 ; localB ->
bev5geht2k [ 3 ] = localP -> P_98 ; localDW -> cqi2pi21ow = false ; } localB
-> awk13lcnc4 [ 0 ] = localB -> bev5geht2k [ 0 ] + localB ->
ozh1synzu3_cv5hdgrwft [ 0 ] ; localB -> awk13lcnc4 [ 1 ] = localB ->
bev5geht2k [ 1 ] + localB -> ozh1synzu3_cv5hdgrwft [ 1 ] ; localB ->
awk13lcnc4 [ 2 ] = localB -> bev5geht2k [ 2 ] + localB ->
ozh1synzu3_cv5hdgrwft [ 2 ] ; localB -> awk13lcnc4 [ 3 ] = localB ->
bev5geht2k [ 3 ] + localB -> ozh1synzu3_cv5hdgrwft [ 3 ] ;
muSingleScalarSinCos ( localB -> ai5dxuta3d_nz4o0shxby [ 0 ] , & localB ->
hhgts5cvdm_idx_0 , & localB -> ilrv1eq3wt_ezqlmfzvpq ) ; muSingleScalarSinCos
( localB -> ai5dxuta3d_nz4o0shxby [ 1 ] , & localB -> hhgts5cvdm_idx_1 , &
localB -> lc3c33xvq2_idx_1 ) ; muSingleScalarSinCos ( localB ->
ai5dxuta3d_nz4o0shxby [ 2 ] , & localB -> hhgts5cvdm_idx_2 , & localB ->
lc3c33xvq2_idx_2 ) ; localB -> gnjka4005e_tmp_jz50ptvnrg = localB ->
ilrv1eq3wt_ezqlmfzvpq * localB -> lc3c33xvq2_idx_1 ; localB ->
gnjka4005e_kkiq3xxxve [ 0 ] = localB -> gnjka4005e_tmp_jz50ptvnrg ; localB ->
gnjka4005e_tmp = localB -> hhgts5cvdm_idx_1 * localB -> hhgts5cvdm_idx_2 ;
localB -> gnjka4005e_tmp_o4f35lbcvx = localB -> gnjka4005e_tmp * localB ->
ilrv1eq3wt_ezqlmfzvpq - localB -> hhgts5cvdm_idx_0 * localB ->
lc3c33xvq2_idx_2 ; localB -> gnjka4005e_kkiq3xxxve [ 1 ] = localB ->
gnjka4005e_tmp_o4f35lbcvx ; localB -> gnjka4005e_tmp_ju13rw2h0m = localB ->
hhgts5cvdm_idx_1 * localB -> lc3c33xvq2_idx_2 ; localB ->
gnjka4005e_tmp_nyxm0bsxsn = localB -> gnjka4005e_tmp_ju13rw2h0m * localB ->
ilrv1eq3wt_ezqlmfzvpq + localB -> hhgts5cvdm_idx_0 * localB ->
hhgts5cvdm_idx_2 ; localB -> gnjka4005e_kkiq3xxxve [ 2 ] = localB ->
gnjka4005e_tmp_nyxm0bsxsn ; localB -> gnjka4005e_tmp_icdfyazkhu = localB ->
hhgts5cvdm_idx_0 * localB -> lc3c33xvq2_idx_1 ; localB ->
gnjka4005e_kkiq3xxxve [ 3 ] = localB -> gnjka4005e_tmp_icdfyazkhu ; localB ->
gnjka4005e_tmp = localB -> gnjka4005e_tmp * localB -> hhgts5cvdm_idx_0 +
localB -> ilrv1eq3wt_ezqlmfzvpq * localB -> lc3c33xvq2_idx_2 ; localB ->
gnjka4005e_kkiq3xxxve [ 4 ] = localB -> gnjka4005e_tmp ; localB ->
gnjka4005e_tmp_ju13rw2h0m = localB -> gnjka4005e_tmp_ju13rw2h0m * localB ->
hhgts5cvdm_idx_0 - localB -> ilrv1eq3wt_ezqlmfzvpq * localB ->
hhgts5cvdm_idx_2 ; localB -> gnjka4005e_kkiq3xxxve [ 5 ] = localB ->
gnjka4005e_tmp_ju13rw2h0m ; localB -> gnjka4005e_kkiq3xxxve [ 6 ] = - localB
-> hhgts5cvdm_idx_1 ; localB -> ilrv1eq3wt_ezqlmfzvpq = localB ->
lc3c33xvq2_idx_1 * localB -> hhgts5cvdm_idx_2 ; localB ->
gnjka4005e_kkiq3xxxve [ 7 ] = localB -> ilrv1eq3wt_ezqlmfzvpq ; localB ->
lc3c33xvq2_idx_1 *= localB -> lc3c33xvq2_idx_2 ; localB ->
gnjka4005e_kkiq3xxxve [ 8 ] = localB -> lc3c33xvq2_idx_1 ; localB ->
d1sdpoe5zq_jwzvbuczlb = localDW -> peklmaellz [ 0 ] ; localB ->
e2jse4qsm2_idx_1 = localDW -> peklmaellz [ 1 ] ; localB ->
hb323v315k_dhmrxtyqop = localB -> ctkxulxqbp [ 1 ] ; localB -> unnamed_idx_2
= localB -> ctkxulxqbp [ 1 ] ; for ( localB -> i = 0 ; localB -> i < 3 ;
localB -> i ++ ) { localB -> gnjka4005e_al00mdgrv4 = localB ->
gnjka4005e_kkiq3xxxve [ localB -> i + 6 ] ; localB -> j13avt3ya4_tmp = localB
-> gnjka4005e_kkiq3xxxve [ localB -> i + 3 ] * localB -> e2jse4qsm2_idx_1 +
localB -> gnjka4005e_kkiq3xxxve [ localB -> i ] * localB ->
d1sdpoe5zq_jwzvbuczlb ; localB -> j13avt3ya4_bhxxfovxdy [ localB -> i ] =
localB -> gnjka4005e_al00mdgrv4 * localB -> hb323v315k_dhmrxtyqop + localB ->
j13avt3ya4_tmp ; localB -> gnjka4005e_pbm3vprmfu [ localB -> i ] = localB ->
gnjka4005e_al00mdgrv4 * localB -> unnamed_idx_2 + localB -> j13avt3ya4_tmp ;
} localB -> lc3c33xvq2_idx_2 = ( real32_T ) localB -> gnjka4005e_pbm3vprmfu [
2 ] ; localB -> edzg5ojurz_cl54gopm0x [ 0 ] = localB -> hx2cmwv4pr_guugdwf2m3
[ 0 ] ; localB -> edzg5ojurz_cl54gopm0x [ 1 ] = localB ->
hx2cmwv4pr_guugdwf2m3 [ 1 ] ; localB -> edzg5ojurz_cl54gopm0x [ 2 ] = localB
-> cwkr5nfnsr_hv2ho1zopz ; localB -> edzg5ojurz_cl54gopm0x [ 3 ] = localB ->
ai5dxuta3d_nz4o0shxby [ 0 ] ; localB -> edzg5ojurz_cl54gopm0x [ 4 ] = localB
-> ai5dxuta3d_nz4o0shxby [ 1 ] ; localB -> edzg5ojurz_cl54gopm0x [ 5 ] =
localB -> ai5dxuta3d_nz4o0shxby [ 2 ] ; localB -> edzg5ojurz_cl54gopm0x [ 6 ]
= localB -> awk13lcnc4 [ 0 ] ; localB -> edzg5ojurz_cl54gopm0x [ 7 ] = localB
-> awk13lcnc4 [ 1 ] ; localB -> edzg5ojurz_cl54gopm0x [ 8 ] = ( real32_T )
localB -> j13avt3ya4_bhxxfovxdy [ 2 ] ; localB -> edzg5ojurz_cl54gopm0x [ 9 ]
= localB -> je3oqwzoez_idx_0 ; localB -> edzg5ojurz_cl54gopm0x [ 10 ] =
localB -> je3oqwzoez_idx_1 ; localB -> edzg5ojurz_cl54gopm0x [ 11 ] = localB
-> je3oqwzoez_idx_2 ; { if ( tid == 0 ) { if ( localDW -> puq03cpvbg .
AQHandles && ssGetLogOutput ( accn4cnket -> _mdlRefSfcnS ) ) { sdiWriteSignal
( localDW -> puq03cpvbg . AQHandles , rtmGetTaskTime ( accn4cnket , 0 ) , (
char * ) & localB -> edzg5ojurz_cl54gopm0x [ 0 ] + 0 ) ; } } } localB ->
kem2atjgpd_pxqvlbal2i = localDW -> gaxgdudnvc ; localB -> ckblav2twl = (
localB -> kem2atjgpd_pxqvlbal2i < localP -> P_52 ) ; localB ->
iqe035hsoy_p5h3gwuwqg = ( uint16_T ) ( localB -> kem2atjgpd_pxqvlbal2i +
localP -> P_209 ) ; if ( localB -> iqe035hsoy_p5h3gwuwqg > localP -> P_51 ) {
localB -> mxir0xx3l1 = localP -> P_210 ; } else { localB -> mxir0xx3l1 =
localB -> iqe035hsoy_p5h3gwuwqg ; } if ( ( ! localB -> ckblav2twl ) && (
localDW -> fpr1qi0oiw == 1 ) ) { localDW -> bsetqjfri4 = localP -> P_132 ; }
if ( localDW -> ibnsbzvyrn == 0U ) { localDW -> ibnsbzvyrn = 1U ; localDW ->
jv32slkoka = oj1ibndfoh ; localB -> bqcvsssbyu = - 1.1F ; localDW ->
c4slvrb3tr = 0.0F ; } else { guard1 = false ; switch ( localDW -> jv32slkoka
) { case hutwe2lsfa : if ( ! kw1kgjtfj2 ) { localB -> hhgts5cvdm_idx_2 =
muSingleScalarAbs ( kio5ncohny ) ; if ( ( localB -> hhgts5cvdm_idx_2 > 1.5F )
&& ( localB -> hhgts5cvdm_idx_2 < 1.65 ) && nfqd2uxnr0 ) { localDW ->
jv32slkoka = i5bi0qgnvh ; localDW -> c4slvrb3tr = 0.0F ; localB ->
gnjka4005e_al00mdgrv4 = muSingleScalarSin ( localB -> ai5dxuta3d_nz4o0shxby [
0 ] ) ; localB -> hhgts5cvdm_idx_0 = muSingleScalarCos ( localB ->
ai5dxuta3d_nz4o0shxby [ 0 ] ) ; localB -> jikbjddfc3 = ( 0.5F * localB ->
gnjka4005e_al00mdgrv4 + localB -> hx2cmwv4pr_guugdwf2m3 [ 1 ] ) + localDW ->
c4slvrb3tr * localB -> hhgts5cvdm_idx_0 ; localB -> pgfs04fsei = ( 0.5F *
localB -> hhgts5cvdm_idx_0 + localB -> hx2cmwv4pr_guugdwf2m3 [ 0 ] ) -
localDW -> c4slvrb3tr * localB -> gnjka4005e_al00mdgrv4 ; } else { guard1 =
true ; } } else { guard1 = true ; } break ; case ivtwmn4hvv : localB ->
bqcvsssbyu = 0.0F ; break ; case oj1ibndfoh : localB -> bqcvsssbyu = - 1.1F ;
if ( localB -> cwkr5nfnsr_hv2ho1zopz < - 1.0F ) { if ( ! bgilitfgis ) {
localDW -> jv32slkoka = cviu4wqjit ; if ( jb3o2smbxo ) { localDW ->
oypkwoqg1d = - 1.0 ; } else { localDW -> oypkwoqg1d = 1.0 ; } if ( gzviwcrhrs
) { localB -> hqabpva4ig = ( real32_T ) ( 0.01 * localDW -> oypkwoqg1d ) +
localB -> ai5dxuta3d_nz4o0shxby [ 0 ] ; } else { localB -> hqabpva4ig = (
real32_T ) ( 0.015 * localDW -> oypkwoqg1d ) + localB ->
ai5dxuta3d_nz4o0shxby [ 0 ] ; } } else { localDW -> jv32slkoka = hutwe2lsfa ;
localB -> hhgts5cvdm_idx_2 = ( real32_T ) ( ( ( real_T ) melqzsunve * 0.2 +
0.1 ) + ( real_T ) nngxyygivx * 0.1 ) ; localB -> gnjka4005e_al00mdgrv4 =
muSingleScalarSin ( localB -> ai5dxuta3d_nz4o0shxby [ 0 ] ) ; localB ->
hhgts5cvdm_idx_0 = muSingleScalarCos ( localB -> ai5dxuta3d_nz4o0shxby [ 0 ]
) ; localB -> jikbjddfc3 = ( localB -> hhgts5cvdm_idx_2 * localB ->
gnjka4005e_al00mdgrv4 + localB -> hx2cmwv4pr_guugdwf2m3 [ 1 ] ) + localDW ->
c4slvrb3tr * localB -> hhgts5cvdm_idx_0 ; localB -> pgfs04fsei = ( localB ->
hhgts5cvdm_idx_2 * localB -> hhgts5cvdm_idx_0 + localB ->
hx2cmwv4pr_guugdwf2m3 [ 0 ] ) - localDW -> c4slvrb3tr * localB ->
gnjka4005e_al00mdgrv4 ; } } else if ( ! nngxyygivx ) { localB -> hqabpva4ig =
localB -> ai5dxuta3d_nz4o0shxby [ 0 ] + 0.03F ; } break ; case cviu4wqjit :
if ( bgilitfgis ) { localB -> hqabpva4ig = localB -> ai5dxuta3d_nz4o0shxby [
0 ] ; localDW -> jv32slkoka = hutwe2lsfa ; localB -> hhgts5cvdm_idx_2 = (
real32_T ) ( ( ( real_T ) melqzsunve * 0.2 + 0.1 ) + ( real_T ) nngxyygivx *
0.1 ) ; localB -> gnjka4005e_al00mdgrv4 = muSingleScalarCos ( localB ->
ai5dxuta3d_nz4o0shxby [ 0 ] ) ; localB -> hhgts5cvdm_idx_0 =
muSingleScalarSin ( localB -> ai5dxuta3d_nz4o0shxby [ 0 ] ) ; localB ->
jikbjddfc3 = ( localB -> hhgts5cvdm_idx_2 * localB -> hhgts5cvdm_idx_0 +
localB -> hx2cmwv4pr_guugdwf2m3 [ 1 ] ) + localDW -> c4slvrb3tr * localB ->
gnjka4005e_al00mdgrv4 ; localB -> pgfs04fsei = ( localB -> hhgts5cvdm_idx_2 *
localB -> gnjka4005e_al00mdgrv4 + localB -> hx2cmwv4pr_guugdwf2m3 [ 0 ] ) -
localDW -> c4slvrb3tr * localB -> hhgts5cvdm_idx_0 ; } else if ( gzviwcrhrs )
{ localB -> hqabpva4ig = ( real32_T ) ( 0.015 * localDW -> oypkwoqg1d ) +
localB -> ai5dxuta3d_nz4o0shxby [ 0 ] ; } else { localB -> hqabpva4ig = (
real32_T ) ( 0.03 * localDW -> oypkwoqg1d ) + localB -> ai5dxuta3d_nz4o0shxby
[ 0 ] ; } break ; default : localB -> hhgts5cvdm_idx_2 = localB ->
hx2cmwv4pr_guugdwf2m3 [ 1 ] - localB -> jikbjddfc3 ; localB ->
gnjka4005e_al00mdgrv4 = localB -> hx2cmwv4pr_guugdwf2m3 [ 0 ] - localB ->
pgfs04fsei ; if ( localB -> hhgts5cvdm_idx_2 * localB -> hhgts5cvdm_idx_2 +
localB -> gnjka4005e_al00mdgrv4 * localB -> gnjka4005e_al00mdgrv4 < 0.02 ) {
localDW -> jv32slkoka = ivtwmn4hvv ; localB -> bqcvsssbyu = 0.0F ; } break ;
} if ( guard1 ) { if ( ! bgilitfgis ) { localDW -> jv32slkoka = cviu4wqjit ;
if ( jb3o2smbxo ) { localDW -> oypkwoqg1d = - 1.0 ; } else { localDW ->
oypkwoqg1d = 1.0 ; } if ( gzviwcrhrs ) { localB -> hqabpva4ig = ( real32_T )
( 0.01 * localDW -> oypkwoqg1d ) + localB -> ai5dxuta3d_nz4o0shxby [ 0 ] ; }
else { localB -> hqabpva4ig = ( real32_T ) ( 0.015 * localDW -> oypkwoqg1d )
+ localB -> ai5dxuta3d_nz4o0shxby [ 0 ] ; } } else { if ( ! melqzsunve ) {
localB -> hqabpva4ig = ( real32_T ) ( 0.01 * ( real_T ) a1uyjx15qi + 0.01 ) *
( real32_T ) ay1xsyaztb + localB -> ai5dxuta3d_nz4o0shxby [ 0 ] ; } localDW
-> c4slvrb3tr = ( real32_T ) ( 0.02 * ( real_T ) a1uyjx15qi + 0.005 ) * (
real32_T ) ay1xsyaztb ; localB -> hhgts5cvdm_idx_2 = ( real32_T ) ( ( (
real_T ) melqzsunve * 0.05 + 0.1 ) + ( real_T ) nngxyygivx * 0.1 ) ; localB
-> gnjka4005e_al00mdgrv4 = muSingleScalarCos ( localB ->
ai5dxuta3d_nz4o0shxby [ 0 ] ) ; localB -> hhgts5cvdm_idx_0 =
muSingleScalarSin ( localB -> ai5dxuta3d_nz4o0shxby [ 0 ] ) ; localB ->
jikbjddfc3 = ( localB -> hhgts5cvdm_idx_2 * localB -> hhgts5cvdm_idx_0 +
localB -> hx2cmwv4pr_guugdwf2m3 [ 1 ] ) + localDW -> c4slvrb3tr * localB ->
gnjka4005e_al00mdgrv4 ; localB -> pgfs04fsei = ( localB -> hhgts5cvdm_idx_2 *
localB -> gnjka4005e_al00mdgrv4 + localB -> hx2cmwv4pr_guugdwf2m3 [ 0 ] ) -
localDW -> c4slvrb3tr * localB -> hhgts5cvdm_idx_0 ; } } } localB ->
pe1upt24z4_bjvjhhzy4i = localB -> bqcvsssbyu - localB ->
cwkr5nfnsr_hv2ho1zopz ; localB -> jlabr4qxfo = localP -> P_135 * localB ->
pe1upt24z4_bjvjhhzy4i ; localB -> bffdy4oprb_tmp = muSingleScalarSin ( localB
-> ai5dxuta3d_nz4o0shxby [ 0 ] ) ; localB -> bffdy4oprb_tmp_fdinthrxmb =
muSingleScalarCos ( localB -> ai5dxuta3d_nz4o0shxby [ 0 ] ) ; localB ->
hhgts5cvdm_idx_0 = localB -> pgfs04fsei - localB -> hx2cmwv4pr_guugdwf2m3 [ 0
] ; localB -> hhgts5cvdm_idx_1 = localB -> jikbjddfc3 - localB ->
hx2cmwv4pr_guugdwf2m3 [ 1 ] ; localDW -> pwlp5beuqs [ 0U ] = 0.0F ; localB ->
hhgts5cvdm_idx_2 = ( localB -> bffdy4oprb_tmp_fdinthrxmb * localB ->
hhgts5cvdm_idx_0 + localB -> bffdy4oprb_tmp * localB -> hhgts5cvdm_idx_1 ) *
localP -> P_17 ; if ( localB -> hhgts5cvdm_idx_2 > localP -> P_21 ) { localB
-> hhgts5cvdm_idx_2 = localP -> P_21 ; } else if ( localB -> hhgts5cvdm_idx_2
< localP -> P_13 ) { localB -> hhgts5cvdm_idx_2 = localP -> P_13 ; } localB
-> gnjka4005e_al00mdgrv4 = localB -> hhgts5cvdm_idx_2 - localB -> awk13lcnc4
[ 0 ] ; localB -> nsrhsdvi0b_dypejvacrn [ 0 ] = localB ->
gnjka4005e_al00mdgrv4 ; localB -> ca22pxn2ik [ 0 ] = localP -> P_18 * localB
-> gnjka4005e_al00mdgrv4 + localDW -> dsjbzv2lh4 [ 0 ] ; if ( localB ->
ca22pxn2ik [ 0 ] > localP -> P_22 ) { localB -> hhgts5cvdm_idx_2 = localP ->
P_22 ; } else if ( localB -> ca22pxn2ik [ 0 ] < localP -> P_14 ) { localB ->
hhgts5cvdm_idx_2 = localP -> P_14 ; } else { localB -> hhgts5cvdm_idx_2 =
localB -> ca22pxn2ik [ 0 ] ; } localB -> hhgts5cvdm_idx_2 = ( localB ->
hhgts5cvdm_idx_2 - localDW -> gixvkpnpus [ 0 ] * localP -> P_141 [ 1 ] ) /
localP -> P_141 [ 0 ] ; localDW -> pwlp5beuqs [ 0 ] = localB ->
hhgts5cvdm_idx_2 ; localB -> nwqezykn5p_idx_0 = localP -> P_140 [ 0 ] *
localB -> hhgts5cvdm_idx_2 + localDW -> gixvkpnpus [ 0 ] * localP -> P_140 [
1 ] ; localB -> hhgts5cvdm_idx_2 = ( - localB -> bffdy4oprb_tmp * localB ->
hhgts5cvdm_idx_0 + localB -> bffdy4oprb_tmp_fdinthrxmb * localB ->
hhgts5cvdm_idx_1 ) * localP -> P_17 ; if ( localB -> hhgts5cvdm_idx_2 >
localP -> P_21 ) { localB -> hhgts5cvdm_idx_2 = localP -> P_21 ; } else if (
localB -> hhgts5cvdm_idx_2 < localP -> P_13 ) { localB -> hhgts5cvdm_idx_2 =
localP -> P_13 ; } localB -> gnjka4005e_al00mdgrv4 = localB ->
hhgts5cvdm_idx_2 - localB -> awk13lcnc4 [ 1 ] ; localB -> ca22pxn2ik [ 1 ] =
localP -> P_18 * localB -> gnjka4005e_al00mdgrv4 + localDW -> dsjbzv2lh4 [ 1
] ; if ( localB -> ca22pxn2ik [ 1 ] > localP -> P_22 ) { localB ->
hhgts5cvdm_idx_2 = localP -> P_22 ; } else if ( localB -> ca22pxn2ik [ 1 ] <
localP -> P_14 ) { localB -> hhgts5cvdm_idx_2 = localP -> P_14 ; } else {
localB -> hhgts5cvdm_idx_2 = localB -> ca22pxn2ik [ 1 ] ; } localB ->
hhgts5cvdm_idx_2 = ( localB -> hhgts5cvdm_idx_2 - localP -> P_141 [ 1 ] *
localDW -> gixvkpnpus [ 1 ] ) / localP -> P_141 [ 0 ] ; localDW -> pwlp5beuqs
[ 1 ] = localB -> hhgts5cvdm_idx_2 ; if ( localP -> P_215 ) { localB ->
nwqezykn5p_idx_0 *= localP -> P_94 [ 0 ] ; localB -> hhgts5cvdm_idx_2 = (
localP -> P_140 [ 0 ] * localB -> hhgts5cvdm_idx_2 + localP -> P_140 [ 1 ] *
localDW -> gixvkpnpus [ 1 ] ) * localP -> P_94 [ 1 ] ; } else { localB ->
nwqezykn5p_idx_0 = localB -> ai5dxuta3d_nz4o0shxby [ 1 ] ; localB ->
hhgts5cvdm_idx_2 = localB -> ai5dxuta3d_nz4o0shxby [ 2 ] ; } localB ->
nwqezykn5p_idx_0 = ( localB -> nwqezykn5p_idx_0 - localB ->
ai5dxuta3d_nz4o0shxby [ 1 ] ) * localP -> P_19 ; localB -> hhgts5cvdm_idx_2 =
( localB -> hhgts5cvdm_idx_2 - localB -> ai5dxuta3d_nz4o0shxby [ 2 ] ) *
localP -> P_19 ; localB -> fczu5pq2ol_dhamdvybc1 [ 0 ] = localB ->
nwqezykn5p_idx_0 - localB -> je3oqwzoez_idx_1 ; localB ->
fczu5pq2ol_dhamdvybc1 [ 1 ] = localB -> hhgts5cvdm_idx_2 - localB ->
je3oqwzoez_idx_0 ; localB -> je3oqwzoez_idx_0 = localB -> hqabpva4ig - localB
-> ai5dxuta3d_nz4o0shxby [ 0 ] ; if ( localB -> je3oqwzoez_idx_0 > localP ->
P_145 ) { localB -> je3oqwzoez_idx_0 = localP -> P_145 ; } else if ( localB
-> je3oqwzoez_idx_0 < localP -> P_146 ) { localB -> je3oqwzoez_idx_0 = localP
-> P_146 ; } localB -> eaw04hnn2p = localP -> P_151 * localB ->
je3oqwzoez_idx_0 ; if ( localB -> ckblav2twl ) { localB -> hhgts5cvdm_idx_2 =
localP -> P_91 * localP -> P_136 ; } else { localB -> hhgts5cvdm_idx_2 = (
localP -> P_92 * localB -> pe1upt24z4_bjvjhhzy4i + localDW -> bsetqjfri4 ) -
localP -> P_93 * ( real32_T ) localB -> j13avt3ya4_bhxxfovxdy [ 2 ] ; }
localB -> hhgts5cvdm_idx_2 += localP -> P_136 ; if ( localB ->
hhgts5cvdm_idx_2 > localP -> P_137 ) { localB -> hhgts5cvdm_idx_2 = localP ->
P_137 ; } else if ( localB -> hhgts5cvdm_idx_2 < localP -> P_138 ) { localB
-> hhgts5cvdm_idx_2 = localP -> P_138 ; } localB -> je3oqwzoez_idx_2 = (
localP -> P_147 * localB -> je3oqwzoez_idx_0 + localDW -> c4kiksmhh2 ) -
localP -> P_150 * localB -> je3oqwzoez_idx_2 ; localB -> je3oqwzoez_idx_1 = (
localP -> P_6 [ 0 ] * localB -> fczu5pq2ol_dhamdvybc1 [ 0 ] - localDW ->
krs1cvkxzk [ 0 ] ) * localP -> P_16 [ 0 ] ; localB -> mjj0hsvmxi [ 0 ] =
localB -> je3oqwzoez_idx_1 ; localB -> je3oqwzoez_idx_1 += localP -> P_20 [ 0
] * localB -> fczu5pq2ol_dhamdvybc1 [ 0 ] + localDW -> ow5xb5ovt0 [ 0 ] ; if
( localB -> je3oqwzoez_idx_1 > localP -> P_23 ) { localB -> hhgts5cvdm_idx_0
= localB -> je3oqwzoez_idx_1 - localP -> P_23 ; } else if ( localB ->
je3oqwzoez_idx_1 >= localP -> P_15 ) { localB -> hhgts5cvdm_idx_0 = 0.0F ; }
else { localB -> hhgts5cvdm_idx_0 = localB -> je3oqwzoez_idx_1 - localP ->
P_15 ; } localB -> hhgts5cvdm_idx_1 = localP -> P_7 [ 0 ] * localB ->
fczu5pq2ol_dhamdvybc1 [ 0 ] ; if ( localB -> hhgts5cvdm_idx_0 > localP ->
P_158 ) { localB -> i_afnsueciae = localP -> P_216 ; } else { localB ->
i_afnsueciae = localP -> P_217 ; } if ( localB -> hhgts5cvdm_idx_1 > localP
-> P_158 ) { localB -> i1 = localP -> P_218 ; } else { localB -> i1 = localP
-> P_219 ; } if ( ( localP -> P_158 != localB -> hhgts5cvdm_idx_0 ) && (
localB -> i_afnsueciae == localB -> i1 ) ) { localB -> hhgts5cvdm_idx_0 =
localP -> P_159 ; } else { localB -> hhgts5cvdm_idx_0 = localB ->
hhgts5cvdm_idx_1 ; } localB -> mxtb45j1vs [ 0 ] = localB -> hhgts5cvdm_idx_0
; if ( localB -> ca22pxn2ik [ 0 ] > localP -> P_22 ) { localB ->
hhgts5cvdm_idx_0 = localB -> ca22pxn2ik [ 0 ] - localP -> P_22 ; } else if (
localB -> ca22pxn2ik [ 0 ] >= localP -> P_14 ) { localB -> hhgts5cvdm_idx_0 =
0.0F ; } else { localB -> hhgts5cvdm_idx_0 = localB -> ca22pxn2ik [ 0 ] -
localP -> P_14 ; } localB -> hhgts5cvdm_idx_1 = localP -> P_8 * localB ->
nsrhsdvi0b_dypejvacrn [ 0 ] ; if ( localB -> hhgts5cvdm_idx_0 > localP ->
P_161 ) { localB -> i_afnsueciae = localP -> P_220 ; } else { localB ->
i_afnsueciae = localP -> P_221 ; } if ( localB -> hhgts5cvdm_idx_1 > localP
-> P_161 ) { localB -> i1 = localP -> P_222 ; } else { localB -> i1 = localP
-> P_223 ; } if ( ( localP -> P_161 != localB -> hhgts5cvdm_idx_0 ) && (
localB -> i_afnsueciae == localB -> i1 ) ) { localB -> hhgts5cvdm_idx_0 =
localP -> P_162 ; } else { localB -> hhgts5cvdm_idx_0 = localB ->
hhgts5cvdm_idx_1 ; } localB -> ca22pxn2ik [ 0 ] = localB -> hhgts5cvdm_idx_0
; if ( localB -> je3oqwzoez_idx_1 > localP -> P_23 ) { localB ->
je3oqwzoez_idx_0 = localP -> P_23 ; } else if ( localB -> je3oqwzoez_idx_1 <
localP -> P_15 ) { localB -> je3oqwzoez_idx_0 = localP -> P_15 ; } else {
localB -> je3oqwzoez_idx_0 = localB -> je3oqwzoez_idx_1 ; } localB ->
je3oqwzoez_idx_1 = ( localP -> P_6 [ 1 ] * localB -> fczu5pq2ol_dhamdvybc1 [
1 ] - localDW -> krs1cvkxzk [ 1 ] ) * localP -> P_16 [ 1 ] ; localB ->
mjj0hsvmxi [ 1 ] = localB -> je3oqwzoez_idx_1 ; localB -> je3oqwzoez_idx_1 +=
localP -> P_20 [ 1 ] * localB -> fczu5pq2ol_dhamdvybc1 [ 1 ] + localDW ->
ow5xb5ovt0 [ 1 ] ; if ( localB -> je3oqwzoez_idx_1 > localP -> P_23 ) {
localB -> hhgts5cvdm_idx_0 = localB -> je3oqwzoez_idx_1 - localP -> P_23 ; }
else if ( localB -> je3oqwzoez_idx_1 >= localP -> P_15 ) { localB ->
hhgts5cvdm_idx_0 = 0.0F ; } else { localB -> hhgts5cvdm_idx_0 = localB ->
je3oqwzoez_idx_1 - localP -> P_15 ; } localB -> hhgts5cvdm_idx_1 = localP ->
P_7 [ 1 ] * localB -> fczu5pq2ol_dhamdvybc1 [ 1 ] ; if ( localB ->
hhgts5cvdm_idx_0 > localP -> P_158 ) { localB -> i_afnsueciae = localP ->
P_216 ; } else { localB -> i_afnsueciae = localP -> P_217 ; } if ( localB ->
hhgts5cvdm_idx_1 > localP -> P_158 ) { localB -> i1 = localP -> P_218 ; }
else { localB -> i1 = localP -> P_219 ; } if ( ( localP -> P_158 != localB ->
hhgts5cvdm_idx_0 ) && ( localB -> i_afnsueciae == localB -> i1 ) ) { localB
-> hhgts5cvdm_idx_0 = localP -> P_159 ; } else { localB -> hhgts5cvdm_idx_0 =
localB -> hhgts5cvdm_idx_1 ; } localB -> mxtb45j1vs [ 1 ] = localB ->
hhgts5cvdm_idx_0 ; if ( localB -> ca22pxn2ik [ 1 ] > localP -> P_22 ) {
localB -> hhgts5cvdm_idx_0 = localB -> ca22pxn2ik [ 1 ] - localP -> P_22 ; }
else if ( localB -> ca22pxn2ik [ 1 ] >= localP -> P_14 ) { localB ->
hhgts5cvdm_idx_0 = 0.0F ; } else { localB -> hhgts5cvdm_idx_0 = localB ->
ca22pxn2ik [ 1 ] - localP -> P_14 ; } localB -> hhgts5cvdm_idx_1 = localP ->
P_8 * localB -> gnjka4005e_al00mdgrv4 ; if ( localB -> hhgts5cvdm_idx_0 >
localP -> P_161 ) { localB -> i_afnsueciae = localP -> P_220 ; } else {
localB -> i_afnsueciae = localP -> P_221 ; } if ( localB -> hhgts5cvdm_idx_1
> localP -> P_161 ) { localB -> i1 = localP -> P_222 ; } else { localB -> i1
= localP -> P_223 ; } if ( ( localP -> P_161 != localB -> hhgts5cvdm_idx_0 )
&& ( localB -> i_afnsueciae == localB -> i1 ) ) { localB -> hhgts5cvdm_idx_0
= localP -> P_162 ; } else { localB -> hhgts5cvdm_idx_0 = localB ->
hhgts5cvdm_idx_1 ; } localB -> ca22pxn2ik [ 1 ] = localB -> hhgts5cvdm_idx_0
; if ( localB -> je3oqwzoez_idx_1 > localP -> P_23 ) { localB ->
je3oqwzoez_idx_1 = localP -> P_23 ; } else if ( localB -> je3oqwzoez_idx_1 <
localP -> P_15 ) { localB -> je3oqwzoez_idx_1 = localP -> P_15 ; } for (
localB -> i = 0 ; localB -> i <= 0 ; localB -> i += 4 ) { tmp_m =
_mm_loadu_ps ( & localB -> c0hr2x2r2u [ localB -> i + 4 ] ) ; tmp_g =
_mm_loadu_ps ( & localB -> c0hr2x2r2u [ localB -> i ] ) ; tmp_e =
_mm_loadu_ps ( & localB -> c0hr2x2r2u [ localB -> i + 8 ] ) ; tmp_i =
_mm_loadu_ps ( & localB -> c0hr2x2r2u [ localB -> i + 12 ] ) ; _mm_storeu_ps
( & localB -> fv [ localB -> i ] , _mm_add_ps ( _mm_add_ps ( _mm_add_ps (
_mm_mul_ps ( tmp_m , _mm_set1_ps ( localB -> je3oqwzoez_idx_2 ) ) ,
_mm_mul_ps ( tmp_g , _mm_set1_ps ( localB -> hhgts5cvdm_idx_2 ) ) ) ,
_mm_mul_ps ( tmp_e , _mm_set1_ps ( localB -> je3oqwzoez_idx_0 ) ) ) ,
_mm_mul_ps ( tmp_i , _mm_set1_ps ( localB -> je3oqwzoez_idx_1 ) ) ) ) ; }
localB -> hhgts5cvdm_idx_2 = localP -> P_152 * localB -> fv [ 0 ] ; if (
localB -> hhgts5cvdm_idx_2 > localP -> P_153 ) { localB -> hhgts5cvdm_idx_2 =
localP -> P_153 ; } else if ( localB -> hhgts5cvdm_idx_2 < localP -> P_154 )
{ localB -> hhgts5cvdm_idx_2 = localP -> P_154 ; } localB -> diwkkstwzv [ 0 ]
= localP -> P_155 [ 0 ] * localB -> hhgts5cvdm_idx_2 ; localB ->
hhgts5cvdm_idx_2 = localP -> P_152 * localB -> fv [ 1 ] ; if ( localB ->
hhgts5cvdm_idx_2 > localP -> P_153 ) { localB -> hhgts5cvdm_idx_2 = localP ->
P_153 ; } else if ( localB -> hhgts5cvdm_idx_2 < localP -> P_154 ) { localB
-> hhgts5cvdm_idx_2 = localP -> P_154 ; } localB -> diwkkstwzv [ 1 ] = localP
-> P_155 [ 1 ] * localB -> hhgts5cvdm_idx_2 ; localB -> hhgts5cvdm_idx_2 =
localP -> P_152 * localB -> fv [ 2 ] ; if ( localB -> hhgts5cvdm_idx_2 >
localP -> P_153 ) { localB -> hhgts5cvdm_idx_2 = localP -> P_153 ; } else if
( localB -> hhgts5cvdm_idx_2 < localP -> P_154 ) { localB -> hhgts5cvdm_idx_2
= localP -> P_154 ; } localB -> diwkkstwzv [ 2 ] = localP -> P_155 [ 2 ] *
localB -> hhgts5cvdm_idx_2 ; localB -> hhgts5cvdm_idx_2 = localP -> P_152 *
localB -> fv [ 3 ] ; if ( localB -> hhgts5cvdm_idx_2 > localP -> P_153 ) {
localB -> hhgts5cvdm_idx_2 = localP -> P_153 ; } else if ( localB ->
hhgts5cvdm_idx_2 < localP -> P_154 ) { localB -> hhgts5cvdm_idx_2 = localP ->
P_154 ; } localB -> diwkkstwzv [ 3 ] = localP -> P_155 [ 3 ] * localB ->
hhgts5cvdm_idx_2 ; localB -> guvms2f3oy_m3ybdk4ikc = localDW -> dxm3w2i52x ;
if ( localB -> guvms2f3oy_m3ybdk4ikc > localP -> P_64 ) { localB ->
ftpfhpmq1t_jzx3amusab = localB -> cwkr5nfnsr_hv2ho1zopz - localB ->
ftpfhpmq1t_jzx3amusab ; localB -> d1sdpoe5zq_jwzvbuczlb = fp0u5nlpgw ->
VisionSensors . opticalFlow_data [ 2 ] ; localB -> e2jse4qsm2_idx_1 =
fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 2 ] ; } else { localB ->
ftpfhpmq1t_jzx3amusab = localP -> P_163 ; localB -> d1sdpoe5zq_jwzvbuczlb =
localP -> P_62 ; localB -> e2jse4qsm2_idx_1 = localP -> P_62 ; } localB ->
nwc2w0behm = ( real_T ) ( localB -> e2jse4qsm2_idx_1 == localP -> P_1 ) *
localDW -> bw2ribqmwm + ( real_T ) ( localB -> d1sdpoe5zq_jwzvbuczlb ==
localP -> P_1 ) ; localB -> lig4ya1hwn_h522xzlxvt = localB ->
guvms2f3oy_m3ybdk4ikc + localP -> P_202 ; if ( localB ->
lig4ya1hwn_h522xzlxvt > localP -> P_46 ) { localB -> i55i5dbrnk = localP ->
P_203 ; } else { localB -> i55i5dbrnk = localB -> lig4ya1hwn_h522xzlxvt ; }
if ( ( muSingleScalarAbs ( localB -> hx2cmwv4pr_guugdwf2m3 [ 0 ] ) > localP
-> P_24 ) || ( muSingleScalarAbs ( localB -> hx2cmwv4pr_guugdwf2m3 [ 1 ] ) >
localP -> P_25 ) ) { ghadbep3bb ( & localB -> n43fsoetjx , & localP ->
ghadbep3bbv ) ; } else if ( ( ( muSingleScalarAbs ( fp0u5nlpgw ->
VisionSensors . opticalFlow_data [ 0 ] ) > localP -> P_28 ) && (
muSingleScalarAbs ( localP -> P_156 * fp0u5nlpgw -> VisionSensors .
opticalFlow_data [ 0 ] - localB -> awk13lcnc4 [ 0 ] ) > localP -> P_26 ) ) ||
( ( muSingleScalarAbs ( localP -> P_157 * fp0u5nlpgw -> VisionSensors .
opticalFlow_data [ 1 ] - localB -> awk13lcnc4 [ 1 ] ) > localP -> P_27 ) && (
muSingleScalarAbs ( fp0u5nlpgw -> VisionSensors . opticalFlow_data [ 1 ] ) >
localP -> P_29 ) ) ) { ghadbep3bb ( & localB -> n43fsoetjx , & localP ->
acfz1zxm4t ) ; } else if ( localB -> nwc2w0behm > localP -> P_0 ) {
ghadbep3bb ( & localB -> n43fsoetjx , & localP -> clwiujjdqo ) ; } else if (
muSingleScalarAbs ( localB -> ftpfhpmq1t_jzx3amusab ) > localP -> P_63 ) {
ghadbep3bb ( & localB -> n43fsoetjx , & localP -> jvbbqhrajh ) ; } else {
ghadbep3bb ( & localB -> n43fsoetjx , & localP -> ciy1c2o0rv ) ; } if (
localP -> P_211 ) { for ( localB -> i = 0 ; localB -> i <= 0 ; localB -> i +=
2 ) { tmp = _mm_loadu_pd ( & localB -> an1r03ms1q [ localB -> i + 2 ] ) ; tmp
= _mm_mul_pd ( tmp , _mm_set1_pd ( localB -> an1r03ms1q [ 2 ] ) ) ; tmp_p =
_mm_loadu_pd ( & localB -> an1r03ms1q [ localB -> i ] ) ; tmp_p = _mm_mul_pd
( tmp_p , _mm_set1_pd ( localB -> an1r03ms1q [ 0 ] ) ) ; _mm_storeu_pd ( &
localB -> mziz3nn5lr_cxarnvbvui [ localB -> i ] , _mm_add_pd ( tmp , tmp_p )
) ; tmp = _mm_loadu_pd ( & localB -> an1r03ms1q [ localB -> i + 2 ] ) ; tmp =
_mm_mul_pd ( tmp , _mm_set1_pd ( localB -> an1r03ms1q [ 3 ] ) ) ; tmp_p =
_mm_loadu_pd ( & localB -> an1r03ms1q [ localB -> i ] ) ; tmp_p = _mm_mul_pd
( tmp_p , _mm_set1_pd ( localB -> an1r03ms1q [ 1 ] ) ) ; _mm_storeu_pd ( &
localB -> mziz3nn5lr_cxarnvbvui [ localB -> i + 2 ] , _mm_add_pd ( tmp ,
tmp_p ) ) ; } } else { for ( localB -> i = 0 ; localB -> i < 2 ; localB -> i
++ ) { localB -> mziz3nn5lr_cxarnvbvui [ localB -> i ] = localB -> an1r03ms1q
[ localB -> i ] ; localB -> mziz3nn5lr_cxarnvbvui [ localB -> i + 2 ] =
localB -> an1r03ms1q [ localB -> i + 2 ] ; } } localB ->
hckumpkidc_g1smspu5ke [ 0 ] = localB -> avc2vkjfub_idx_0 ; localB ->
hckumpkidc_g1smspu5ke [ 1 ] = localB -> avc2vkjfub_idx_1 ; localB ->
avc2vkjfub_idx_0 = localP -> P_65 [ 0 ] * localB -> hckumpkidc_g1smspu5ke [ 0
] + localB -> hckumpkidc_g1smspu5ke [ 1 ] * localP -> P_65 [ 2 ] ; localB ->
avc2vkjfub_idx_1 = localB -> hckumpkidc_g1smspu5ke [ 0 ] * localP -> P_65 [ 1
] + localB -> hckumpkidc_g1smspu5ke [ 1 ] * localP -> P_65 [ 3 ] ; localB ->
ftpfhpmq1t_jzx3amusab = localB -> leirljwdz1_merlcviukg [ 1 ] ; localB ->
je3oqwzoez_idx_2 = localB -> leirljwdz1_merlcviukg [ 0 ] ; for ( localB -> i
= 0 ; localB -> i < 3 ; localB -> i ++ ) { localB -> mg5gm1rrwc [ localB -> i
] = ( ( localB -> gnjka4005e_kkiq3xxxve [ 3 * localB -> i + 1 ] * localB ->
ftpfhpmq1t_jzx3amusab + localB -> gnjka4005e_kkiq3xxxve [ 3 * localB -> i ] *
localB -> je3oqwzoez_idx_2 ) + localB -> gnjka4005e_kkiq3xxxve [ 3 * localB
-> i + 2 ] * localB -> bsng3p25ac_idx_1 ) + localP -> P_79 [ localB -> i ] ;
} localB -> hb323v315k_dhmrxtyqop = localB -> mg5gm1rrwc [ 2 ] ; localB ->
d1sdpoe5zq_jwzvbuczlb = localP -> P_66 [ 0 ] * localB -> mg5gm1rrwc [ 2 ] ;
localB -> e2jse4qsm2_idx_1 = localP -> P_66 [ 1 ] * localB -> mg5gm1rrwc [ 2
] ; localB -> gbrpsno10i_fkr0r45bcn = localB -> abfe3d3zz3_evg4t2fsev ; if (
localB -> gbrpsno10i_fkr0r45bcn ) { if ( ! localDW -> g4zcogq4xi ) { if (
rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> g4zcogq4xi = true ; } localB -> egzubxuu5t_llw0u2ae0v -= ( localP
-> P_67 [ 0 ] * localB -> hckumpkidc_g1smspu5ke [ 0 ] + localP -> P_67 [ 1 ]
* localB -> hckumpkidc_g1smspu5ke [ 1 ] ) + localP -> P_71 * localB ->
hb323v315k_dhmrxtyqop ; localB -> bdybuugoyn [ 0 ] = localB -> a3etzmu5xt [ 0
] * localB -> egzubxuu5t_llw0u2ae0v ; localB -> bdybuugoyn [ 1 ] = localB ->
a3etzmu5xt [ 1 ] * localB -> egzubxuu5t_llw0u2ae0v ; srUpdateBC ( localDW ->
idn2v5d33m ) ; } else if ( localDW -> g4zcogq4xi ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
localB -> bdybuugoyn [ 0 ] = localP -> P_53 ; localB -> bdybuugoyn [ 1 ] =
localP -> P_53 ; localDW -> g4zcogq4xi = false ; } localB -> bb5gw3vwdf [ 0 ]
= ( localB -> d1sdpoe5zq_jwzvbuczlb + localB -> avc2vkjfub_idx_0 ) + localB
-> bdybuugoyn [ 0 ] ; localB -> bb5gw3vwdf [ 1 ] = ( localB ->
e2jse4qsm2_idx_1 + localB -> avc2vkjfub_idx_1 ) + localB -> bdybuugoyn [ 1 ]
; localB -> hfe2uccrp1_ppxrqq0gsf [ 0 ] = localB -> h2w3fyzeix ; localB ->
hfe2uccrp1_ppxrqq0gsf [ 1 ] = localB -> dc3qn403cz ; localB ->
hfe2uccrp1_ppxrqq0gsf [ 2 ] = localB -> blgzljheti ; jfkq2sjtgw ( localB ->
lhkppeq5nc , localP -> P_212 ) ; localB -> hciyp3btjt_bjbgfqrolh [ 0 ] =
localB -> lzpya54qds_lxo5edjg3c [ 0 ] ; localB -> hciyp3btjt_bjbgfqrolh [ 1 ]
= localB -> lzpya54qds_lxo5edjg3c [ 1 ] ; localB -> hx2cmwv4pr_guugdwf2m3 [ 0
] = localP -> P_164 [ 0 ] * localB -> hciyp3btjt_bjbgfqrolh [ 0 ] + localB ->
hciyp3btjt_bjbgfqrolh [ 1 ] * localP -> P_164 [ 2 ] ; localB ->
hx2cmwv4pr_guugdwf2m3 [ 1 ] = localB -> hciyp3btjt_bjbgfqrolh [ 0 ] * localP
-> P_164 [ 1 ] + localB -> hciyp3btjt_bjbgfqrolh [ 1 ] * localP -> P_164 [ 3
] ; localB -> blwstyolvy_m3yhjduhi1 = localB -> dc3qn403cz ; localB ->
nwqezykn5p_idx_0 = localP -> P_165 [ 0 ] * localB -> blwstyolvy_m3yhjduhi1 ;
localB -> hhgts5cvdm_idx_2 = localP -> P_165 [ 1 ] * localB ->
blwstyolvy_m3yhjduhi1 ; localB -> e0zxqcrfyp_izlwqhinl5 = localB ->
n4hjyaug4z_ax3wx1gs5w ; phrpuocqmv ( accn4cnket , localB ->
e0zxqcrfyp_izlwqhinl5 , localB -> plrk4i0s0t , localB ->
oehll4wgvd_oyypvi4boh , localP -> P_166 , localB -> hciyp3btjt_bjbgfqrolh ,
localP -> P_167 , localB -> blwstyolvy_m3yhjduhi1 , & localB -> phrpuocqmvu ,
& localDW -> phrpuocqmvu , & localP -> phrpuocqmvu ) ; localB -> ggkmgq4uf0 [
0 ] = ( localB -> nwqezykn5p_idx_0 + localB -> hx2cmwv4pr_guugdwf2m3 [ 0 ] )
+ localB -> phrpuocqmvu . n4u2gwmeck [ 0 ] ; localB -> ggkmgq4uf0 [ 1 ] = (
localB -> hhgts5cvdm_idx_2 + localB -> hx2cmwv4pr_guugdwf2m3 [ 1 ] ) + localB
-> phrpuocqmvu . n4u2gwmeck [ 1 ] ; jfkq2sjtgw ( localB -> hqeuvdzx1l ,
localP -> P_213 ) ; localB -> mkqfkkpu35_nuebgmauvi [ 0 ] = localB ->
ivkfv1y5m1_owjr1h1vqy [ 0 ] ; localB -> mkqfkkpu35_nuebgmauvi [ 1 ] = localB
-> ivkfv1y5m1_owjr1h1vqy [ 1 ] ; localB -> hx2cmwv4pr_guugdwf2m3 [ 0 ] =
localP -> P_175 [ 0 ] * localB -> mkqfkkpu35_nuebgmauvi [ 0 ] + localB ->
mkqfkkpu35_nuebgmauvi [ 1 ] * localP -> P_175 [ 2 ] ; localB ->
hx2cmwv4pr_guugdwf2m3 [ 1 ] = localB -> mkqfkkpu35_nuebgmauvi [ 0 ] * localP
-> P_175 [ 1 ] + localB -> mkqfkkpu35_nuebgmauvi [ 1 ] * localP -> P_175 [ 3
] ; localB -> nbzmfofdw4_czkfpwuzm5 = localB -> h2w3fyzeix ; localB ->
nwqezykn5p_idx_0 = localP -> P_176 [ 0 ] * localB -> nbzmfofdw4_czkfpwuzm5 ;
localB -> hhgts5cvdm_idx_2 = localP -> P_176 [ 1 ] * localB ->
nbzmfofdw4_czkfpwuzm5 ; localB -> bdb2nwluvi_fft32lqtda = localB ->
da04unwzo4_as0qznsxlv ; phrpuocqmv ( accn4cnket , localB ->
bdb2nwluvi_fft32lqtda , localB -> dkw510cvug , localB ->
bodf4gi0av_nvsvtgkap4 , localP -> P_177 , localB -> mkqfkkpu35_nuebgmauvi ,
localP -> P_178 , localB -> nbzmfofdw4_czkfpwuzm5 , & localB -> bm3dpymkhz ,
& localDW -> bm3dpymkhz , & localP -> bm3dpymkhz ) ; localB -> nfeaax1ctn [ 0
] = ( localB -> nwqezykn5p_idx_0 + localB -> hx2cmwv4pr_guugdwf2m3 [ 0 ] ) +
localB -> bm3dpymkhz . n4u2gwmeck [ 0 ] ; localB -> nfeaax1ctn [ 1 ] = (
localB -> hhgts5cvdm_idx_2 + localB -> hx2cmwv4pr_guugdwf2m3 [ 1 ] ) + localB
-> bm3dpymkhz . n4u2gwmeck [ 1 ] ; localB -> ntwzhidvef_c0dok3111h = localB
-> j1jkeoiq0d_mdoasc5av4 + localP -> P_204 ; if ( localB ->
ntwzhidvef_c0dok3111h > localP -> P_47 ) { localB -> jtkoloo2gf = localP ->
P_205 ; } else { localB -> jtkoloo2gf = localB -> ntwzhidvef_c0dok3111h ; }
muSingleScalarSinCos ( localB -> ai5dxuta3d_nz4o0shxby [ 1 ] , & localB ->
ftpfhpmq1t_jzx3amusab , & localB -> bsng3p25ac_idx_1 ) ; localB ->
gnjka4005e_kkiq3xxxve [ 0 ] = localB -> gnjka4005e_tmp_jz50ptvnrg ; localB ->
gnjka4005e_kkiq3xxxve [ 1 ] = localB -> gnjka4005e_tmp_o4f35lbcvx ; localB ->
gnjka4005e_kkiq3xxxve [ 2 ] = localB -> gnjka4005e_tmp_nyxm0bsxsn ; localB ->
gnjka4005e_kkiq3xxxve [ 3 ] = localB -> gnjka4005e_tmp_icdfyazkhu ; localB ->
gnjka4005e_kkiq3xxxve [ 4 ] = localB -> gnjka4005e_tmp ; localB ->
gnjka4005e_kkiq3xxxve [ 5 ] = localB -> gnjka4005e_tmp_ju13rw2h0m ; localB ->
gnjka4005e_kkiq3xxxve [ 6 ] = - localB -> ftpfhpmq1t_jzx3amusab ; localB ->
gnjka4005e_kkiq3xxxve [ 7 ] = localB -> ilrv1eq3wt_ezqlmfzvpq ; localB ->
gnjka4005e_kkiq3xxxve [ 8 ] = localB -> lc3c33xvq2_idx_1 ; localB ->
abfe3d3zz3_evg4t2fsev = ( localB -> cwkr5nfnsr_hv2ho1zopz <= localP -> P_32 )
; localB -> n4hjyaug4z_ax3wx1gs5w = ( ( localB -> mysvteaea1_bnlywzniup !=
localP -> P_33 ) || ( localB -> pln304gd5j_dapv3jlyq5 != localP -> P_34 ) ) ;
localB -> avc2vkjfub_idx_0 = localP -> P_87 [ 1 ] ; localB ->
egzubxuu5t_llw0u2ae0v = localP -> P_87 [ 0 ] ; localB -> avc2vkjfub_idx_1 =
localP -> P_87 [ 2 ] ; for ( localB -> i = 0 ; localB -> i < 3 ; localB -> i
++ ) { localB -> j13avt3ya4_bhxxfovxdy [ localB -> i ] = localB ->
leirljwdz1_merlcviukg [ localB -> i ] - ( ( localB -> gnjka4005e_kkiq3xxxve [
localB -> i + 3 ] * localB -> avc2vkjfub_idx_0 + localB ->
gnjka4005e_kkiq3xxxve [ localB -> i ] * localB -> egzubxuu5t_llw0u2ae0v ) +
localB -> gnjka4005e_kkiq3xxxve [ localB -> i + 6 ] * localB ->
avc2vkjfub_idx_1 ) ; } localB -> iedrhj0ljm [ 0 ] = ( real32_T ) ( localP ->
P_61 * localB -> j13avt3ya4_bhxxfovxdy [ 0 ] ) * ( real32_T ) localB ->
n4hjyaug4z_ax3wx1gs5w * ( real32_T ) localB -> abfe3d3zz3_evg4t2fsev ; localB
-> iedrhj0ljm [ 1 ] = ( real32_T ) ( localP -> P_61 * localB ->
j13avt3ya4_bhxxfovxdy [ 1 ] ) * ( real32_T ) localB -> n4hjyaug4z_ax3wx1gs5w
* ( real32_T ) localB -> abfe3d3zz3_evg4t2fsev ; if ( localP -> P_214 ) { for
( localB -> i = 0 ; localB -> i < 4 ; localB -> i ++ ) { for ( localB -> cff
= 0 ; localB -> cff < 4 ; localB -> cff ++ ) { localB ->
iaci3ejhv2_mbvzarwird [ localB -> i + ( localB -> cff << 2 ) ] = ( ( localB
-> eq1h3gdlhw [ localB -> i + 4 ] * localB -> eq1h3gdlhw [ localB -> cff + 4
] + localB -> eq1h3gdlhw [ localB -> i ] * localB -> eq1h3gdlhw [ localB ->
cff ] ) + localB -> eq1h3gdlhw [ localB -> i + 8 ] * localB -> eq1h3gdlhw [
localB -> cff + 8 ] ) + localB -> eq1h3gdlhw [ localB -> i + 12 ] * localB ->
eq1h3gdlhw [ localB -> cff + 12 ] ; } } } else { for ( localB -> i = 0 ;
localB -> i < 4 ; localB -> i ++ ) { for ( localB -> cff = 0 ; localB -> cff
< 4 ; localB -> cff ++ ) { localB -> memOffset = localB -> cff << 2 ; localB
-> iaci3ejhv2_mbvzarwird [ localB -> i + localB -> memOffset ] = localB ->
eq1h3gdlhw [ localB -> memOffset + localB -> i ] ; } } } localB ->
n0icskb4jd_g2mlkqadfk [ 0 ] = localB -> ozh1synzu3_cv5hdgrwft [ 0 ] ; localB
-> n0icskb4jd_g2mlkqadfk [ 1 ] = localB -> ozh1synzu3_cv5hdgrwft [ 1 ] ;
localB -> n0icskb4jd_g2mlkqadfk [ 2 ] = localB -> ozh1synzu3_cv5hdgrwft [ 2 ]
; localB -> n0icskb4jd_g2mlkqadfk [ 3 ] = localB -> ozh1synzu3_cv5hdgrwft [ 3
] ; localB -> cwkr5nfnsr_hv2ho1zopz = localB -> n0icskb4jd_g2mlkqadfk [ 1 ] ;
localB -> je3oqwzoez_idx_2 = localB -> n0icskb4jd_g2mlkqadfk [ 0 ] ; localB
-> mysvteaea1_bnlywzniup = localB -> n0icskb4jd_g2mlkqadfk [ 2 ] ; localB ->
ftpfhpmq1t_jzx3amusab = localB -> n0icskb4jd_g2mlkqadfk [ 3 ] ; for ( localB
-> i = 0 ; localB -> i <= 0 ; localB -> i += 4 ) { tmp_m = _mm_loadu_ps ( &
localP -> P_188 [ localB -> i + 4 ] ) ; tmp_g = _mm_loadu_ps ( & localP ->
P_188 [ localB -> i ] ) ; tmp_e = _mm_loadu_ps ( & localP -> P_188 [ localB
-> i + 8 ] ) ; tmp_i = _mm_loadu_ps ( & localP -> P_188 [ localB -> i + 12 ]
) ; _mm_storeu_ps ( & localB -> ozh1synzu3_cv5hdgrwft [ localB -> i ] ,
_mm_add_ps ( _mm_add_ps ( _mm_add_ps ( _mm_mul_ps ( tmp_m , _mm_set1_ps (
localB -> cwkr5nfnsr_hv2ho1zopz ) ) , _mm_mul_ps ( tmp_g , _mm_set1_ps (
localB -> je3oqwzoez_idx_2 ) ) ) , _mm_mul_ps ( tmp_e , _mm_set1_ps ( localB
-> mysvteaea1_bnlywzniup ) ) ) , _mm_mul_ps ( tmp_i , _mm_set1_ps ( localB ->
ftpfhpmq1t_jzx3amusab ) ) ) ) ; } localB -> hx2cmwv4pr_guugdwf2m3 [ 0 ] =
localB -> iedrhj0ljm [ 0 ] ; localB -> hx2cmwv4pr_guugdwf2m3 [ 1 ] = localB
-> iedrhj0ljm [ 1 ] ; localB -> cwkr5nfnsr_hv2ho1zopz = localB -> iedrhj0ljm
[ 1 ] ; localB -> je3oqwzoez_idx_2 = localB -> iedrhj0ljm [ 0 ] ; for (
localB -> i = 0 ; localB -> i <= 0 ; localB -> i += 4 ) { tmp_m =
_mm_loadu_ps ( & localP -> P_189 [ localB -> i + 4 ] ) ; tmp_g = _mm_loadu_ps
( & localP -> P_189 [ localB -> i ] ) ; _mm_storeu_ps ( & localB ->
kxwpfggynr_fqdqrf4qbc [ localB -> i ] , _mm_add_ps ( _mm_mul_ps ( tmp_m ,
_mm_set1_ps ( localB -> cwkr5nfnsr_hv2ho1zopz ) ) , _mm_mul_ps ( tmp_g ,
_mm_set1_ps ( localB -> je3oqwzoez_idx_2 ) ) ) ) ; } localB ->
bw1nuulehe_gxhmnjv5xa = localB -> ca5lhwbyek_ifotjnizh4 ; if ( localB ->
bw1nuulehe_gxhmnjv5xa ) { if ( ! localDW -> kh1khihcrt ) { if (
rtmGetTaskTime ( accn4cnket , 0 ) != rtmGetTStart ( accn4cnket ) ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ; }
localDW -> kh1khihcrt = true ; } localB -> cwkr5nfnsr_hv2ho1zopz = localB ->
n0icskb4jd_g2mlkqadfk [ 1 ] ; localB -> je3oqwzoez_idx_2 = localB ->
n0icskb4jd_g2mlkqadfk [ 0 ] ; localB -> mysvteaea1_bnlywzniup = localB ->
n0icskb4jd_g2mlkqadfk [ 2 ] ; localB -> ftpfhpmq1t_jzx3amusab = localB ->
n0icskb4jd_g2mlkqadfk [ 3 ] ; for ( localB -> i = 0 ; localB -> i < 2 ;
localB -> i ++ ) { localB -> fczu5pq2ol_dhamdvybc1 [ localB -> i ] = ( (
localP -> P_190 [ localB -> i + 2 ] * localB -> cwkr5nfnsr_hv2ho1zopz +
localP -> P_190 [ localB -> i ] * localB -> je3oqwzoez_idx_2 ) + localP ->
P_190 [ localB -> i + 4 ] * localB -> mysvteaea1_bnlywzniup ) + localP ->
P_190 [ localB -> i + 6 ] * localB -> ftpfhpmq1t_jzx3amusab ; } localB ->
cwkr5nfnsr_hv2ho1zopz = localB -> pxonda0hgb_ldqodwenvz [ 0 ] - ( ( localP ->
P_191 [ 0 ] * localB -> hx2cmwv4pr_guugdwf2m3 [ 0 ] + localB ->
hx2cmwv4pr_guugdwf2m3 [ 1 ] * localP -> P_191 [ 2 ] ) + localB ->
fczu5pq2ol_dhamdvybc1 [ 0 ] ) ; localB -> je3oqwzoez_idx_2 = localB ->
pxonda0hgb_ldqodwenvz [ 1 ] - ( ( localB -> hx2cmwv4pr_guugdwf2m3 [ 0 ] *
localP -> P_191 [ 1 ] + localB -> hx2cmwv4pr_guugdwf2m3 [ 1 ] * localP ->
P_191 [ 3 ] ) + localB -> fczu5pq2ol_dhamdvybc1 [ 1 ] ) ; for ( localB -> i =
0 ; localB -> i <= 0 ; localB -> i += 4 ) { tmp_m = _mm_loadu_ps ( & localB
-> pw0mcsqzmb [ localB -> i + 4 ] ) ; tmp_g = _mm_loadu_ps ( & localB ->
pw0mcsqzmb [ localB -> i ] ) ; _mm_storeu_ps ( & localB -> ofzk4yqaty [
localB -> i ] , _mm_add_ps ( _mm_mul_ps ( tmp_m , _mm_set1_ps ( localB ->
je3oqwzoez_idx_2 ) ) , _mm_mul_ps ( tmp_g , _mm_set1_ps ( localB ->
cwkr5nfnsr_hv2ho1zopz ) ) ) ) ; } srUpdateBC ( localDW -> mfifybuxty ) ; }
else if ( localDW -> kh1khihcrt ) {
ssSetBlockStateForSolverChangedAtMajorStep ( accn4cnket -> _mdlRefSfcnS ) ;
localB -> ofzk4yqaty [ 0 ] = localP -> P_97 ; localB -> ofzk4yqaty [ 1 ] =
localP -> P_97 ; localB -> ofzk4yqaty [ 2 ] = localP -> P_97 ; localB ->
ofzk4yqaty [ 3 ] = localP -> P_97 ; localDW -> kh1khihcrt = false ; } localB
-> iiejrobht0 [ 0 ] = ( localB -> kxwpfggynr_fqdqrf4qbc [ 0 ] + localB ->
ozh1synzu3_cv5hdgrwft [ 0 ] ) + localB -> ofzk4yqaty [ 0 ] ; localB ->
iiejrobht0 [ 1 ] = ( localB -> kxwpfggynr_fqdqrf4qbc [ 1 ] + localB ->
ozh1synzu3_cv5hdgrwft [ 1 ] ) + localB -> ofzk4yqaty [ 1 ] ; localB ->
iiejrobht0 [ 2 ] = ( localB -> kxwpfggynr_fqdqrf4qbc [ 2 ] + localB ->
ozh1synzu3_cv5hdgrwft [ 2 ] ) + localB -> ofzk4yqaty [ 2 ] ; localB ->
iiejrobht0 [ 3 ] = ( localB -> kxwpfggynr_fqdqrf4qbc [ 3 ] + localB ->
ozh1synzu3_cv5hdgrwft [ 3 ] ) + localB -> ofzk4yqaty [ 3 ] ; localB ->
i3yk023g5r_ctvw0tpkon = localB -> mjnlaghkab_jacdjrqyev + localP -> P_206 ;
if ( localB -> i3yk023g5r_ctvw0tpkon > localP -> P_48 ) { localB ->
hcymkhwaz2 = localP -> P_207 ; } else { localB -> hcymkhwaz2 = localB ->
i3yk023g5r_ctvw0tpkon ; } muSingleScalarSinCos ( localB ->
ai5dxuta3d_nz4o0shxby [ 1 ] , & localB -> cwkr5nfnsr_hv2ho1zopz , & localB ->
je3oqwzoez_idx_2 ) ; localB -> gnjka4005e_kkiq3xxxve [ 0 ] = localB ->
gnjka4005e_tmp_jz50ptvnrg ; localB -> gnjka4005e_kkiq3xxxve [ 1 ] = localB ->
gnjka4005e_tmp_o4f35lbcvx ; localB -> gnjka4005e_kkiq3xxxve [ 2 ] = localB ->
gnjka4005e_tmp_nyxm0bsxsn ; localB -> gnjka4005e_kkiq3xxxve [ 3 ] = localB ->
gnjka4005e_tmp_icdfyazkhu ; localB -> gnjka4005e_kkiq3xxxve [ 4 ] = localB ->
gnjka4005e_tmp ; localB -> gnjka4005e_kkiq3xxxve [ 5 ] = localB ->
gnjka4005e_tmp_ju13rw2h0m ; localB -> gnjka4005e_kkiq3xxxve [ 6 ] = - localB
-> cwkr5nfnsr_hv2ho1zopz ; localB -> gnjka4005e_kkiq3xxxve [ 7 ] = localB ->
ilrv1eq3wt_ezqlmfzvpq ; localB -> gnjka4005e_kkiq3xxxve [ 8 ] = localB ->
lc3c33xvq2_idx_1 ; localB -> ftpfhpmq1t_jzx3amusab = localB -> awk13lcnc4 [ 0
] ; localB -> je3oqwzoez_idx_2 = localB -> awk13lcnc4 [ 1 ] ; for ( localB ->
i = 0 ; localB -> i < 3 ; localB -> i ++ ) { localB -> br1hdqrr4b [ localB ->
i ] = ( localB -> gnjka4005e_kkiq3xxxve [ 3 * localB -> i + 1 ] * localB ->
je3oqwzoez_idx_2 + localB -> gnjka4005e_kkiq3xxxve [ 3 * localB -> i ] *
localB -> ftpfhpmq1t_jzx3amusab ) + localB -> gnjka4005e_kkiq3xxxve [ 3 *
localB -> i + 2 ] * localB -> lc3c33xvq2_idx_2 ; } } void otjykwnhb3TID2 (
eo4bbte2ey * localB , nu4qaxumex * localP ) { int_T tid = 0 ; real_T
nf0iu0z5ym ; real32_T fv2ceh3prv [ 4 ] ; real32_T kr2iidzg0k ; real32_T
d13fw43apw ; real32_T elcge4jc3d ; real32_T o0flchcosd [ 16 ] ; int32_T i ;
memcpy ( & localB -> c0hr2x2r2u [ 0 ] , & localP -> P_160 [ 0 ] , sizeof (
real32_T ) << 4U ) ; localB -> a3etzmu5xt [ 0 ] = localP -> P_69 [ 0 ] ;
localB -> a3etzmu5xt [ 1 ] = localP -> P_69 [ 1 ] ; localB -> e40yrpzyuq [ 0
] = localP -> P_70 [ 0 ] ; localB -> e40yrpzyuq [ 1 ] = localP -> P_70 [ 1 ]
; nf0iu0z5ym = 0.0 ; localB -> an1r03ms1q [ 0 ] = localP -> P_68 [ 0 ] ;
localB -> an1r03ms1q [ 1 ] = localP -> P_68 [ 1 ] ; localB -> an1r03ms1q [ 2
] = localP -> P_68 [ 2 ] ; localB -> an1r03ms1q [ 3 ] = localP -> P_68 [ 3 ]
; fv2ceh3prv [ 0 ] = ( real32_T ) localP -> P_72 [ 0 ] ; fv2ceh3prv [ 1 ] = (
real32_T ) localP -> P_72 [ 1 ] ; fv2ceh3prv [ 2 ] = ( real32_T ) localP ->
P_72 [ 2 ] ; fv2ceh3prv [ 3 ] = ( real32_T ) localP -> P_72 [ 3 ] ; localB ->
lesgjjhdse [ 0 ] = localP -> P_78 [ 0 ] ; localB -> lesgjjhdse [ 1 ] = localP
-> P_78 [ 1 ] ; localB -> plrk4i0s0t [ 0 ] = ( real32_T ) localP -> P_81 [ 0
] ; localB -> plrk4i0s0t [ 1 ] = ( real32_T ) localP -> P_81 [ 1 ] ; localB
-> g0omvaowkd [ 0 ] = ( real32_T ) localP -> P_82 [ 0 ] ; localB ->
g0omvaowkd [ 1 ] = ( real32_T ) localP -> P_82 [ 1 ] ; kr2iidzg0k = 0.0F ;
localB -> lhkppeq5nc [ 0 ] = ( real32_T ) localP -> P_80 [ 0 ] ; localB ->
lhkppeq5nc [ 1 ] = ( real32_T ) localP -> P_80 [ 1 ] ; localB -> lhkppeq5nc [
2 ] = ( real32_T ) localP -> P_80 [ 2 ] ; localB -> lhkppeq5nc [ 3 ] = (
real32_T ) localP -> P_80 [ 3 ] ; localB -> kkdshod4h5 [ 0 ] = localP ->
P_174 [ 0 ] ; localB -> kkdshod4h5 [ 1 ] = localP -> P_174 [ 1 ] ; localB ->
dkw510cvug [ 0 ] = ( real32_T ) localP -> P_84 [ 0 ] ; localB -> dkw510cvug [
1 ] = ( real32_T ) localP -> P_84 [ 1 ] ; localB -> dts03pec5w [ 0 ] = (
real32_T ) localP -> P_85 [ 0 ] ; localB -> dts03pec5w [ 1 ] = ( real32_T )
localP -> P_85 [ 1 ] ; d13fw43apw = 0.0F ; localB -> hqeuvdzx1l [ 0 ] = (
real32_T ) localP -> P_83 [ 0 ] ; localB -> hqeuvdzx1l [ 1 ] = ( real32_T )
localP -> P_83 [ 1 ] ; localB -> hqeuvdzx1l [ 2 ] = ( real32_T ) localP ->
P_83 [ 2 ] ; localB -> hqeuvdzx1l [ 3 ] = ( real32_T ) localP -> P_83 [ 3 ] ;
localB -> fchjjv4ub4 [ 0 ] = localP -> P_185 [ 0 ] ; localB -> fchjjv4ub4 [ 1
] = localP -> P_185 [ 1 ] ; for ( i = 0 ; i < 8 ; i ++ ) { localB ->
pw0mcsqzmb [ i ] = ( real32_T ) localP -> P_89 [ i ] ; } for ( i = 0 ; i < 8
; i ++ ) { localB -> blc1o30hbu [ i ] = ( real32_T ) localP -> P_90 [ i ] ; }
elcge4jc3d = 0.0F ; for ( i = 0 ; i < 16 ; i ++ ) { localB -> eq1h3gdlhw [ i
] = ( real32_T ) localP -> P_88 [ i ] ; } memcpy ( & o0flchcosd [ 0 ] , &
localP -> P_192 [ 0 ] , sizeof ( real32_T ) << 4U ) ; localB -> d2r1shdz5z [
0 ] = localP -> P_198 [ 0 ] ; localB -> d2r1shdz5z [ 1 ] = localP -> P_198 [
1 ] ; localB -> d2r1shdz5z [ 2 ] = localP -> P_198 [ 2 ] ; localB ->
d2r1shdz5z [ 3 ] = localP -> P_198 [ 3 ] ; } void lsjhvu4egy ( eo4bbte2ey *
localB , dmp1xsadgu * localDW , nu4qaxumex * localP ) { int32_T k ; int32_T
memOffset ; real32_T awk13lcnc4_p ; localDW -> dq5lalhp1e = ( int8_T ) localP
-> P_215 ; localDW -> mi4mocbazh = localB -> ctkxulxqbp [ 0 ] ; localDW ->
de4yc1bkky = false ; localDW -> b3fmbw5stg [ 0 ] += localP -> P_101 * localB
-> br1hdqrr4b [ 0 ] ; localDW -> mtonzezz2z [ 0 ] = localB -> bb5gw3vwdf [ 0
] ; localDW -> aq2aymvaio [ 2 ] = localDW -> aq2aymvaio [ 1 ] ; localDW ->
ddv3ztj2wp [ 2 ] = localDW -> ddv3ztj2wp [ 1 ] ; localDW -> b3fmbw5stg [ 1 ]
+= localP -> P_101 * localB -> br1hdqrr4b [ 1 ] ; localDW -> mtonzezz2z [ 1 ]
= localB -> bb5gw3vwdf [ 1 ] ; localDW -> aq2aymvaio [ 1 ] = localDW ->
aq2aymvaio [ 0 ] ; localDW -> ddv3ztj2wp [ 1 ] = localDW -> ddv3ztj2wp [ 0 ]
; localDW -> aq2aymvaio [ 0 ] = localDW -> orkq4iljgu ; localDW -> ddv3ztj2wp
[ 0 ] = localDW -> f2ynnmexgv ; localDW -> dzwopklw3c += localP -> P_108 *
localB -> blgzljheti ; localDW -> bbkjtf4kuy -- ; if ( localDW -> bbkjtf4kuy
< 0 ) { localDW -> bbkjtf4kuy = 4 ; } localDW -> d4fp3a2mpz [ localDW ->
bbkjtf4kuy ] = localB -> fqlqwbd5is [ 0 ] ; localDW -> d4fp3a2mpz [ localDW
-> bbkjtf4kuy + 5 ] = localB -> fqlqwbd5is [ 1 ] ; localDW -> d4fp3a2mpz [
localDW -> bbkjtf4kuy + 10 ] = localB -> fqlqwbd5is [ 2 ] ; localDW ->
jd3dqtmo2p = false ; localDW -> f1jy25gy04 = false ; localDW -> fl0vv44tbs [
0 ] = localB -> ggkmgq4uf0 [ 0 ] ; localDW -> as5a0ikbk1 [ 0 ] = localB ->
nfeaax1ctn [ 0 ] ; localDW -> fl0vv44tbs [ 1 ] = localB -> ggkmgq4uf0 [ 1 ] ;
localDW -> as5a0ikbk1 [ 1 ] = localB -> nfeaax1ctn [ 1 ] ; localDW ->
l3lcputuyl = localB -> hcymkhwaz2 ; localDW -> ncgo1wegzg = localDW ->
b1nmhkw4zo ; localDW -> mirtkskmtr = localDW -> n0mydijbcx ; localDW ->
pjgu33zeph = localB -> jtkoloo2gf ; localDW -> gdn4qfzvsk = false ; localDW
-> jduomia1pb [ 4 ] = localDW -> jduomia1pb [ 3 ] ; localDW -> od5c00niot [ 0
] = localB -> iiejrobht0 [ 0 ] ; localDW -> jduomia1pb [ 3 ] = localDW ->
jduomia1pb [ 2 ] ; localDW -> od5c00niot [ 1 ] = localB -> iiejrobht0 [ 1 ] ;
localDW -> jduomia1pb [ 2 ] = localDW -> jduomia1pb [ 1 ] ; localDW ->
od5c00niot [ 2 ] = localB -> iiejrobht0 [ 2 ] ; localDW -> jduomia1pb [ 1 ] =
localDW -> jduomia1pb [ 0 ] ; localDW -> od5c00niot [ 3 ] = localB ->
iiejrobht0 [ 3 ] ; localDW -> jduomia1pb [ 0 ] = localDW -> iwg03owvar ; for
( k = 0 ; k < 2 ; k ++ ) { memOffset = k * 5 ; localDW -> dqfv1m130o [
memOffset + 4 ] = localDW -> dqfv1m130o [ memOffset + 3 ] ; localDW ->
dqfv1m130o [ memOffset + 3 ] = localDW -> dqfv1m130o [ memOffset + 2 ] ;
localDW -> dqfv1m130o [ memOffset + 2 ] = localDW -> dqfv1m130o [ memOffset +
1 ] ; localDW -> dqfv1m130o [ memOffset + 1 ] = localDW -> dqfv1m130o [
memOffset ] ; localDW -> dqfv1m130o [ memOffset ] = localDW -> mf2pp40f5v [ k
] ; localDW -> meognsjf1t [ k ] = localB -> gzpfxw0cb0 [ k ] ; awk13lcnc4_p =
localB -> awk13lcnc4 [ k ] ; localDW -> gcgpru4rcb [ k ] = awk13lcnc4_p ;
localDW -> peklmaellz [ k ] = awk13lcnc4_p ; } localDW -> gaxgdudnvc = localB
-> mxir0xx3l1 ; localDW -> bsetqjfri4 += localP -> P_131 * localB ->
jlabr4qxfo ; if ( localDW -> bsetqjfri4 > localP -> P_133 ) { localDW ->
bsetqjfri4 = localP -> P_133 ; } else if ( localDW -> bsetqjfri4 < localP ->
P_134 ) { localDW -> bsetqjfri4 = localP -> P_134 ; } localDW -> fpr1qi0oiw =
( int8_T ) localB -> ckblav2twl ; localDW -> dsjbzv2lh4 [ 0 ] += localP ->
P_139 * localB -> ca22pxn2ik [ 0 ] ; localDW -> gixvkpnpus [ 0 ] = localDW ->
pwlp5beuqs [ 0 ] ; localDW -> ow5xb5ovt0 [ 0 ] += localP -> P_143 * localB ->
mxtb45j1vs [ 0 ] ; localDW -> krs1cvkxzk [ 0 ] += localP -> P_144 * localB ->
mjj0hsvmxi [ 0 ] ; localDW -> dsjbzv2lh4 [ 1 ] += localP -> P_139 * localB ->
ca22pxn2ik [ 1 ] ; localDW -> gixvkpnpus [ 1 ] = localDW -> pwlp5beuqs [ 1 ]
; localDW -> ow5xb5ovt0 [ 1 ] += localP -> P_143 * localB -> mxtb45j1vs [ 1 ]
; localDW -> krs1cvkxzk [ 1 ] += localP -> P_144 * localB -> mjj0hsvmxi [ 1 ]
; localDW -> c4kiksmhh2 += localP -> P_148 * localB -> eaw04hnn2p ; localDW
-> dxm3w2i52x = localB -> i55i5dbrnk ; localDW -> bw2ribqmwm = localB ->
nwc2w0behm ; } void eyt3piuhqz ( ipf5ube4r0 * const accn4cnket , dmp1xsadgu *
localDW ) { if ( ( ssGetSimMode ( accn4cnket -> _mdlRefSfcnS ) !=
SS_SIMMODE_EXTERNAL ) && ( ( accn4cnket -> _mdlRefSfcnS ) -> mdlInfo ->
rtwgenMode != SS_RTWGEN_MODELREFERENCE_RTW_TARGET ) ) { if ( localDW ->
puq03cpvbg . AQHandles ) { sdiTerminateStreaming ( & localDW -> puq03cpvbg .
AQHandles ) ; } } } void dw0zngvhyq ( void ) { ipf5ube4r0 * const accn4cnket
= & ( lhjbdsj2rj . rtm ) ; mr51bswvyz ( accn4cnket , & dqykr4eggmg .
otjykwnhb3s ) ; } void ha1ipjbq54 ( uint8_T * o3vpgniqky ) { dqykr4eggmg .
apmirysnvx = b1hr2q0zjh . P_21 ; dqykr4eggmg . fxn4ff02p2 = b1hr2q0zjh . P_22
; dqykr4eggmg . ollsqe4tkk [ 0 ] = b1hr2q0zjh . P_20 ; dqykr4eggmg .
nbojvdn3wx = 0 ; dqykr4eggmg . idji1cak4a = b1hr2q0zjh . P_23 ; dqykr4eggmg .
jacbm5emdo = b1hr2q0zjh . P_24 ; dqykr4eggmg . iha3wpkzdg = b1hr2q0zjh . P_25
; dqykr4eggmg . c3zfo1eioy [ 0 ] = b1hr2q0zjh . P_17 ; dqykr4eggmg .
is0fkrkenr = 0 ; dqykr4eggmg . a55o5m4tjh = b1hr2q0zjh . P_26 ; dqykr4eggmg .
nuya4u3miw = b1hr2q0zjh . P_27 ; dqykr4eggmg . k0zvsd1cqm = b1hr2q0zjh . P_28
; ic5jb3movn ( & ksm0js2nhsy . otjykwnhb3s , & dqykr4eggmg . otjykwnhb3s , &
b1hr2q0zjh . otjykwnhb3s ) ; * o3vpgniqky = ksm0js2nhsy . otjykwnhb3s .
n43fsoetjx ; } void gwlyno50ln ( void ) { dqykr4eggmg . apmirysnvx =
b1hr2q0zjh . P_21 ; dqykr4eggmg . fxn4ff02p2 = b1hr2q0zjh . P_22 ;
dqykr4eggmg . ollsqe4tkk [ 0 ] = b1hr2q0zjh . P_20 ; dqykr4eggmg . nbojvdn3wx
= 0 ; dqykr4eggmg . idji1cak4a = b1hr2q0zjh . P_23 ; dqykr4eggmg . jacbm5emdo
= b1hr2q0zjh . P_24 ; dqykr4eggmg . iha3wpkzdg = b1hr2q0zjh . P_25 ;
dqykr4eggmg . c3zfo1eioy [ 0 ] = b1hr2q0zjh . P_17 ; dqykr4eggmg . is0fkrkenr
= 0 ; dqykr4eggmg . a55o5m4tjh = b1hr2q0zjh . P_26 ; dqykr4eggmg . nuya4u3miw
= b1hr2q0zjh . P_27 ; dqykr4eggmg . k0zvsd1cqm = b1hr2q0zjh . P_28 ;
bxsrqc204k ( & ksm0js2nhsy . otjykwnhb3s , & dqykr4eggmg . otjykwnhb3s , &
b1hr2q0zjh . otjykwnhb3s ) ; } void bog0frvixl ( void ) { kegjp2lgms ( &
ksm0js2nhsy . otjykwnhb3s , & dqykr4eggmg . otjykwnhb3s , & b1hr2q0zjh .
otjykwnhb3s ) ; } void k3yxem35zg ( void ) { dqykr4eggmg . jjrfotind4 = true
; dqykr4eggmg . l152eirbdu . isInitialized = 1 ; dqykr4eggmg . bepi0pxnzh [ 0
] = b1hr2q0zjh . P_1 ; dqykr4eggmg . bepi0pxnzh [ 1 ] = b1hr2q0zjh . P_1 ;
dqykr4eggmg . bepi0pxnzh [ 2 ] = b1hr2q0zjh . P_1 ; dqykr4eggmg . kd4gpvuq4d
= 1.0 - b1hr2q0zjh . P_1 ; dqykr4eggmg . coagx5q5tk [ 0 ] = b1hr2q0zjh . P_2
; dqykr4eggmg . coagx5q5tk [ 1 ] = b1hr2q0zjh . P_2 ; dqykr4eggmg .
coagx5q5tk [ 2 ] = b1hr2q0zjh . P_2 ; dqykr4eggmg . eubxngdwfx = 1.0 -
b1hr2q0zjh . P_2 ; dqykr4eggmg . lqnetrhqrb [ 0 ] = 0.0 * b1hr2q0zjh . P_3 ;
dqykr4eggmg . lqnetrhqrb [ 1 ] = 0.0 * b1hr2q0zjh . P_3 ; dqykr4eggmg .
lqnetrhqrb [ 2 ] = 0.0 * b1hr2q0zjh . P_3 ; dqykr4eggmg . p4an1zxeb3 = 1.0 -
b1hr2q0zjh . P_3 ; } void flightControlSystemTID0 ( const SensorsBus *
pxdb2gu5va , real32_T pikqq4svts [ 4 ] , uint8_T * o3vpgniqky ) { ipf5ube4r0
* const accn4cnket = & ( lhjbdsj2rj . rtm ) ; ksm0js2nhsy .
d0lonclty2_llw0u2ae0v = dqykr4eggmg . apmirysnvx ; ksm0js2nhsy .
kiqazg501o_jwzvbuczlb = dqykr4eggmg . fxn4ff02p2 ; ksm0js2nhsy .
di1qnpfe3a_ppxrqq0gsf = dqykr4eggmg . ollsqe4tkk [ dqykr4eggmg . nbojvdn3wx ]
; ksm0js2nhsy . bfcfvhg1yd_dhmrxtyqop = dqykr4eggmg . idji1cak4a ;
ksm0js2nhsy . kh4hdt0ale_guugdwf2m3 = dqykr4eggmg . jacbm5emdo ; ksm0js2nhsy
. cdug11nwec_ldqodwenvz = dqykr4eggmg . iha3wpkzdg ; ksm0js2nhsy .
mccpod1wka_nz4o0shxby = dqykr4eggmg . c3zfo1eioy [ dqykr4eggmg . is0fkrkenr ]
; ksm0js2nhsy . hannubgkmc_dhamdvybc1 = dqykr4eggmg . a55o5m4tjh ;
ksm0js2nhsy . awic4ozdfs_dypejvacrn = dqykr4eggmg . nuya4u3miw ; ksm0js2nhsy
. kvuyj1lakv_lxo5edjg3c = dqykr4eggmg . k0zvsd1cqm ; otjykwnhb3 ( accn4cnket
, pxdb2gu5va , ksm0js2nhsy . mccpod1wka_nz4o0shxby , ksm0js2nhsy .
awic4ozdfs_dypejvacrn , ksm0js2nhsy . kvuyj1lakv_lxo5edjg3c , ksm0js2nhsy .
hannubgkmc_dhamdvybc1 , ksm0js2nhsy . cdug11nwec_ldqodwenvz , ksm0js2nhsy .
di1qnpfe3a_ppxrqq0gsf , ksm0js2nhsy . bfcfvhg1yd_dhmrxtyqop , ksm0js2nhsy .
kh4hdt0ale_guugdwf2m3 , ksm0js2nhsy . kiqazg501o_jwzvbuczlb , ksm0js2nhsy .
d0lonclty2_llw0u2ae0v , & ksm0js2nhsy . otjykwnhb3s , & dqykr4eggmg .
otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s , & f51itwtzkqf . otjykwnhb3s ) ;
pikqq4svts [ 0 ] = ksm0js2nhsy . otjykwnhb3s . diwkkstwzv [ 0 ] ; pikqq4svts
[ 1 ] = ksm0js2nhsy . otjykwnhb3s . diwkkstwzv [ 1 ] ; pikqq4svts [ 2 ] =
ksm0js2nhsy . otjykwnhb3s . diwkkstwzv [ 2 ] ; pikqq4svts [ 3 ] = ksm0js2nhsy
. otjykwnhb3s . diwkkstwzv [ 3 ] ; * o3vpgniqky = ksm0js2nhsy . otjykwnhb3s .
n43fsoetjx ; } void flightControlSystemTID1 ( void ) { real32_T ccjxjice1c ;
__m128d tmp ; real_T ghvphapyei_e ; real_T ghvphapyei_p ; int32_T i ; int32_T
j ; int32_T tempIdx ; real32_T ekxx122qkq ; boolean_T ccazyvyhnh ; boolean_T
gwcvxlxyx3 ; boolean_T h3ykfnw3gg ; boolean_T h5popfneju ; boolean_T
k25kpsjiy2 ; boolean_T l0g24gpb1h ; boolean_T mdfiuc1csg ; boolean_T
oezkppq3k5 ; for ( j = 0 ; j < 19200 ; j ++ ) { ksm0js2nhsy . RGB [ j ] = 0U
; ksm0js2nhsy . RGB [ j + 19200 ] = 0U ; ksm0js2nhsy . RGB [ j + 38400 ] = 0U
; } rgb2hsv_tbb_uint8 ( & ksm0js2nhsy . RGB [ 0 ] , 19200.0 , & ksm0js2nhsy .
ghvphapyei_mbvzarwird [ 0 ] , true ) ; for ( j = 0 ; j <= 19198 ; j += 2 ) {
tmp = _mm_loadu_pd ( & ksm0js2nhsy . ghvphapyei_mbvzarwird [ j + 19200 ] ) ;
_mm_storeu_pd ( & ksm0js2nhsy . ghvphapyei_mbvzarwird [ j + 19200 ] ,
_mm_add_pd ( tmp , _mm_set1_pd ( 0.2 ) ) ) ; } for ( j = 0 ; j < 57600 ; j ++
) { if ( ksm0js2nhsy . ghvphapyei_mbvzarwird [ j ] > 1.0 ) { ksm0js2nhsy .
ghvphapyei_mbvzarwird [ j ] = 1.0 ; } } for ( j = 0 ; j < 19200 ; j ++ ) {
ksm0js2nhsy . d2jh3qji2a_merlcviukg = ksm0js2nhsy . ghvphapyei_mbvzarwird [ j
] ; ghvphapyei_p = ksm0js2nhsy . ghvphapyei_mbvzarwird [ j + 19200 ] ;
ghvphapyei_e = ksm0js2nhsy . ghvphapyei_mbvzarwird [ j + 38400 ] ;
ksm0js2nhsy . fhynllboz2_kkiq3xxxve [ j ] = ( ( ( ksm0js2nhsy .
d2jh3qji2a_merlcviukg >= 0.916 ) || ( ksm0js2nhsy . d2jh3qji2a_merlcviukg <=
0.101 ) ) && ( ghvphapyei_p >= 0.0 ) && ( ghvphapyei_p <= 1.0 ) && (
ghvphapyei_e >= 0.0 ) && ( ghvphapyei_e <= 1.0 ) ) ; } for ( j = 0 ; j < 40 ;
j ++ ) { for ( tempIdx = 0 ; tempIdx < 40 ; tempIdx ++ ) { ksm0js2nhsy .
j4vp20neuo_bhxxfovxdy [ tempIdx + 40 * j ] = ksm0js2nhsy .
fhynllboz2_kkiq3xxxve [ ( ( j + 59 ) * 120 + tempIdx ) + 9 ] ; } } for ( j =
0 ; j < 1600 ; j ++ ) { ksm0js2nhsy . k4xhiig3el_cxarnvbvui [ j ] =
ksm0js2nhsy . j4vp20neuo_bhxxfovxdy [ j ] ; } MWVIP_EdgeCanny_autoTh_R ( &
ksm0js2nhsy . k4xhiig3el_cxarnvbvui [ 0 ] , & mu24dhzibl1 . eio110x2j3 [ 0 ]
, & mu24dhzibl1 . pe52hrcn00 [ 0 ] , & dqykr4eggmg . l151cvw20a [ 0 ] , &
dqykr4eggmg . ddaipbjyii [ 0 ] , & ksm0js2nhsy . pcq0hcu34h [ 0 ] , &
dqykr4eggmg . ijit51fap0 [ 0 ] , & b1hr2q0zjh . P_4 , 40 , 40 , 4 ) ;
MWVIP_Hough_R ( & ksm0js2nhsy . pcq0hcu34h [ 0 ] , & ksm0js2nhsy . msog5l3bnt
[ 0 ] , & mu24dhzibl1 . kkohvvbsbe [ 0 ] , & mu24dhzibl1 . onpfjg5t2w , 40 ,
40 , 113 , 91 ) ; ccjxjice1c = ksm0js2nhsy . msog5l3bnt [ 0 ] ; tempIdx = 0 ;
for ( j = 0 ; j < 20339 ; j ++ ) { if ( ksm0js2nhsy . msog5l3bnt [ j + 1 ] >
ccjxjice1c ) { ccjxjice1c = ksm0js2nhsy . msog5l3bnt [ j + 1 ] ; tempIdx = j
+ 1 ; } } ekxx122qkq = ( real32_T ) ( ( real_T ) ( uint32_T ) ( div_s32_floor
( tempIdx , b1hr2q0zjh . P_18 [ 0 ] ) + 1 ) - b1hr2q0zjh . P_15 ) *
b1hr2q0zjh . P_19 ; dqykr4eggmg . bepi0pxnzh [ 0 ] = b1hr2q0zjh . P_1 ;
dqykr4eggmg . bepi0pxnzh [ 1 ] = b1hr2q0zjh . P_1 ; dqykr4eggmg . bepi0pxnzh
[ 2 ] = b1hr2q0zjh . P_1 ; dqykr4eggmg . kd4gpvuq4d = 1.0 - b1hr2q0zjh . P_1
; dqykr4eggmg . coagx5q5tk [ 0 ] = b1hr2q0zjh . P_2 ; dqykr4eggmg .
coagx5q5tk [ 1 ] = b1hr2q0zjh . P_2 ; dqykr4eggmg . coagx5q5tk [ 2 ] =
b1hr2q0zjh . P_2 ; dqykr4eggmg . eubxngdwfx = 1.0 - b1hr2q0zjh . P_2 ;
dqykr4eggmg . lqnetrhqrb [ 0 ] = 0.0 * b1hr2q0zjh . P_3 ; dqykr4eggmg .
lqnetrhqrb [ 1 ] = 0.0 * b1hr2q0zjh . P_3 ; dqykr4eggmg . lqnetrhqrb [ 2 ] =
0.0 * b1hr2q0zjh . P_3 ; dqykr4eggmg . p4an1zxeb3 = 1.0 - b1hr2q0zjh . P_3 ;
for ( j = 0 ; j < 19200 ; j ++ ) { ksm0js2nhsy . ifvu3rf4yt_cl54gopm0x [ j ]
= ( int8_T ) ksm0js2nhsy . fhynllboz2_kkiq3xxxve [ j ] ; } for ( j = 0 ; j <
10 ; j ++ ) { for ( tempIdx = 0 ; tempIdx < 5 ; tempIdx ++ ) { ksm0js2nhsy .
mtvj0piiv4_g1smspu5ke [ tempIdx + 5 * j ] = ksm0js2nhsy .
ifvu3rf4yt_cl54gopm0x [ ( j + 74 ) * 120 + tempIdx ] ; } } j = 0 ; for (
tempIdx = 0 ; tempIdx < 50 ; tempIdx ++ ) { j = ( int32_T ) ( ( uint32_T ) j
+ ( uint32_T ) ksm0js2nhsy . mtvj0piiv4_g1smspu5ke [ tempIdx ] ) ; }
oezkppq3k5 = ( ( uint16_T ) j > b1hr2q0zjh . P_11 ) ; for ( j = 0 ; j < 40 ;
j ++ ) { for ( tempIdx = 0 ; tempIdx < 10 ; tempIdx ++ ) { ksm0js2nhsy .
cs4qnjaabf_cv5hdgrwft [ tempIdx + 10 * j ] = ksm0js2nhsy .
ifvu3rf4yt_cl54gopm0x [ ( ( j + 59 ) * 120 + tempIdx ) + 24 ] ; } } j = 0 ;
for ( tempIdx = 0 ; tempIdx < 400 ; tempIdx ++ ) { j = ( int32_T ) ( (
uint32_T ) j + ( uint32_T ) ksm0js2nhsy . cs4qnjaabf_cv5hdgrwft [ tempIdx ] )
; } h3ykfnw3gg = ( oezkppq3k5 && ( ( uint16_T ) j < b1hr2q0zjh . P_12 ) ) ;
for ( j = 0 ; j < 10 ; j ++ ) { for ( tempIdx = 0 ; tempIdx < 10 ; tempIdx ++
) { ksm0js2nhsy . fghw2aujxx_g2mlkqadfk [ tempIdx + 10 * j ] = ksm0js2nhsy .
ifvu3rf4yt_cl54gopm0x [ ( ( j + 74 ) * 120 + tempIdx ) + 9 ] ; } } j = 0 ;
for ( tempIdx = 0 ; tempIdx < 100 ; tempIdx ++ ) { j = ( int32_T ) ( (
uint32_T ) j + ( uint32_T ) ksm0js2nhsy . fghw2aujxx_g2mlkqadfk [ tempIdx ] )
; } mdfiuc1csg = ( ( uint16_T ) j > b1hr2q0zjh . P_5 ) ; j = 0 ; for (
tempIdx = 0 ; tempIdx < 1600 ; tempIdx ++ ) { j = ( int32_T ) ( ( uint32_T )
j + ksm0js2nhsy . j4vp20neuo_bhxxfovxdy [ tempIdx ] ) ; } if ( ( uint32_T ) j
> 255U ) { j = 255 ; } gwcvxlxyx3 = ( ( uint8_T ) j > b1hr2q0zjh . P_14 ) ;
for ( j = 0 ; j < 10 ; j ++ ) { for ( tempIdx = 0 ; tempIdx < 10 ; tempIdx ++
) { ksm0js2nhsy . fghw2aujxx_g2mlkqadfk [ tempIdx + 10 * j ] = ksm0js2nhsy .
ifvu3rf4yt_cl54gopm0x [ ( ( j + 74 ) * 120 + tempIdx ) + 29 ] ; } } j = 0 ;
for ( tempIdx = 0 ; tempIdx < 100 ; tempIdx ++ ) { j = ( int32_T ) ( (
uint32_T ) j + ( uint32_T ) ksm0js2nhsy . fghw2aujxx_g2mlkqadfk [ tempIdx ] )
; } l0g24gpb1h = ( ( uint16_T ) j > b1hr2q0zjh . P_6 ) ; for ( j = 0 ; j < 10
; j ++ ) { for ( tempIdx = 0 ; tempIdx < 60 ; tempIdx ++ ) { ksm0js2nhsy .
hdj2wab0l2_pbm3vprmfu [ tempIdx + 60 * j ] = ksm0js2nhsy .
ifvu3rf4yt_cl54gopm0x [ ( ( j + 39 ) * 120 + tempIdx ) + 9 ] ; } } j = 0 ;
for ( tempIdx = 0 ; tempIdx < 600 ; tempIdx ++ ) { j = ( int32_T ) ( (
uint32_T ) j + ( uint32_T ) ksm0js2nhsy . hdj2wab0l2_pbm3vprmfu [ tempIdx ] )
; } ccazyvyhnh = ( ( uint16_T ) j > b1hr2q0zjh . P_7 ) ; for ( j = 0 ; j < 10
; j ++ ) { for ( tempIdx = 0 ; tempIdx < 60 ; tempIdx ++ ) { ksm0js2nhsy .
hdj2wab0l2_pbm3vprmfu [ tempIdx + 60 * j ] = ksm0js2nhsy .
ifvu3rf4yt_cl54gopm0x [ ( ( j + 109 ) * 120 + tempIdx ) + 9 ] ; } } j = 0 ;
for ( tempIdx = 0 ; tempIdx < 600 ; tempIdx ++ ) { j = ( int32_T ) ( (
uint32_T ) j + ( uint32_T ) ksm0js2nhsy . hdj2wab0l2_pbm3vprmfu [ tempIdx ] )
; } h5popfneju = ( ( uint16_T ) j > b1hr2q0zjh . P_8 ) ; for ( j = 0 ; j < 20
; j ++ ) { for ( tempIdx = 0 ; tempIdx < 10 ; tempIdx ++ ) { ksm0js2nhsy .
ibvkeidjbg_fqdqrf4qbc [ tempIdx + 10 * j ] = ksm0js2nhsy .
ifvu3rf4yt_cl54gopm0x [ ( ( j + 59 ) * 120 + tempIdx ) + 39 ] ; } } j = 0 ;
for ( tempIdx = 0 ; tempIdx < 200 ; tempIdx ++ ) { j = ( int32_T ) ( (
uint32_T ) j + ( uint32_T ) ksm0js2nhsy . ibvkeidjbg_fqdqrf4qbc [ tempIdx ] )
; } for ( tempIdx = 0 ; tempIdx < 20 ; tempIdx ++ ) { for ( i = 0 ; i < 10 ;
i ++ ) { ksm0js2nhsy . ibvkeidjbg_fqdqrf4qbc [ i + 10 * tempIdx ] =
ksm0js2nhsy . ifvu3rf4yt_cl54gopm0x [ ( ( tempIdx + 79 ) * 120 + i ) + 39 ] ;
} } tempIdx = 0 ; for ( i = 0 ; i < 200 ; i ++ ) { tempIdx = ( int32_T ) ( (
uint32_T ) tempIdx + ( uint32_T ) ksm0js2nhsy . ibvkeidjbg_fqdqrf4qbc [ i ] )
; } k25kpsjiy2 = ( ( ( uint16_T ) j > b1hr2q0zjh . P_9 ) || ( ( uint16_T )
tempIdx > b1hr2q0zjh . P_10 ) ) ; if ( ( uint16_T ) j > ( uint16_T ) tempIdx
) { ksm0js2nhsy . d2jh3qji2a_merlcviukg = b1hr2q0zjh . P_16 ; } else {
ksm0js2nhsy . d2jh3qji2a_merlcviukg = ( ( uint16_T ) j < ( uint16_T ) tempIdx
) ; } dqykr4eggmg . apmirysnvx = ccazyvyhnh ; dqykr4eggmg . k0zvsd1cqm =
oezkppq3k5 ; dqykr4eggmg . fxn4ff02p2 = h5popfneju ; dqykr4eggmg . ollsqe4tkk
[ dqykr4eggmg . nbojvdn3wx == 0 ] = ekxx122qkq ; dqykr4eggmg . nbojvdn3wx = (
int8_T ) ( dqykr4eggmg . nbojvdn3wx == 0 ) ; dqykr4eggmg . idji1cak4a =
mdfiuc1csg ; dqykr4eggmg . jacbm5emdo = gwcvxlxyx3 ; dqykr4eggmg . iha3wpkzdg
= l0g24gpb1h ; dqykr4eggmg . c3zfo1eioy [ dqykr4eggmg . is0fkrkenr == 0 ] =
ksm0js2nhsy . d2jh3qji2a_merlcviukg ; dqykr4eggmg . is0fkrkenr = ( int8_T ) (
dqykr4eggmg . is0fkrkenr == 0 ) ; dqykr4eggmg . a55o5m4tjh = k25kpsjiy2 ;
dqykr4eggmg . nuya4u3miw = h3ykfnw3gg ; } void flightControlSystemTID2 ( void
) { otjykwnhb3TID2 ( & ksm0js2nhsy . otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s
) ; } void pyvd4pdf3iTID0 ( void ) { lsjhvu4egy ( & ksm0js2nhsy . otjykwnhb3s
, & dqykr4eggmg . otjykwnhb3s , & b1hr2q0zjh . otjykwnhb3s ) ; } void
pyvd4pdf3iTID1 ( void ) { } void m0l5se3ogg ( void ) { ipf5ube4r0 * const
accn4cnket = & ( lhjbdsj2rj . rtm ) ; eyt3piuhqz ( accn4cnket , & dqykr4eggmg
. otjykwnhb3s ) ; } void o2f5l50guo ( void ) { ipf5ube4r0 * const accn4cnket
= & ( lhjbdsj2rj . rtm ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( accn4cnket -> _mdlRefSfcnS , "flightControlSystem" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void f4qzdbbxmw (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , int_T
mdlref_TID2 , void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo *
rt_ParentMMI , const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T
rt_CSTATEIdx ) { ipf5ube4r0 * const accn4cnket = & ( lhjbdsj2rj . rtm ) ;
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; b1hr2q0zjh . otjykwnhb3s . P_56 =
rtMinusInf ; ( void ) memset ( ( void * ) accn4cnket , 0 , sizeof (
ipf5ube4r0 ) ) ; nmtwkzsqud [ 0 ] = mdlref_TID0 ; nmtwkzsqud [ 1 ] =
mdlref_TID1 ; nmtwkzsqud [ 2 ] = mdlref_TID2 ; accn4cnket -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( accn4cnket -> _mdlRefSfcnS , "flightControlSystem" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } ( void ) memset ( ( ( void *
) & ksm0js2nhsy ) , 0 , sizeof ( ircitwx3zdm ) ) ; { int32_T i ; for ( i = 0
; i < 20340 ; i ++ ) { ksm0js2nhsy . msog5l3bnt [ i ] = 0.0F ; } for ( i = 0
; i < 6 ; i ++ ) { ksm0js2nhsy . otjykwnhb3s . fqlqwbd5is [ i ] = 0.0F ; }
for ( i = 0 ; i < 16 ; i ++ ) { ksm0js2nhsy . otjykwnhb3s . c0hr2x2r2u [ i ]
= 0.0F ; } for ( i = 0 ; i < 8 ; i ++ ) { ksm0js2nhsy . otjykwnhb3s .
pw0mcsqzmb [ i ] = 0.0F ; } for ( i = 0 ; i < 8 ; i ++ ) { ksm0js2nhsy .
otjykwnhb3s . blc1o30hbu [ i ] = 0.0F ; } for ( i = 0 ; i < 16 ; i ++ ) {
ksm0js2nhsy . otjykwnhb3s . eq1h3gdlhw [ i ] = 0.0F ; } ksm0js2nhsy .
otjykwnhb3s . pjzxds4w1y = 0.0 ; ksm0js2nhsy . otjykwnhb3s . ctkxulxqbp [ 0 ]
= 0.0 ; ksm0js2nhsy . otjykwnhb3s . ctkxulxqbp [ 1 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . nwc2w0behm = 0.0 ; ksm0js2nhsy . otjykwnhb3s . mg5gm1rrwc [ 0 ]
= 0.0 ; ksm0js2nhsy . otjykwnhb3s . mg5gm1rrwc [ 1 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . mg5gm1rrwc [ 2 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . bb5gw3vwdf
[ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . bb5gw3vwdf [ 1 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . a3etzmu5xt [ 0 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . a3etzmu5xt [ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . e40yrpzyuq
[ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . e40yrpzyuq [ 1 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . an1r03ms1q [ 0 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . an1r03ms1q [ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . an1r03ms1q
[ 2 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . an1r03ms1q [ 3 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . lesgjjhdse [ 0 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . lesgjjhdse [ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . cedlzypbo1
[ 0 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . cedlzypbo1 [ 1 ] = 0.0 ;
ksm0js2nhsy . otjykwnhb3s . bdybuugoyn [ 0 ] = 0.0 ; ksm0js2nhsy .
otjykwnhb3s . bdybuugoyn [ 1 ] = 0.0 ; ksm0js2nhsy . otjykwnhb3s . gnmjshxnpv
= 0.0F ; ksm0js2nhsy . otjykwnhb3s . ja34uxmhnw = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . h2w3fyzeix = 0.0F ; ksm0js2nhsy . otjykwnhb3s . dc3qn403cz =
0.0F ; ksm0js2nhsy . otjykwnhb3s . blgzljheti = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . oa13vjflhr [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
oa13vjflhr [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . gzpfxw0cb0 [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . gzpfxw0cb0 [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . awk13lcnc4 [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
awk13lcnc4 [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . awk13lcnc4 [ 2 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . awk13lcnc4 [ 3 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . jlabr4qxfo = 0.0F ; ksm0js2nhsy . otjykwnhb3s . mjj0hsvmxi [ 0
] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . mjj0hsvmxi [ 1 ] = 0.0F ; ksm0js2nhsy
. otjykwnhb3s . mxtb45j1vs [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
mxtb45j1vs [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . ca22pxn2ik [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . ca22pxn2ik [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . eaw04hnn2p = 0.0F ; ksm0js2nhsy . otjykwnhb3s . diwkkstwzv [ 0
] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . diwkkstwzv [ 1 ] = 0.0F ; ksm0js2nhsy
. otjykwnhb3s . diwkkstwzv [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
diwkkstwzv [ 3 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . ggkmgq4uf0 [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . ggkmgq4uf0 [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . nfeaax1ctn [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
nfeaax1ctn [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . iedrhj0ljm [ 0 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . iedrhj0ljm [ 1 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . iiejrobht0 [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
iiejrobht0 [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . iiejrobht0 [ 2 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . iiejrobht0 [ 3 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . br1hdqrr4b [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
br1hdqrr4b [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . br1hdqrr4b [ 2 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . plrk4i0s0t [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . plrk4i0s0t [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
g0omvaowkd [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . g0omvaowkd [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . lhkppeq5nc [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . lhkppeq5nc [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
lhkppeq5nc [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . lhkppeq5nc [ 3 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . kkdshod4h5 [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . kkdshod4h5 [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
dkw510cvug [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . dkw510cvug [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . dts03pec5w [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . dts03pec5w [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
hqeuvdzx1l [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . hqeuvdzx1l [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . hqeuvdzx1l [ 2 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . hqeuvdzx1l [ 3 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
fchjjv4ub4 [ 0 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . fchjjv4ub4 [ 1 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . d2r1shdz5z [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . d2r1shdz5z [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
d2r1shdz5z [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . d2r1shdz5z [ 3 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . bev5geht2k [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . bev5geht2k [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
bev5geht2k [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . bev5geht2k [ 3 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . ofzk4yqaty [ 0 ] = 0.0F ; ksm0js2nhsy .
otjykwnhb3s . ofzk4yqaty [ 1 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
ofzk4yqaty [ 2 ] = 0.0F ; ksm0js2nhsy . otjykwnhb3s . ofzk4yqaty [ 3 ] = 0.0F
; ksm0js2nhsy . otjykwnhb3s . muuoe5y0sn = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
jikbjddfc3 = 0.0F ; ksm0js2nhsy . otjykwnhb3s . pgfs04fsei = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . bqcvsssbyu = 0.0F ; ksm0js2nhsy . otjykwnhb3s .
hqabpva4ig = 0.0F ; ksm0js2nhsy . otjykwnhb3s . ipbtas1tys . higb232ks1 [ 0 ]
= 0.0F ; ksm0js2nhsy . otjykwnhb3s . ipbtas1tys . higb232ks1 [ 1 ] = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . bm3dpymkhz . n4u2gwmeck [ 0 ] = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . bm3dpymkhz . n4u2gwmeck [ 1 ] = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . ifzbhw4mrws . higb232ks1 [ 0 ] = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . ifzbhw4mrws . higb232ks1 [ 1 ] = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . phrpuocqmvu . n4u2gwmeck [ 0 ] = 0.0F ;
ksm0js2nhsy . otjykwnhb3s . phrpuocqmvu . n4u2gwmeck [ 1 ] = 0.0F ; } ( void
) memset ( ( void * ) & dqykr4eggmg , 0 , sizeof ( nllkaxiwhzw ) ) ;
dqykr4eggmg . c3zfo1eioy [ 0 ] = 0.0 ; dqykr4eggmg . c3zfo1eioy [ 1 ] = 0.0 ;
dqykr4eggmg . bepi0pxnzh [ 0 ] = 0.0 ; dqykr4eggmg . bepi0pxnzh [ 1 ] = 0.0 ;
dqykr4eggmg . bepi0pxnzh [ 2 ] = 0.0 ; dqykr4eggmg . kd4gpvuq4d = 0.0 ; {
int32_T i ; for ( i = 0 ; i < 15 ; i ++ ) { dqykr4eggmg . coagx5q5tk [ i ] =
0.0 ; } } dqykr4eggmg . eubxngdwfx = 0.0 ; { int32_T i ; for ( i = 0 ; i < 15
; i ++ ) { dqykr4eggmg . lqnetrhqrb [ i ] = 0.0 ; } } dqykr4eggmg .
p4an1zxeb3 = 0.0 ; dqykr4eggmg . ollsqe4tkk [ 0 ] = 0.0F ; dqykr4eggmg .
ollsqe4tkk [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . mi4mocbazh = 0.0 ;
dqykr4eggmg . otjykwnhb3s . mtonzezz2z [ 0 ] = 0.0 ; dqykr4eggmg .
otjykwnhb3s . mtonzezz2z [ 1 ] = 0.0 ; dqykr4eggmg . otjykwnhb3s . ddv3ztj2wp
[ 0 ] = 0.0 ; dqykr4eggmg . otjykwnhb3s . ddv3ztj2wp [ 1 ] = 0.0 ;
dqykr4eggmg . otjykwnhb3s . ddv3ztj2wp [ 2 ] = 0.0 ; dqykr4eggmg .
otjykwnhb3s . bw2ribqmwm = 0.0 ; dqykr4eggmg . otjykwnhb3s . f2ynnmexgv = 0.0
; dqykr4eggmg . otjykwnhb3s . oypkwoqg1d = 0.0 ; dqykr4eggmg . otjykwnhb3s .
b3fmbw5stg [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . b3fmbw5stg [ 1 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . aq2aymvaio [ 0 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . aq2aymvaio [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
aq2aymvaio [ 2 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . dzwopklw3c = 0.0F ; {
int32_T i ; for ( i = 0 ; i < 15 ; i ++ ) { dqykr4eggmg . otjykwnhb3s .
d4fp3a2mpz [ i ] = 0.0F ; } } dqykr4eggmg . otjykwnhb3s . fl0vv44tbs [ 0 ] =
0.0F ; dqykr4eggmg . otjykwnhb3s . fl0vv44tbs [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . as5a0ikbk1 [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
as5a0ikbk1 [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . ncgo1wegzg = 0.0F ;
dqykr4eggmg . otjykwnhb3s . mirtkskmtr = 0.0F ; { int32_T i ; for ( i = 0 ; i
< 5 ; i ++ ) { dqykr4eggmg . otjykwnhb3s . jduomia1pb [ i ] = 0.0F ; } }
dqykr4eggmg . otjykwnhb3s . od5c00niot [ 0 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . od5c00niot [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
od5c00niot [ 2 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . od5c00niot [ 3 ] = 0.0F
; { int32_T i ; for ( i = 0 ; i < 10 ; i ++ ) { dqykr4eggmg . otjykwnhb3s .
dqfv1m130o [ i ] = 0.0F ; } } dqykr4eggmg . otjykwnhb3s . meognsjf1t [ 0 ] =
0.0F ; dqykr4eggmg . otjykwnhb3s . meognsjf1t [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . gcgpru4rcb [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
gcgpru4rcb [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . peklmaellz [ 0 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . peklmaellz [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . bsetqjfri4 = 0.0F ; dqykr4eggmg . otjykwnhb3s . dsjbzv2lh4 [ 0
] = 0.0F ; dqykr4eggmg . otjykwnhb3s . dsjbzv2lh4 [ 1 ] = 0.0F ; dqykr4eggmg
. otjykwnhb3s . gixvkpnpus [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
gixvkpnpus [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . ow5xb5ovt0 [ 0 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . ow5xb5ovt0 [ 1 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . krs1cvkxzk [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
krs1cvkxzk [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . c4kiksmhh2 = 0.0F ;
dqykr4eggmg . otjykwnhb3s . orkq4iljgu = 0.0F ; dqykr4eggmg . otjykwnhb3s .
b1nmhkw4zo = 0.0F ; dqykr4eggmg . otjykwnhb3s . n0mydijbcx = 0.0F ;
dqykr4eggmg . otjykwnhb3s . iwg03owvar = 0.0F ; dqykr4eggmg . otjykwnhb3s .
mf2pp40f5v [ 0 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s . mf2pp40f5v [ 1 ] = 0.0F
; dqykr4eggmg . otjykwnhb3s . pwlp5beuqs [ 0 ] = 0.0F ; dqykr4eggmg .
otjykwnhb3s . pwlp5beuqs [ 1 ] = 0.0F ; dqykr4eggmg . otjykwnhb3s .
c4slvrb3tr = 0.0F ; flightControlSystem_InitializeDataMapInfo ( accn4cnket ,
sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && (
rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( accn4cnket -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
accn4cnket -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( accn4cnket -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } f51itwtzkqf . otjykwnhb3s . b1rw3rggh2 =
UNINITIALIZED_ZCSIG ; } void mr_flightControlSystem_MdlInfoRegFcn ( SimStruct
* mdlRefSfcnS , char_T * modelName , int_T * retVal ) { * retVal = 0 ; {
boolean_T regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo (
mdlRefSfcnS , & regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } *
retVal = 0 ; ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName ,
rtMdlInfo_flightControlSystem , 208 ) ; * retVal = 1 ; } static void
mr_flightControlSystem_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) ; static void
mr_flightControlSystem_cacheDataAsMxArray ( mxArray * destArray , mwIndex i ,
int j , const void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_flightControlSystem_restoreDataFromMxArray ( void *
destData , const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ;
static void mr_flightControlSystem_restoreDataFromMxArray ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_flightControlSystem_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) ; static void
mr_flightControlSystem_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex
i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( real_T ) bitVal ) ) ; } static uint_T
mr_flightControlSystem_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_flightControlSystem_extractBitFieldFromMxArray ( const mxArray * srcArray
, mwIndex i , int j , uint_T numBits ) { const uint_T varVal = ( uint_T )
mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return varVal & ( (
1u << numBits ) - 1u ) ; } static void
mr_flightControlSystem_cacheDataToMxArrayWithOffset ( mxArray * destArray ,
mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes )
; static void mr_flightControlSystem_cacheDataToMxArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , const void * srcData ,
size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_flightControlSystem_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_flightControlSystem_restoreDataFromMxArrayWithOffset ( void * destData ,
const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_flightControlSystem_cacheBitFieldToCellArrayWithOffset ( mxArray *
destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( real_T ) fieldVal ) ) ; } static uint_T
mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset ( const mxArray
* srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ; static
uint_T mr_flightControlSystem_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_flightControlSystem_GetDWork ( ) {
static const char_T * ssDWFieldNames [ 3 ] = { "ksm0js2nhsy" , "dqykr4eggmg"
, "f51itwtzkqf" , } ; mxArray * ssDW = mxCreateStructMatrix ( 1 , 1 , 3 ,
ssDWFieldNames ) ; mr_flightControlSystem_cacheDataAsMxArray ( ssDW , 0 , 0 ,
( const void * ) & ( ksm0js2nhsy ) , sizeof ( ksm0js2nhsy ) ) ; { static
const char_T * rtdwDataFieldNames [ 91 ] = { "dqykr4eggmg.l151cvw20a" ,
"dqykr4eggmg.ddaipbjyii" , "dqykr4eggmg.ijit51fap0" ,
"dqykr4eggmg.c3zfo1eioy" , "dqykr4eggmg.bepi0pxnzh" ,
"dqykr4eggmg.kd4gpvuq4d" , "dqykr4eggmg.coagx5q5tk" ,
"dqykr4eggmg.eubxngdwfx" , "dqykr4eggmg.lqnetrhqrb" ,
"dqykr4eggmg.p4an1zxeb3" , "dqykr4eggmg.ollsqe4tkk" ,
"dqykr4eggmg.l152eirbdu" , "dqykr4eggmg.nbojvdn3wx" ,
"dqykr4eggmg.is0fkrkenr" , "dqykr4eggmg.apmirysnvx" ,
"dqykr4eggmg.fxn4ff02p2" , "dqykr4eggmg.idji1cak4a" ,
"dqykr4eggmg.jacbm5emdo" , "dqykr4eggmg.iha3wpkzdg" ,
"dqykr4eggmg.a55o5m4tjh" , "dqykr4eggmg.nuya4u3miw" ,
"dqykr4eggmg.k0zvsd1cqm" , "dqykr4eggmg.jjrfotind4" ,
"dqykr4eggmg.otjykwnhb3s.mi4mocbazh" , "dqykr4eggmg.otjykwnhb3s.mtonzezz2z" ,
"dqykr4eggmg.otjykwnhb3s.ddv3ztj2wp" , "dqykr4eggmg.otjykwnhb3s.bw2ribqmwm" ,
"dqykr4eggmg.otjykwnhb3s.f2ynnmexgv" , "dqykr4eggmg.otjykwnhb3s.oypkwoqg1d" ,
"dqykr4eggmg.otjykwnhb3s.b3fmbw5stg" , "dqykr4eggmg.otjykwnhb3s.aq2aymvaio" ,
"dqykr4eggmg.otjykwnhb3s.dzwopklw3c" , "dqykr4eggmg.otjykwnhb3s.d4fp3a2mpz" ,
"dqykr4eggmg.otjykwnhb3s.fl0vv44tbs" , "dqykr4eggmg.otjykwnhb3s.as5a0ikbk1" ,
"dqykr4eggmg.otjykwnhb3s.ncgo1wegzg" , "dqykr4eggmg.otjykwnhb3s.mirtkskmtr" ,
"dqykr4eggmg.otjykwnhb3s.jduomia1pb" , "dqykr4eggmg.otjykwnhb3s.od5c00niot" ,
"dqykr4eggmg.otjykwnhb3s.dqfv1m130o" , "dqykr4eggmg.otjykwnhb3s.meognsjf1t" ,
"dqykr4eggmg.otjykwnhb3s.gcgpru4rcb" , "dqykr4eggmg.otjykwnhb3s.peklmaellz" ,
"dqykr4eggmg.otjykwnhb3s.bsetqjfri4" , "dqykr4eggmg.otjykwnhb3s.dsjbzv2lh4" ,
"dqykr4eggmg.otjykwnhb3s.gixvkpnpus" , "dqykr4eggmg.otjykwnhb3s.ow5xb5ovt0" ,
"dqykr4eggmg.otjykwnhb3s.krs1cvkxzk" , "dqykr4eggmg.otjykwnhb3s.c4kiksmhh2" ,
"dqykr4eggmg.otjykwnhb3s.bbkjtf4kuy" , "dqykr4eggmg.otjykwnhb3s.l3lcputuyl" ,
"dqykr4eggmg.otjykwnhb3s.pjgu33zeph" , "dqykr4eggmg.otjykwnhb3s.dxm3w2i52x" ,
"dqykr4eggmg.otjykwnhb3s.orkq4iljgu" , "dqykr4eggmg.otjykwnhb3s.b1nmhkw4zo" ,
"dqykr4eggmg.otjykwnhb3s.n0mydijbcx" , "dqykr4eggmg.otjykwnhb3s.iwg03owvar" ,
"dqykr4eggmg.otjykwnhb3s.mf2pp40f5v" , "dqykr4eggmg.otjykwnhb3s.pwlp5beuqs" ,
"dqykr4eggmg.otjykwnhb3s.c4slvrb3tr" , "dqykr4eggmg.otjykwnhb3s.gaxgdudnvc" ,
"dqykr4eggmg.otjykwnhb3s.dq5lalhp1e" , "dqykr4eggmg.otjykwnhb3s.fpr1qi0oiw" ,
"dqykr4eggmg.otjykwnhb3s.klyrn0mwhb" , "dqykr4eggmg.otjykwnhb3s.mfifybuxty" ,
"dqykr4eggmg.otjykwnhb3s.a1oodzfxvv" , "dqykr4eggmg.otjykwnhb3s.mgysgsd2g4" ,
"dqykr4eggmg.otjykwnhb3s.idn2v5d33m" , "dqykr4eggmg.otjykwnhb3s.ibnsbzvyrn" ,
"dqykr4eggmg.otjykwnhb3s.jv32slkoka" , "dqykr4eggmg.otjykwnhb3s.de4yc1bkky" ,
"dqykr4eggmg.otjykwnhb3s.jd3dqtmo2p" , "dqykr4eggmg.otjykwnhb3s.f1jy25gy04" ,
"dqykr4eggmg.otjykwnhb3s.gdn4qfzvsk" , "dqykr4eggmg.otjykwnhb3s.cqi2pi21ow" ,
"dqykr4eggmg.otjykwnhb3s.kh1khihcrt" , "dqykr4eggmg.otjykwnhb3s.iftedegxuv" ,
"dqykr4eggmg.otjykwnhb3s.g4zcogq4xi" ,
"dqykr4eggmg.otjykwnhb3s.ipbtas1tys.ley0an2uip" ,
"dqykr4eggmg.otjykwnhb3s.ipbtas1tys.njk4w5jozv" ,
"dqykr4eggmg.otjykwnhb3s.bm3dpymkhz.mkkaskumzr" ,
"dqykr4eggmg.otjykwnhb3s.bm3dpymkhz.jhr0womnye" ,
"dqykr4eggmg.otjykwnhb3s.ifzbhw4mrws.ley0an2uip" ,
"dqykr4eggmg.otjykwnhb3s.ifzbhw4mrws.njk4w5jozv" ,
"dqykr4eggmg.otjykwnhb3s.phrpuocqmvu.mkkaskumzr" ,
"dqykr4eggmg.otjykwnhb3s.phrpuocqmvu.jhr0womnye" ,
"dqykr4eggmg.otjykwnhb3s.ciy1c2o0rv.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.jvbbqhrajh.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.clwiujjdqo.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.acfz1zxm4t.fau3qf03xm" ,
"dqykr4eggmg.otjykwnhb3s.ghadbep3bbv.fau3qf03xm" , } ; mxArray * rtdwData =
mxCreateStructMatrix ( 1 , 1 , 91 , rtdwDataFieldNames ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 0 , ( const void *
) & ( dqykr4eggmg . l151cvw20a ) , sizeof ( dqykr4eggmg . l151cvw20a ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 1 , ( const void *
) & ( dqykr4eggmg . ddaipbjyii ) , sizeof ( dqykr4eggmg . ddaipbjyii ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 2 , ( const void *
) & ( dqykr4eggmg . ijit51fap0 ) , sizeof ( dqykr4eggmg . ijit51fap0 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 3 , ( const void *
) & ( dqykr4eggmg . c3zfo1eioy ) , sizeof ( dqykr4eggmg . c3zfo1eioy ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 4 , ( const void *
) & ( dqykr4eggmg . bepi0pxnzh ) , sizeof ( dqykr4eggmg . bepi0pxnzh ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 5 , ( const void *
) & ( dqykr4eggmg . kd4gpvuq4d ) , sizeof ( dqykr4eggmg . kd4gpvuq4d ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 6 , ( const void *
) & ( dqykr4eggmg . coagx5q5tk ) , sizeof ( dqykr4eggmg . coagx5q5tk ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 7 , ( const void *
) & ( dqykr4eggmg . eubxngdwfx ) , sizeof ( dqykr4eggmg . eubxngdwfx ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 8 , ( const void *
) & ( dqykr4eggmg . lqnetrhqrb ) , sizeof ( dqykr4eggmg . lqnetrhqrb ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 9 , ( const void *
) & ( dqykr4eggmg . p4an1zxeb3 ) , sizeof ( dqykr4eggmg . p4an1zxeb3 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 10 , ( const void
* ) & ( dqykr4eggmg . ollsqe4tkk ) , sizeof ( dqykr4eggmg . ollsqe4tkk ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 11 , ( const void
* ) & ( dqykr4eggmg . l152eirbdu ) , sizeof ( dqykr4eggmg . l152eirbdu ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 12 , ( const void
* ) & ( dqykr4eggmg . nbojvdn3wx ) , sizeof ( dqykr4eggmg . nbojvdn3wx ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 13 , ( const void
* ) & ( dqykr4eggmg . is0fkrkenr ) , sizeof ( dqykr4eggmg . is0fkrkenr ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 14 , ( const void
* ) & ( dqykr4eggmg . apmirysnvx ) , sizeof ( dqykr4eggmg . apmirysnvx ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 15 , ( const void
* ) & ( dqykr4eggmg . fxn4ff02p2 ) , sizeof ( dqykr4eggmg . fxn4ff02p2 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 16 , ( const void
* ) & ( dqykr4eggmg . idji1cak4a ) , sizeof ( dqykr4eggmg . idji1cak4a ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 17 , ( const void
* ) & ( dqykr4eggmg . jacbm5emdo ) , sizeof ( dqykr4eggmg . jacbm5emdo ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 18 , ( const void
* ) & ( dqykr4eggmg . iha3wpkzdg ) , sizeof ( dqykr4eggmg . iha3wpkzdg ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 19 , ( const void
* ) & ( dqykr4eggmg . a55o5m4tjh ) , sizeof ( dqykr4eggmg . a55o5m4tjh ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 20 , ( const void
* ) & ( dqykr4eggmg . nuya4u3miw ) , sizeof ( dqykr4eggmg . nuya4u3miw ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 21 , ( const void
* ) & ( dqykr4eggmg . k0zvsd1cqm ) , sizeof ( dqykr4eggmg . k0zvsd1cqm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 22 , ( const void
* ) & ( dqykr4eggmg . jjrfotind4 ) , sizeof ( dqykr4eggmg . jjrfotind4 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 23 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . mi4mocbazh ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . mi4mocbazh ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 24 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
mtonzezz2z ) , sizeof ( dqykr4eggmg . otjykwnhb3s . mtonzezz2z ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 25 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ddv3ztj2wp ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . ddv3ztj2wp ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 26 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
bw2ribqmwm ) , sizeof ( dqykr4eggmg . otjykwnhb3s . bw2ribqmwm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 27 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . f2ynnmexgv ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . f2ynnmexgv ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 28 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
oypkwoqg1d ) , sizeof ( dqykr4eggmg . otjykwnhb3s . oypkwoqg1d ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 29 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . b3fmbw5stg ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . b3fmbw5stg ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 30 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
aq2aymvaio ) , sizeof ( dqykr4eggmg . otjykwnhb3s . aq2aymvaio ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 31 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . dzwopklw3c ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . dzwopklw3c ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 32 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
d4fp3a2mpz ) , sizeof ( dqykr4eggmg . otjykwnhb3s . d4fp3a2mpz ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 33 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . fl0vv44tbs ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . fl0vv44tbs ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 34 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
as5a0ikbk1 ) , sizeof ( dqykr4eggmg . otjykwnhb3s . as5a0ikbk1 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 35 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ncgo1wegzg ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . ncgo1wegzg ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 36 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
mirtkskmtr ) , sizeof ( dqykr4eggmg . otjykwnhb3s . mirtkskmtr ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 37 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . jduomia1pb ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . jduomia1pb ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 38 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
od5c00niot ) , sizeof ( dqykr4eggmg . otjykwnhb3s . od5c00niot ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 39 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . dqfv1m130o ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . dqfv1m130o ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 40 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
meognsjf1t ) , sizeof ( dqykr4eggmg . otjykwnhb3s . meognsjf1t ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 41 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . gcgpru4rcb ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . gcgpru4rcb ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 42 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
peklmaellz ) , sizeof ( dqykr4eggmg . otjykwnhb3s . peklmaellz ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 43 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . bsetqjfri4 ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . bsetqjfri4 ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 44 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
dsjbzv2lh4 ) , sizeof ( dqykr4eggmg . otjykwnhb3s . dsjbzv2lh4 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 45 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . gixvkpnpus ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . gixvkpnpus ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 46 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
ow5xb5ovt0 ) , sizeof ( dqykr4eggmg . otjykwnhb3s . ow5xb5ovt0 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 47 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . krs1cvkxzk ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . krs1cvkxzk ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 48 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
c4kiksmhh2 ) , sizeof ( dqykr4eggmg . otjykwnhb3s . c4kiksmhh2 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 49 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . bbkjtf4kuy ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . bbkjtf4kuy ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 50 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
l3lcputuyl ) , sizeof ( dqykr4eggmg . otjykwnhb3s . l3lcputuyl ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 51 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . pjgu33zeph ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . pjgu33zeph ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 52 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
dxm3w2i52x ) , sizeof ( dqykr4eggmg . otjykwnhb3s . dxm3w2i52x ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 53 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . orkq4iljgu ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . orkq4iljgu ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 54 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
b1nmhkw4zo ) , sizeof ( dqykr4eggmg . otjykwnhb3s . b1nmhkw4zo ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 55 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . n0mydijbcx ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . n0mydijbcx ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 56 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
iwg03owvar ) , sizeof ( dqykr4eggmg . otjykwnhb3s . iwg03owvar ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 57 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . mf2pp40f5v ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . mf2pp40f5v ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 58 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
pwlp5beuqs ) , sizeof ( dqykr4eggmg . otjykwnhb3s . pwlp5beuqs ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 59 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . c4slvrb3tr ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . c4slvrb3tr ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 60 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
gaxgdudnvc ) , sizeof ( dqykr4eggmg . otjykwnhb3s . gaxgdudnvc ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 61 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . dq5lalhp1e ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . dq5lalhp1e ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 62 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
fpr1qi0oiw ) , sizeof ( dqykr4eggmg . otjykwnhb3s . fpr1qi0oiw ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 63 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . klyrn0mwhb ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . klyrn0mwhb ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 64 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
mfifybuxty ) , sizeof ( dqykr4eggmg . otjykwnhb3s . mfifybuxty ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 65 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . a1oodzfxvv ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . a1oodzfxvv ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 66 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
mgysgsd2g4 ) , sizeof ( dqykr4eggmg . otjykwnhb3s . mgysgsd2g4 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 67 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . idn2v5d33m ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . idn2v5d33m ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 68 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
ibnsbzvyrn ) , sizeof ( dqykr4eggmg . otjykwnhb3s . ibnsbzvyrn ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 69 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . jv32slkoka ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . jv32slkoka ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 70 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
de4yc1bkky ) , sizeof ( dqykr4eggmg . otjykwnhb3s . de4yc1bkky ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 71 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . jd3dqtmo2p ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . jd3dqtmo2p ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 72 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
f1jy25gy04 ) , sizeof ( dqykr4eggmg . otjykwnhb3s . f1jy25gy04 ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 73 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . gdn4qfzvsk ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . gdn4qfzvsk ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 74 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
cqi2pi21ow ) , sizeof ( dqykr4eggmg . otjykwnhb3s . cqi2pi21ow ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 75 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . kh1khihcrt ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . kh1khihcrt ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 76 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
iftedegxuv ) , sizeof ( dqykr4eggmg . otjykwnhb3s . iftedegxuv ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 77 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . g4zcogq4xi ) , sizeof ( dqykr4eggmg .
otjykwnhb3s . g4zcogq4xi ) ) ; mr_flightControlSystem_cacheDataAsMxArray (
rtdwData , 0 , 78 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s .
ipbtas1tys . ley0an2uip ) , sizeof ( dqykr4eggmg . otjykwnhb3s . ipbtas1tys .
ley0an2uip ) ) ; mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 ,
79 , ( const void * ) & ( dqykr4eggmg . otjykwnhb3s . ipbtas1tys . njk4w5jozv
) , sizeof ( dqykr4eggmg . otjykwnhb3s . ipbtas1tys . njk4w5jozv ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 80 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . mkkaskumzr ) , sizeof (
dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . mkkaskumzr ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 81 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . jhr0womnye ) , sizeof (
dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . jhr0womnye ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 82 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . ley0an2uip ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . ley0an2uip ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 83 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . njk4w5jozv ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . njk4w5jozv ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 84 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . mkkaskumzr ) , sizeof (
dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . mkkaskumzr ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 85 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . jhr0womnye ) , sizeof (
dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . jhr0womnye ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 86 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 87 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 88 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . clwiujjdqo . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . clwiujjdqo . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 89 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) ) ;
mr_flightControlSystem_cacheDataAsMxArray ( rtdwData , 0 , 90 , ( const void
* ) & ( dqykr4eggmg . otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) , sizeof (
dqykr4eggmg . otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) ) ; mxSetFieldByNumber
( ssDW , 0 , 1 , rtdwData ) ; } mr_flightControlSystem_cacheDataAsMxArray (
ssDW , 0 , 2 , ( const void * ) & ( f51itwtzkqf ) , sizeof ( f51itwtzkqf ) )
; return ssDW ; } void mr_flightControlSystem_SetDWork ( const mxArray * ssDW
) { ( void ) ssDW ; mr_flightControlSystem_restoreDataFromMxArray ( ( void *
) & ( ksm0js2nhsy ) , ssDW , 0 , 0 , sizeof ( ksm0js2nhsy ) ) ; { const
mxArray * rtdwData = mxGetFieldByNumber ( ssDW , 0 , 1 ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
l151cvw20a ) , rtdwData , 0 , 0 , sizeof ( dqykr4eggmg . l151cvw20a ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
ddaipbjyii ) , rtdwData , 0 , 1 , sizeof ( dqykr4eggmg . ddaipbjyii ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
ijit51fap0 ) , rtdwData , 0 , 2 , sizeof ( dqykr4eggmg . ijit51fap0 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
c3zfo1eioy ) , rtdwData , 0 , 3 , sizeof ( dqykr4eggmg . c3zfo1eioy ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
bepi0pxnzh ) , rtdwData , 0 , 4 , sizeof ( dqykr4eggmg . bepi0pxnzh ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
kd4gpvuq4d ) , rtdwData , 0 , 5 , sizeof ( dqykr4eggmg . kd4gpvuq4d ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
coagx5q5tk ) , rtdwData , 0 , 6 , sizeof ( dqykr4eggmg . coagx5q5tk ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
eubxngdwfx ) , rtdwData , 0 , 7 , sizeof ( dqykr4eggmg . eubxngdwfx ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
lqnetrhqrb ) , rtdwData , 0 , 8 , sizeof ( dqykr4eggmg . lqnetrhqrb ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
p4an1zxeb3 ) , rtdwData , 0 , 9 , sizeof ( dqykr4eggmg . p4an1zxeb3 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
ollsqe4tkk ) , rtdwData , 0 , 10 , sizeof ( dqykr4eggmg . ollsqe4tkk ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
l152eirbdu ) , rtdwData , 0 , 11 , sizeof ( dqykr4eggmg . l152eirbdu ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
nbojvdn3wx ) , rtdwData , 0 , 12 , sizeof ( dqykr4eggmg . nbojvdn3wx ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
is0fkrkenr ) , rtdwData , 0 , 13 , sizeof ( dqykr4eggmg . is0fkrkenr ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
apmirysnvx ) , rtdwData , 0 , 14 , sizeof ( dqykr4eggmg . apmirysnvx ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
fxn4ff02p2 ) , rtdwData , 0 , 15 , sizeof ( dqykr4eggmg . fxn4ff02p2 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
idji1cak4a ) , rtdwData , 0 , 16 , sizeof ( dqykr4eggmg . idji1cak4a ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
jacbm5emdo ) , rtdwData , 0 , 17 , sizeof ( dqykr4eggmg . jacbm5emdo ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
iha3wpkzdg ) , rtdwData , 0 , 18 , sizeof ( dqykr4eggmg . iha3wpkzdg ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
a55o5m4tjh ) , rtdwData , 0 , 19 , sizeof ( dqykr4eggmg . a55o5m4tjh ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
nuya4u3miw ) , rtdwData , 0 , 20 , sizeof ( dqykr4eggmg . nuya4u3miw ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
k0zvsd1cqm ) , rtdwData , 0 , 21 , sizeof ( dqykr4eggmg . k0zvsd1cqm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
jjrfotind4 ) , rtdwData , 0 , 22 , sizeof ( dqykr4eggmg . jjrfotind4 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . mi4mocbazh ) , rtdwData , 0 , 23 , sizeof ( dqykr4eggmg .
otjykwnhb3s . mi4mocbazh ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . mtonzezz2z ) , rtdwData , 0 , 24
, sizeof ( dqykr4eggmg . otjykwnhb3s . mtonzezz2z ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ddv3ztj2wp ) , rtdwData , 0 , 25 , sizeof ( dqykr4eggmg .
otjykwnhb3s . ddv3ztj2wp ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . bw2ribqmwm ) , rtdwData , 0 , 26
, sizeof ( dqykr4eggmg . otjykwnhb3s . bw2ribqmwm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . f2ynnmexgv ) , rtdwData , 0 , 27 , sizeof ( dqykr4eggmg .
otjykwnhb3s . f2ynnmexgv ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . oypkwoqg1d ) , rtdwData , 0 , 28
, sizeof ( dqykr4eggmg . otjykwnhb3s . oypkwoqg1d ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . b3fmbw5stg ) , rtdwData , 0 , 29 , sizeof ( dqykr4eggmg .
otjykwnhb3s . b3fmbw5stg ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . aq2aymvaio ) , rtdwData , 0 , 30
, sizeof ( dqykr4eggmg . otjykwnhb3s . aq2aymvaio ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . dzwopklw3c ) , rtdwData , 0 , 31 , sizeof ( dqykr4eggmg .
otjykwnhb3s . dzwopklw3c ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . d4fp3a2mpz ) , rtdwData , 0 , 32
, sizeof ( dqykr4eggmg . otjykwnhb3s . d4fp3a2mpz ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . fl0vv44tbs ) , rtdwData , 0 , 33 , sizeof ( dqykr4eggmg .
otjykwnhb3s . fl0vv44tbs ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . as5a0ikbk1 ) , rtdwData , 0 , 34
, sizeof ( dqykr4eggmg . otjykwnhb3s . as5a0ikbk1 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ncgo1wegzg ) , rtdwData , 0 , 35 , sizeof ( dqykr4eggmg .
otjykwnhb3s . ncgo1wegzg ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . mirtkskmtr ) , rtdwData , 0 , 36
, sizeof ( dqykr4eggmg . otjykwnhb3s . mirtkskmtr ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . jduomia1pb ) , rtdwData , 0 , 37 , sizeof ( dqykr4eggmg .
otjykwnhb3s . jduomia1pb ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . od5c00niot ) , rtdwData , 0 , 38
, sizeof ( dqykr4eggmg . otjykwnhb3s . od5c00niot ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . dqfv1m130o ) , rtdwData , 0 , 39 , sizeof ( dqykr4eggmg .
otjykwnhb3s . dqfv1m130o ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . meognsjf1t ) , rtdwData , 0 , 40
, sizeof ( dqykr4eggmg . otjykwnhb3s . meognsjf1t ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . gcgpru4rcb ) , rtdwData , 0 , 41 , sizeof ( dqykr4eggmg .
otjykwnhb3s . gcgpru4rcb ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . peklmaellz ) , rtdwData , 0 , 42
, sizeof ( dqykr4eggmg . otjykwnhb3s . peklmaellz ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . bsetqjfri4 ) , rtdwData , 0 , 43 , sizeof ( dqykr4eggmg .
otjykwnhb3s . bsetqjfri4 ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . dsjbzv2lh4 ) , rtdwData , 0 , 44
, sizeof ( dqykr4eggmg . otjykwnhb3s . dsjbzv2lh4 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . gixvkpnpus ) , rtdwData , 0 , 45 , sizeof ( dqykr4eggmg .
otjykwnhb3s . gixvkpnpus ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . ow5xb5ovt0 ) , rtdwData , 0 , 46
, sizeof ( dqykr4eggmg . otjykwnhb3s . ow5xb5ovt0 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . krs1cvkxzk ) , rtdwData , 0 , 47 , sizeof ( dqykr4eggmg .
otjykwnhb3s . krs1cvkxzk ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . c4kiksmhh2 ) , rtdwData , 0 , 48
, sizeof ( dqykr4eggmg . otjykwnhb3s . c4kiksmhh2 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . bbkjtf4kuy ) , rtdwData , 0 , 49 , sizeof ( dqykr4eggmg .
otjykwnhb3s . bbkjtf4kuy ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . l3lcputuyl ) , rtdwData , 0 , 50
, sizeof ( dqykr4eggmg . otjykwnhb3s . l3lcputuyl ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . pjgu33zeph ) , rtdwData , 0 , 51 , sizeof ( dqykr4eggmg .
otjykwnhb3s . pjgu33zeph ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . dxm3w2i52x ) , rtdwData , 0 , 52
, sizeof ( dqykr4eggmg . otjykwnhb3s . dxm3w2i52x ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . orkq4iljgu ) , rtdwData , 0 , 53 , sizeof ( dqykr4eggmg .
otjykwnhb3s . orkq4iljgu ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . b1nmhkw4zo ) , rtdwData , 0 , 54
, sizeof ( dqykr4eggmg . otjykwnhb3s . b1nmhkw4zo ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . n0mydijbcx ) , rtdwData , 0 , 55 , sizeof ( dqykr4eggmg .
otjykwnhb3s . n0mydijbcx ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . iwg03owvar ) , rtdwData , 0 , 56
, sizeof ( dqykr4eggmg . otjykwnhb3s . iwg03owvar ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . mf2pp40f5v ) , rtdwData , 0 , 57 , sizeof ( dqykr4eggmg .
otjykwnhb3s . mf2pp40f5v ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . pwlp5beuqs ) , rtdwData , 0 , 58
, sizeof ( dqykr4eggmg . otjykwnhb3s . pwlp5beuqs ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . c4slvrb3tr ) , rtdwData , 0 , 59 , sizeof ( dqykr4eggmg .
otjykwnhb3s . c4slvrb3tr ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . gaxgdudnvc ) , rtdwData , 0 , 60
, sizeof ( dqykr4eggmg . otjykwnhb3s . gaxgdudnvc ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . dq5lalhp1e ) , rtdwData , 0 , 61 , sizeof ( dqykr4eggmg .
otjykwnhb3s . dq5lalhp1e ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . fpr1qi0oiw ) , rtdwData , 0 , 62
, sizeof ( dqykr4eggmg . otjykwnhb3s . fpr1qi0oiw ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . klyrn0mwhb ) , rtdwData , 0 , 63 , sizeof ( dqykr4eggmg .
otjykwnhb3s . klyrn0mwhb ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . mfifybuxty ) , rtdwData , 0 , 64
, sizeof ( dqykr4eggmg . otjykwnhb3s . mfifybuxty ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . a1oodzfxvv ) , rtdwData , 0 , 65 , sizeof ( dqykr4eggmg .
otjykwnhb3s . a1oodzfxvv ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . mgysgsd2g4 ) , rtdwData , 0 , 66
, sizeof ( dqykr4eggmg . otjykwnhb3s . mgysgsd2g4 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . idn2v5d33m ) , rtdwData , 0 , 67 , sizeof ( dqykr4eggmg .
otjykwnhb3s . idn2v5d33m ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . ibnsbzvyrn ) , rtdwData , 0 , 68
, sizeof ( dqykr4eggmg . otjykwnhb3s . ibnsbzvyrn ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . jv32slkoka ) , rtdwData , 0 , 69 , sizeof ( dqykr4eggmg .
otjykwnhb3s . jv32slkoka ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . de4yc1bkky ) , rtdwData , 0 , 70
, sizeof ( dqykr4eggmg . otjykwnhb3s . de4yc1bkky ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . jd3dqtmo2p ) , rtdwData , 0 , 71 , sizeof ( dqykr4eggmg .
otjykwnhb3s . jd3dqtmo2p ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . f1jy25gy04 ) , rtdwData , 0 , 72
, sizeof ( dqykr4eggmg . otjykwnhb3s . f1jy25gy04 ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . gdn4qfzvsk ) , rtdwData , 0 , 73 , sizeof ( dqykr4eggmg .
otjykwnhb3s . gdn4qfzvsk ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . cqi2pi21ow ) , rtdwData , 0 , 74
, sizeof ( dqykr4eggmg . otjykwnhb3s . cqi2pi21ow ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . kh1khihcrt ) , rtdwData , 0 , 75 , sizeof ( dqykr4eggmg .
otjykwnhb3s . kh1khihcrt ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . iftedegxuv ) , rtdwData , 0 , 76
, sizeof ( dqykr4eggmg . otjykwnhb3s . iftedegxuv ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . g4zcogq4xi ) , rtdwData , 0 , 77 , sizeof ( dqykr4eggmg .
otjykwnhb3s . g4zcogq4xi ) ) ; mr_flightControlSystem_restoreDataFromMxArray
( ( void * ) & ( dqykr4eggmg . otjykwnhb3s . ipbtas1tys . ley0an2uip ) ,
rtdwData , 0 , 78 , sizeof ( dqykr4eggmg . otjykwnhb3s . ipbtas1tys .
ley0an2uip ) ) ; mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) &
( dqykr4eggmg . otjykwnhb3s . ipbtas1tys . njk4w5jozv ) , rtdwData , 0 , 79 ,
sizeof ( dqykr4eggmg . otjykwnhb3s . ipbtas1tys . njk4w5jozv ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . bm3dpymkhz . mkkaskumzr ) , rtdwData , 0 , 80 , sizeof (
dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . mkkaskumzr ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . bm3dpymkhz . jhr0womnye ) , rtdwData , 0 , 81 , sizeof (
dqykr4eggmg . otjykwnhb3s . bm3dpymkhz . jhr0womnye ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ifzbhw4mrws . ley0an2uip ) , rtdwData , 0 , 82 , sizeof (
dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . ley0an2uip ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ifzbhw4mrws . njk4w5jozv ) , rtdwData , 0 , 83 , sizeof (
dqykr4eggmg . otjykwnhb3s . ifzbhw4mrws . njk4w5jozv ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . phrpuocqmvu . mkkaskumzr ) , rtdwData , 0 , 84 , sizeof (
dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . mkkaskumzr ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . phrpuocqmvu . jhr0womnye ) , rtdwData , 0 , 85 , sizeof (
dqykr4eggmg . otjykwnhb3s . phrpuocqmvu . jhr0womnye ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) , rtdwData , 0 , 86 , sizeof (
dqykr4eggmg . otjykwnhb3s . ciy1c2o0rv . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) , rtdwData , 0 , 87 , sizeof (
dqykr4eggmg . otjykwnhb3s . jvbbqhrajh . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . clwiujjdqo . fau3qf03xm ) , rtdwData , 0 , 88 , sizeof (
dqykr4eggmg . otjykwnhb3s . clwiujjdqo . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) , rtdwData , 0 , 89 , sizeof (
dqykr4eggmg . otjykwnhb3s . acfz1zxm4t . fau3qf03xm ) ) ;
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( dqykr4eggmg .
otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) , rtdwData , 0 , 90 , sizeof (
dqykr4eggmg . otjykwnhb3s . ghadbep3bbv . fau3qf03xm ) ) ; }
mr_flightControlSystem_restoreDataFromMxArray ( ( void * ) & ( f51itwtzkqf )
, ssDW , 0 , 2 , sizeof ( f51itwtzkqf ) ) ; } void
mr_flightControlSystem_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 379497056U , 2947877576U , 522326850U , 3864965130U
, } ; slmrModelRefRegisterSimStateChecksum ( S , "flightControlSystem" , &
chksum [ 0 ] ) ; } mxArray *
mr_flightControlSystem_GetSimStateDisallowedBlocks ( ) { mxArray * data =
mxCreateCellMatrix ( 1 , 3 ) ; mwIndex subs [ 2 ] , offset ; { static const
char_T * blockType [ 1 ] = { "MATLABSystem" , } ; static const char_T *
blockPath [ 1 ] = {
"flightControlSystem/Image Processing System/PARROT Image Conversion" , } ;
static const int reason [ 1 ] = { 6 , } ; for ( subs [ 0 ] = 0 ; subs [ 0 ] <
1 ; ++ ( subs [ 0 ] ) ) { subs [ 1 ] = 0 ; offset = mxCalcSingleSubscript (
data , 2 , subs ) ; mxSetCell ( data , offset , mxCreateString ( blockType [
subs [ 0 ] ] ) ) ; subs [ 1 ] = 1 ; offset = mxCalcSingleSubscript ( data , 2
, subs ) ; mxSetCell ( data , offset , mxCreateString ( blockPath [ subs [ 0
] ] ) ) ; subs [ 1 ] = 2 ; offset = mxCalcSingleSubscript ( data , 2 , subs )
; mxSetCell ( data , offset , mxCreateDoubleScalar ( ( real_T ) reason [ subs
[ 0 ] ] ) ) ; } } return data ; } static void *
flightControlSystem_InitRestoreDataPtr = ( NULL ) ; void
mr_flightControlSystem_CreateInitRestoreData ( ) {
flightControlSystem_InitRestoreDataPtr = utMalloc ( sizeof ( dqykr4eggmg ) )
; memcpy ( flightControlSystem_InitRestoreDataPtr , ( void * ) & (
dqykr4eggmg ) , sizeof ( dqykr4eggmg ) ) ; } void
mr_flightControlSystem_CopyFromInitRestoreData ( ) { memcpy ( ( void * ) & (
dqykr4eggmg ) , flightControlSystem_InitRestoreDataPtr , sizeof ( dqykr4eggmg
) ) ; } void mr_flightControlSystem_DestroyInitRestoreData ( ) { utFree (
flightControlSystem_InitRestoreDataPtr ) ; }
#if defined(_MSC_VER)
#pragma warning(disable: 4505) //unreferenced local function has been removed
#endif
