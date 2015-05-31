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
static const char *ng0 = "C:/Users/Jableader/Documents/Xilinx/ADS_Assignment_3/debounce.vhd";
extern char *WORK_P_1286285931;
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1690584930_503743352(char *, unsigned char );
unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char work_p_1286285931_sub_604592709_90556204(char *, char *, char *);


static void work_a_2075136035_0258271605_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    unsigned char t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    int t16;

LAB0:    xsi_set_current_line(24, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6176U);
    t4 = work_p_1286285931_sub_604592709_90556204(WORK_P_1286285931, t3, t2);
    t5 = (t4 != (unsigned char)2);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:    t2 = (t0 + 992U);
    t1 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t2, 0U, 0U);
    if (t1 != 0)
        goto LAB8;

LAB9:
LAB3:    t2 = (t0 + 3680);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(25, ng0);
    t6 = (t0 + 1192U);
    t10 = *((char **)t6);
    t6 = (t0 + 3776);
    t11 = (t6 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t10, 6U);
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(26, ng0);
    t2 = (t0 + 3840);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3904);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    goto LAB3;

LAB5:    t6 = (t0 + 1672U);
    t7 = *((char **)t6);
    t8 = *((unsigned char *)t7);
    t9 = (t8 == (unsigned char)2);
    t1 = t9;
    goto LAB7;

LAB8:    xsi_set_current_line(29, ng0);
    t3 = (t0 + 1832U);
    t6 = *((char **)t3);
    t15 = *((int *)t6);
    t4 = (t15 == 3000);
    if (t4 != 0)
        goto LAB10;

LAB12:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t15 = *((int *)t3);
    t16 = (t15 + 1);
    t2 = (t0 + 3840);
    t6 = (t2 + 56U);
    t7 = *((char **)t6);
    t10 = (t7 + 56U);
    t11 = *((char **)t10);
    *((int *)t11) = t16;
    xsi_driver_first_trans_fast(t2);

LAB11:    goto LAB3;

LAB10:    xsi_set_current_line(30, ng0);
    t3 = xsi_get_transient_memory(6U);
    memset(t3, 0, 6U);
    t7 = t3;
    memset(t7, (unsigned char)2, 6U);
    t10 = (t0 + 3776);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t3, 6U);
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(31, ng0);
    t2 = (t0 + 3840);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(32, ng0);
    t2 = (t0 + 3904);
    t3 = (t2 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t10 = *((char **)t7);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    goto LAB11;

}

static void work_a_2075136035_0258271605_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(39, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_1690584930_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 3968);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t9 = (t0 + 3696);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_2075136035_0258271605_init()
{
	static char *pe[] = {(void *)work_a_2075136035_0258271605_p_0,(void *)work_a_2075136035_0258271605_p_1};
	xsi_register_didat("work_a_2075136035_0258271605", "isim/TestCoinAcceptor_isim_beh.exe.sim/work/a_2075136035_0258271605.didat");
	xsi_register_executes(pe);
}
