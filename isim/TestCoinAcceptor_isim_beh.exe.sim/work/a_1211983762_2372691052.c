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
static const char *ng0 = "C:/Users/Jableader/Documents/Xilinx/ADS_Assignment_3/TestCoinAcceptor.vhd";
extern char *IEEE_P_2592010699;



static void work_a_1211983762_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(44, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3920);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1211983762_2372691052_p_1(char *t0)
{
    char t15[16];
    char t17[16];
    char t22[16];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    int t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    unsigned char t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    char *t16;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    char *t23;
    int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;

LAB0:    t1 = (t0 + 3520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 6584);
    *((int *)t2) = 0;
    t4 = (t0 + 6588);
    *((int *)t4) = 6;
    t5 = 0;
    t6 = 6;

LAB8:    if (t5 <= t6)
        goto LAB9;

LAB11:    xsi_set_current_line(62, ng0);

LAB25:    *((char **)t1) = &&LAB26;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(57, ng0);

LAB14:    t7 = (t0 + 3840);
    *((int *)t7) = 1;
    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 6584);
    t5 = *((int *)t2);
    t4 = (t0 + 6588);
    t6 = *((int *)t4);
    if (t5 == t6)
        goto LAB11;

LAB22:    t20 = (t5 + 1);
    t5 = t20;
    t7 = (t0 + 6584);
    *((int *)t7) = t5;
    goto LAB8;

LAB12:    t8 = (t0 + 3840);
    *((int *)t8) = 0;
    xsi_set_current_line(58, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t3);

LAB18:    *((char **)t1) = &&LAB19;
    goto LAB1;

LAB13:    t8 = (t0 + 1352U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t11 = (t10 == (unsigned char)3);
    if (t11 == 1)
        goto LAB12;
    else
        goto LAB14;

LAB15:    goto LAB13;

LAB16:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 6592);
    t7 = (t0 + 1192U);
    t8 = *((char **)t7);
    t12 = (0 - 0);
    t13 = (t12 * 1U);
    t14 = (0 + t13);
    t7 = (t8 + t14);
    t16 = ((IEEE_P_2592010699) + 4024);
    t18 = (t17 + 0U);
    t19 = (t18 + 0U);
    *((int *)t19) = 0;
    t19 = (t18 + 4U);
    *((int *)t19) = 0;
    t19 = (t18 + 8U);
    *((int *)t19) = 1;
    t20 = (0 - 0);
    t21 = (t20 * 1);
    t21 = (t21 + 1);
    t19 = (t18 + 12U);
    *((unsigned int *)t19) = t21;
    t19 = (t22 + 0U);
    t23 = (t19 + 0U);
    *((int *)t23) = 0;
    t23 = (t19 + 4U);
    *((int *)t23) = 4;
    t23 = (t19 + 8U);
    *((int *)t23) = 1;
    t24 = (4 - 0);
    t21 = (t24 * 1);
    t21 = (t21 + 1);
    t23 = (t19 + 12U);
    *((unsigned int *)t23) = t21;
    t9 = xsi_base_array_concat(t9, t15, t16, (char)97, t2, t17, (char)97, t7, t22, (char)101);
    t21 = (1U + 5U);
    t10 = (6U != t21);
    if (t10 == 1)
        goto LAB20;

LAB21:    t23 = (t0 + 3984);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t9, 6U);
    xsi_driver_first_trans_fast(t23);
    goto LAB10;

LAB17:    goto LAB16;

LAB19:    goto LAB17;

LAB20:    xsi_size_not_matching(6U, t21, 0);
    goto LAB21;

LAB23:    goto LAB2;

LAB24:    goto LAB23;

LAB26:    goto LAB24;

}


extern void work_a_1211983762_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1211983762_2372691052_p_0,(void *)work_a_1211983762_2372691052_p_1};
	xsi_register_didat("work_a_1211983762_2372691052", "isim/TestCoinAcceptor_isim_beh.exe.sim/work/a_1211983762_2372691052.didat");
	xsi_register_executes(pe);
}
