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
static const char *ng0 = "C:/Users/Jableader/Documents/Xilinx/ADS_Assignment_3/TestSumManager.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );


static void work_a_3175581002_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    unsigned char t12;
    unsigned char t13;
    int t14;
    char *t15;

LAB0:    t1 = (t0 + 2672U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(32, ng0);
    t3 = (1 * 1000000000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 5298);
    t5 = (t0 + 3056);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(36, ng0);
    t2 = (t0 + 5302);
    *((int *)t2) = 0;
    t4 = (t0 + 5306);
    *((int *)t4) = 3;
    t10 = 0;
    t11 = 3;

LAB8:    if (t10 <= t11)
        goto LAB9;

LAB11:    xsi_set_current_line(41, ng0);
    t3 = (1 * 1000000000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t3);

LAB19:    *((char **)t1) = &&LAB20;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB9:    xsi_set_current_line(37, ng0);
    t3 = (1 * 1000000000LL);
    t5 = (t0 + 2480);
    xsi_process_wait(t5, t3);

LAB14:    *((char **)t1) = &&LAB15;
    goto LAB1;

LAB10:    t2 = (t0 + 5302);
    t10 = *((int *)t2);
    t4 = (t0 + 5306);
    t11 = *((int *)t4);
    if (t10 == t11)
        goto LAB11;

LAB16:    t14 = (t10 + 1);
    t10 = t14;
    t5 = (t0 + 5302);
    *((int *)t5) = t10;
    goto LAB8;

LAB12:    xsi_set_current_line(38, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t12 = *((unsigned char *)t4);
    t13 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t12);
    t2 = (t0 + 3120);
    t5 = (t2 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t13;
    xsi_driver_first_trans_fast(t2);
    goto LAB10;

LAB13:    goto LAB12;

LAB15:    goto LAB13;

LAB17:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 3184);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(44, ng0);
    t3 = (1 * 1000000000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t3);

LAB23:    *((char **)t1) = &&LAB24;
    goto LAB1;

LAB18:    goto LAB17;

LAB20:    goto LAB18;

LAB21:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 3184);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(46, ng0);
    t3 = (1 * 1000000000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t3);

LAB27:    *((char **)t1) = &&LAB28;
    goto LAB1;

LAB22:    goto LAB21;

LAB24:    goto LAB22;

LAB25:    xsi_set_current_line(48, ng0);
    t2 = (t0 + 5310);
    t5 = (t0 + 3056);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 3120);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(51, ng0);
    t3 = (1 * 1000000000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t3);

LAB31:    *((char **)t1) = &&LAB32;
    goto LAB1;

LAB26:    goto LAB25;

LAB28:    goto LAB26;

LAB29:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 3120);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(54, ng0);
    t3 = (1 * 1000000000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t3);

LAB35:    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB30:    goto LAB29;

LAB32:    goto LAB30;

LAB33:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 5314);
    t5 = (t0 + 3056);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(57, ng0);
    t2 = (t0 + 3120);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(58, ng0);
    t3 = (1 * 1000000000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t3);

LAB39:    *((char **)t1) = &&LAB40;
    goto LAB1;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

LAB37:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3120);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(61, ng0);
    t3 = (1 * 1000000000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t3);

LAB43:    *((char **)t1) = &&LAB44;
    goto LAB1;

LAB38:    goto LAB37;

LAB40:    goto LAB38;

LAB41:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 5318);
    *((int *)t2) = 0;
    t4 = (t0 + 5322);
    *((int *)t4) = 3;
    t10 = 0;
    t11 = 3;

LAB45:    if (t10 <= t11)
        goto LAB46;

LAB48:    xsi_set_current_line(68, ng0);

LAB56:    *((char **)t1) = &&LAB57;
    goto LAB1;

LAB42:    goto LAB41;

LAB44:    goto LAB42;

LAB46:    xsi_set_current_line(64, ng0);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t12 = *((unsigned char *)t6);
    t13 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t12);
    t5 = (t0 + 3120);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    *((unsigned char *)t15) = t13;
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(65, ng0);
    t3 = (1 * 1000000000LL);
    t2 = (t0 + 2480);
    xsi_process_wait(t2, t3);

LAB51:    *((char **)t1) = &&LAB52;
    goto LAB1;

LAB47:    t2 = (t0 + 5318);
    t10 = *((int *)t2);
    t4 = (t0 + 5322);
    t11 = *((int *)t4);
    if (t10 == t11)
        goto LAB48;

LAB53:    t14 = (t10 + 1);
    t10 = t14;
    t5 = (t0 + 5318);
    *((int *)t5) = t10;
    goto LAB45;

LAB49:    goto LAB47;

LAB50:    goto LAB49;

LAB52:    goto LAB50;

LAB54:    goto LAB2;

LAB55:    goto LAB54;

LAB57:    goto LAB55;

}


extern void work_a_3175581002_2372691052_init()
{
	static char *pe[] = {(void *)work_a_3175581002_2372691052_p_0};
	xsi_register_didat("work_a_3175581002_2372691052", "isim/TestSumManager_isim_beh.exe.sim/work/a_3175581002_2372691052.didat");
	xsi_register_executes(pe);
}
