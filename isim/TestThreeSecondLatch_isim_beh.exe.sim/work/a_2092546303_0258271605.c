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

unsigned char ieee_p_2592010699_sub_1744673427_503743352(char *, char *, unsigned int , unsigned int );
unsigned char work_p_1286285931_sub_604592709_90556204(char *, char *, char *);


static void work_a_2092546303_0258271605_p_0(char *t0)
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
    char *t10;
    int t11;
    char *t12;
    int t13;

LAB0:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 5472U);
    t3 = work_p_1286285931_sub_604592709_90556204(WORK_P_1286285931, t2, t1);
    t4 = (t3 != (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 992U);
    t3 = ieee_p_2592010699_sub_1744673427_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB5;

LAB6:
LAB3:    t1 = (t0 + 3272);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(24, ng0);
    t5 = (t0 + 1192U);
    t6 = *((char **)t5);
    t5 = (t0 + 3352);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t6, 2U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(25, ng0);
    t1 = (t0 + 3416);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t11 = *((int *)t5);
    t4 = (t11 == 3000);
    if (t4 != 0)
        goto LAB7;

LAB9:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t11 = *((int *)t2);
    t13 = (t11 + 1);
    t1 = (t0 + 3416);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t13;
    xsi_driver_first_trans_fast(t1);

LAB8:    goto LAB3;

LAB7:    xsi_set_current_line(28, ng0);
    t2 = xsi_get_transient_memory(2U);
    memset(t2, 0, 2U);
    t6 = t2;
    memset(t6, (unsigned char)2, 2U);
    t7 = (t0 + 3352);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t12 = *((char **)t10);
    memcpy(t12, t2, 2U);
    xsi_driver_first_trans_fast_port(t7);
    xsi_set_current_line(29, ng0);
    t1 = (t0 + 3416);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((int *)t7) = 0;
    xsi_driver_first_trans_fast(t1);
    goto LAB8;

}


extern void work_a_2092546303_0258271605_init()
{
	static char *pe[] = {(void *)work_a_2092546303_0258271605_p_0};
	xsi_register_didat("work_a_2092546303_0258271605", "isim/TestThreeSecondLatch_isim_beh.exe.sim/work/a_2092546303_0258271605.didat");
	xsi_register_executes(pe);
}
