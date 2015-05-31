/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
extern char *IEEE_P_2592010699;
static const char *ng1 = "Function or_reduce ended without a return statement";
static const char *ng2 = "Function and_reduce ended without a return statement";



unsigned char work_p_1286285931_sub_604592709_90556204(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t12[16];
    unsigned char t0;
    char *t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    char *t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned char t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned char t36;
    unsigned int t37;
    char *t38;
    char *t39;

LAB0:    t6 = (t3 + 12U);
    t7 = *((unsigned int *)t6);
    t7 = (t7 * 1U);
    t8 = xsi_get_transient_memory(t7);
    memset(t8, 0, t7);
    t9 = t8;
    memset(t9, (unsigned char)2, t7);
    t10 = (t3 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t13 = (t3 + 0U);
    t14 = *((int *)t13);
    t15 = (t3 + 4U);
    t16 = *((int *)t15);
    t17 = (t3 + 8U);
    t18 = *((int *)t17);
    t19 = (t12 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = t14;
    t20 = (t19 + 4U);
    *((int *)t20) = t16;
    t20 = (t19 + 8U);
    *((int *)t20) = t18;
    t21 = (t16 - t14);
    t22 = (t21 * t18);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t4 + 4U);
    t23 = ((IEEE_P_2592010699) + 4024);
    t24 = (t20 + 88U);
    *((char **)t24) = t23;
    t25 = (char *)alloca(t11);
    t26 = (t20 + 56U);
    *((char **)t26) = t25;
    memcpy(t25, t8, t11);
    t27 = (t20 + 64U);
    *((char **)t27) = t12;
    t28 = (t20 + 80U);
    *((unsigned int *)t28) = t11;
    t29 = (t5 + 4U);
    t30 = (t2 != 0);
    if (t30 == 1)
        goto LAB3;

LAB2:    t31 = (t5 + 12U);
    *((char **)t31) = t3;
    t32 = (t3 + 12U);
    t22 = *((unsigned int *)t32);
    t22 = (t22 * 1U);
    t33 = (t20 + 56U);
    t34 = *((char **)t33);
    t33 = (t12 + 12U);
    t35 = *((unsigned int *)t33);
    t35 = (t35 * 1U);
    t36 = 1;
    if (t22 == t35)
        goto LAB7;

LAB8:    t36 = 0;

LAB9:    if (t36 != 0)
        goto LAB4;

LAB6:    t0 = (unsigned char)3;

LAB1:    return t0;
LAB3:    *((char **)t29) = t2;
    goto LAB2;

LAB4:    t0 = (unsigned char)2;
    goto LAB1;

LAB5:    xsi_error(ng1);
    t0 = 0;
    goto LAB1;

LAB7:    t37 = 0;

LAB10:    if (t37 < t22)
        goto LAB11;
    else
        goto LAB9;

LAB11:    t38 = (t2 + t37);
    t39 = (t34 + t37);
    if (*((unsigned char *)t38) != *((unsigned char *)t39))
        goto LAB8;

LAB12:    t37 = (t37 + 1);
    goto LAB10;

LAB13:    goto LAB5;

LAB14:    goto LAB5;

}

unsigned char work_p_1286285931_sub_1560449803_90556204(char *t1, char *t2, char *t3)
{
    char t4[128];
    char t5[24];
    char t12[16];
    unsigned char t0;
    char *t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    unsigned int t11;
    char *t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;
    int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned char t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned char t36;
    unsigned int t37;
    char *t38;
    char *t39;

LAB0:    t6 = (t3 + 12U);
    t7 = *((unsigned int *)t6);
    t7 = (t7 * 1U);
    t8 = xsi_get_transient_memory(t7);
    memset(t8, 0, t7);
    t9 = t8;
    memset(t9, (unsigned char)3, t7);
    t10 = (t3 + 12U);
    t11 = *((unsigned int *)t10);
    t11 = (t11 * 1U);
    t13 = (t3 + 0U);
    t14 = *((int *)t13);
    t15 = (t3 + 4U);
    t16 = *((int *)t15);
    t17 = (t3 + 8U);
    t18 = *((int *)t17);
    t19 = (t12 + 0U);
    t20 = (t19 + 0U);
    *((int *)t20) = t14;
    t20 = (t19 + 4U);
    *((int *)t20) = t16;
    t20 = (t19 + 8U);
    *((int *)t20) = t18;
    t21 = (t16 - t14);
    t22 = (t21 * t18);
    t22 = (t22 + 1);
    t20 = (t19 + 12U);
    *((unsigned int *)t20) = t22;
    t20 = (t4 + 4U);
    t23 = ((IEEE_P_2592010699) + 4024);
    t24 = (t20 + 88U);
    *((char **)t24) = t23;
    t25 = (char *)alloca(t11);
    t26 = (t20 + 56U);
    *((char **)t26) = t25;
    memcpy(t25, t8, t11);
    t27 = (t20 + 64U);
    *((char **)t27) = t12;
    t28 = (t20 + 80U);
    *((unsigned int *)t28) = t11;
    t29 = (t5 + 4U);
    t30 = (t2 != 0);
    if (t30 == 1)
        goto LAB3;

LAB2:    t31 = (t5 + 12U);
    *((char **)t31) = t3;
    t32 = (t3 + 12U);
    t22 = *((unsigned int *)t32);
    t22 = (t22 * 1U);
    t33 = (t20 + 56U);
    t34 = *((char **)t33);
    t33 = (t12 + 12U);
    t35 = *((unsigned int *)t33);
    t35 = (t35 * 1U);
    t36 = 1;
    if (t22 == t35)
        goto LAB7;

LAB8:    t36 = 0;

LAB9:    if (t36 != 0)
        goto LAB4;

LAB6:    t0 = (unsigned char)2;

LAB1:    return t0;
LAB3:    *((char **)t29) = t2;
    goto LAB2;

LAB4:    t0 = (unsigned char)3;
    goto LAB1;

LAB5:    xsi_error(ng2);
    t0 = 0;
    goto LAB1;

LAB7:    t37 = 0;

LAB10:    if (t37 < t22)
        goto LAB11;
    else
        goto LAB9;

LAB11:    t38 = (t2 + t37);
    t39 = (t34 + t37);
    if (*((unsigned char *)t38) != *((unsigned char *)t39))
        goto LAB8;

LAB12:    t37 = (t37 + 1);
    goto LAB10;

LAB13:    goto LAB5;

LAB14:    goto LAB5;

}


extern void work_p_1286285931_init()
{
	static char *se[] = {(void *)work_p_1286285931_sub_604592709_90556204,(void *)work_p_1286285931_sub_1560449803_90556204};
	xsi_register_didat("work_p_1286285931", "isim/TestCoinAcceptor_isim_beh.exe.sim/work/p_1286285931.didat");
	xsi_register_subprogram_executes(se);
}
