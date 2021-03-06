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
static const char *ng0 = "D:/Synchronous/Graduate Studies/Homework/672/HW3/Project/HW3/SourceCode/fixpoint_adder.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {0, 0};
static int ng3[] = {1, 0};



static void Always_29_0(char *t0)
{
    char t7[8];
    char t16[8];
    char t24[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    char *t22;
    char *t23;
    unsigned int t25;

LAB0:    t1 = (t0 + 5032U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 6592);
    *((int *)t2) = 1;
    t3 = (t0 + 5064);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(29, ng0);

LAB5:    xsi_set_current_line(30, ng0);
    t4 = (t0 + 472);
    t5 = *((char **)t4);
    t4 = (t0 + 744);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t5, 32, t6, 32);
    t4 = (t7 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(40, ng0);

LAB15:    xsi_set_current_line(41, ng0);
    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t2 = (t0 + 880);
    t4 = *((char **)t2);
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t3, 32, t4, 32);
    t2 = (t7 + 4);
    t8 = *((unsigned int *)t2);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(45, ng0);

LAB20:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 2752U);
    t3 = *((char **)t2);
    t2 = (t0 + 4112);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 16);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2592U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    t6 = (t0 + 2592U);
    t13 = *((char **)t6);
    memset(t16, 0, 8);
    t6 = (t16 + 4);
    t14 = (t13 + 4);
    t8 = *((unsigned int *)t13);
    t9 = (t8 >> 15);
    t10 = (t9 & 1);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t14);
    t12 = (t11 >> 15);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    xsi_vlog_mul_concat(t3, 0, 1, t5, 1U, t16, 1);
    xsi_vlogtype_concat(t7, 16, 16, 3U, t3, 0, t4, 16, t2, 0);
    t15 = (t0 + 3952);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 16);

LAB18:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(30, ng0);

LAB9:    xsi_set_current_line(31, ng0);
    t13 = (t0 + 608);
    t14 = *((char **)t13);
    t13 = (t0 + 880);
    t15 = *((char **)t13);
    memset(t16, 0, 8);
    xsi_vlog_signed_greatereq(t16, 32, t14, 32, t15, 32);
    t13 = (t16 + 4);
    t17 = *((unsigned int *)t13);
    t18 = (~(t17));
    t19 = *((unsigned int *)t16);
    t20 = (t19 & t18);
    t21 = (t20 != 0);
    if (t21 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(35, ng0);

LAB14:    xsi_set_current_line(36, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2592U);
    t4 = *((char **)t3);
    xsi_vlogtype_concat(t7, 16, 16, 2U, t4, 16, t2, 0);
    t3 = (t0 + 3952);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 16);
    xsi_set_current_line(37, ng0);
    t2 = (t0 + 2752U);
    t3 = *((char **)t2);
    t4 = ((char*)((ng2)));
    t5 = (t0 + 2752U);
    t6 = *((char **)t5);
    memset(t16, 0, 8);
    t5 = (t16 + 4);
    t13 = (t6 + 4);
    t8 = *((unsigned int *)t6);
    t9 = (t8 >> 15);
    t10 = (t9 & 1);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t13);
    t12 = (t11 >> 15);
    t17 = (t12 & 1);
    *((unsigned int *)t5) = t17;
    xsi_vlog_mul_concat(t2, 0, 1, t4, 1U, t16, 1);
    xsi_vlogtype_concat(t7, 16, 16, 2U, t2, 0, t3, 16);
    t14 = (t0 + 4112);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 16);

LAB12:    goto LAB8;

LAB10:    xsi_set_current_line(31, ng0);

LAB13:    xsi_set_current_line(32, ng0);
    t22 = (t0 + 2592U);
    t23 = *((char **)t22);
    t22 = (t0 + 3952);
    xsi_vlogvar_assign_value(t22, t23, 0, 0, 16);
    xsi_set_current_line(33, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2752U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    t6 = (t0 + 2752U);
    t13 = *((char **)t6);
    memset(t16, 0, 8);
    t6 = (t16 + 4);
    t14 = (t13 + 4);
    t8 = *((unsigned int *)t13);
    t9 = (t8 >> 15);
    t10 = (t9 & 1);
    *((unsigned int *)t16) = t10;
    t11 = *((unsigned int *)t14);
    t12 = (t11 >> 15);
    t17 = (t12 & 1);
    *((unsigned int *)t6) = t17;
    xsi_vlog_mul_concat(t3, 0, 1, t5, 1U, t16, 1);
    xsi_vlogtype_concat(t7, 16, 16, 3U, t3, 0, t4, 16, t2, 0);
    t15 = (t0 + 4112);
    xsi_vlogvar_assign_value(t15, t7, 0, 0, 16);
    goto LAB12;

LAB16:    xsi_set_current_line(41, ng0);

LAB19:    xsi_set_current_line(42, ng0);
    t5 = (t0 + 2592U);
    t6 = *((char **)t5);
    t13 = ((char*)((ng2)));
    t14 = (t0 + 2592U);
    t15 = *((char **)t14);
    memset(t24, 0, 8);
    t14 = (t24 + 4);
    t22 = (t15 + 4);
    t17 = *((unsigned int *)t15);
    t18 = (t17 >> 15);
    t19 = (t18 & 1);
    *((unsigned int *)t24) = t19;
    t20 = *((unsigned int *)t22);
    t21 = (t20 >> 15);
    t25 = (t21 & 1);
    *((unsigned int *)t14) = t25;
    xsi_vlog_mul_concat(t5, 0, 1, t13, 1U, t24, 1);
    xsi_vlogtype_concat(t16, 16, 16, 2U, t5, 0, t6, 16);
    t23 = (t0 + 3952);
    xsi_vlogvar_assign_value(t23, t16, 0, 0, 16);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2752U);
    t4 = *((char **)t3);
    xsi_vlogtype_concat(t7, 16, 16, 2U, t4, 16, t2, 0);
    t3 = (t0 + 4112);
    xsi_vlogvar_assign_value(t3, t7, 0, 0, 16);
    goto LAB18;

}

static void Always_52_1(char *t0)
{
    char t10[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t11;

LAB0:    t1 = (t0 + 5280U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 6608);
    *((int *)t2) = 1;
    t3 = (t0 + 5312);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(52, ng0);
    t4 = (t0 + 3952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t0 + 4112);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_signed_add(t10, 16, t6, 16, t9, 16);
    t11 = (t0 + 3472);
    xsi_vlogvar_assign_value(t11, t10, 0, 0, 16);
    goto LAB2;

}

static void Always_55_2(char *t0)
{
    char t7[8];
    char t13[8];
    char t15[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 5528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 6624);
    *((int *)t2) = 1;
    t3 = (t0 + 5560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(55, ng0);

LAB5:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 1152);
    t5 = *((char **)t4);
    t4 = (t0 + 1424);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t5, 32, t6, 32);
    t4 = (t7 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t7, 0, 8);
    t5 = (t7 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 0);
    *((unsigned int *)t7) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 0);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t12 & 32767U);
    t21 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t21 & 32767U);
    t14 = (t0 + 3792);
    xsi_vlogvar_assign_value(t14, t7, 0, 0, 15);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(57, ng0);
    t14 = ((char*)((ng1)));
    t16 = (t0 + 3472);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    memset(t15, 0, 8);
    t19 = (t15 + 4);
    t20 = (t18 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 0);
    *((unsigned int *)t15) = t22;
    t23 = *((unsigned int *)t20);
    t24 = (t23 >> 0);
    *((unsigned int *)t19) = t24;
    t25 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t25 & 32767U);
    t26 = *((unsigned int *)t19);
    *((unsigned int *)t19) = (t26 & 32767U);
    xsi_vlogtype_concat(t13, 15, 15, 2U, t15, 15, t14, 0);
    t27 = (t0 + 3792);
    xsi_vlogvar_assign_value(t27, t13, 0, 0, 15);
    goto LAB8;

}

static void Always_63_3(char *t0)
{
    char t7[8];
    char t17[8];
    char t39[8];
    char t40[8];
    char t57[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t18;
    char *t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t32;
    char *t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t53;
    char *t54;
    char *t55;
    char *t56;
    char *t58;
    char *t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    char *t66;

LAB0:    t1 = (t0 + 5776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 6640);
    *((int *)t2) = 1;
    t3 = (t0 + 5808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(63, ng0);

LAB5:    xsi_set_current_line(64, ng0);
    t4 = (t0 + 1016);
    t5 = *((char **)t4);
    t4 = (t0 + 1288);
    t6 = *((char **)t4);
    memset(t7, 0, 8);
    xsi_vlog_signed_greatereq(t7, 32, t5, 32, t6, 32);
    t4 = (t7 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(69, ng0);

LAB22:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    memset(t7, 0, 8);
    xsi_vlog_signed_equal(t7, 32, t3, 32, t2, 32);
    t4 = (t7 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (~(t8));
    t10 = *((unsigned int *)t7);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 3472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 15);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 15);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t12 & 1U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 1U);
    t13 = (t0 + 3472);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memset(t39, 0, 8);
    t16 = (t39 + 4);
    t18 = (t15 + 4);
    t21 = *((unsigned int *)t15);
    t22 = (t21 >> 15);
    t23 = (t22 & 1);
    *((unsigned int *)t39) = t23;
    t24 = *((unsigned int *)t18);
    t25 = (t24 >> 15);
    t26 = (t25 & 1);
    *((unsigned int *)t16) = t26;
    xsi_vlogtype_concat(t7, 2, 2, 2U, t39, 1, t17, 1);
    t19 = (t0 + 3632);
    xsi_vlogvar_assign_value(t19, t7, 0, 0, 1);

LAB25:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(65, ng0);
    t13 = (t0 + 3312);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = ((char*)((ng2)));
    memset(t17, 0, 8);
    t18 = (t15 + 4);
    t19 = (t16 + 4);
    t20 = *((unsigned int *)t15);
    t21 = *((unsigned int *)t16);
    t22 = (t20 ^ t21);
    t23 = *((unsigned int *)t18);
    t24 = *((unsigned int *)t19);
    t25 = (t23 ^ t24);
    t26 = (t22 | t25);
    t27 = *((unsigned int *)t18);
    t28 = *((unsigned int *)t19);
    t29 = (t27 | t28);
    t30 = (~(t29));
    t31 = (t26 & t30);
    if (t31 != 0)
        goto LAB12;

LAB9:    if (t29 != 0)
        goto LAB11;

LAB10:    *((unsigned int *)t17) = 1;

LAB12:    t33 = (t17 + 4);
    t34 = *((unsigned int *)t33);
    t35 = (~(t34));
    t36 = *((unsigned int *)t17);
    t37 = (t36 & t35);
    t38 = (t37 != 0);
    if (t38 > 0)
        goto LAB13;

LAB14:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 3472);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t17, 0, 8);
    t5 = (t17 + 4);
    t6 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 15);
    *((unsigned int *)t17) = t9;
    t10 = *((unsigned int *)t6);
    t11 = (t10 >> 15);
    *((unsigned int *)t5) = t11;
    t12 = *((unsigned int *)t17);
    *((unsigned int *)t17) = (t12 & 1U);
    t20 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t20 & 1U);
    t14 = ((char*)((ng2)));
    t15 = (t0 + 3472);
    t16 = (t15 + 56U);
    t18 = *((char **)t16);
    memset(t40, 0, 8);
    t19 = (t40 + 4);
    t32 = (t18 + 4);
    t21 = *((unsigned int *)t18);
    t22 = (t21 >> 15);
    t23 = (t22 & 1);
    *((unsigned int *)t40) = t23;
    t24 = *((unsigned int *)t32);
    t25 = (t24 >> 15);
    t26 = (t25 & 1);
    *((unsigned int *)t19) = t26;
    memset(t39, 0, 8);
    t33 = (t40 + 4);
    t27 = *((unsigned int *)t33);
    t28 = (~(t27));
    t29 = *((unsigned int *)t40);
    t30 = (t29 & t28);
    t31 = (t30 & 1U);
    if (t31 != 0)
        goto LAB19;

LAB17:    if (*((unsigned int *)t33) == 0)
        goto LAB16;

LAB18:    t41 = (t39 + 4);
    *((unsigned int *)t39) = 1;
    *((unsigned int *)t41) = 1;

LAB19:    t42 = (t39 + 4);
    t43 = (t40 + 4);
    t34 = *((unsigned int *)t40);
    t35 = (~(t34));
    *((unsigned int *)t39) = t35;
    *((unsigned int *)t42) = 0;
    if (*((unsigned int *)t43) != 0)
        goto LAB21;

LAB20:    t47 = *((unsigned int *)t39);
    *((unsigned int *)t39) = (t47 & 1U);
    t48 = *((unsigned int *)t42);
    *((unsigned int *)t42) = (t48 & 1U);
    xsi_vlog_mul_concat(t13, 0, 1, t14, 1U, t39, 1);
    xsi_vlogtype_concat(t7, 1, 1, 2U, t13, 0, t17, 1);
    t44 = (t0 + 3632);
    xsi_vlogvar_assign_value(t44, t7, 0, 0, 1);

LAB15:    goto LAB8;

LAB11:    t32 = (t17 + 4);
    *((unsigned int *)t17) = 1;
    *((unsigned int *)t32) = 1;
    goto LAB12;

LAB13:    xsi_set_current_line(66, ng0);
    t41 = (t0 + 3472);
    t42 = (t41 + 56U);
    t43 = *((char **)t42);
    memset(t40, 0, 8);
    t44 = (t40 + 4);
    t45 = (t43 + 4);
    t46 = *((unsigned int *)t43);
    t47 = (t46 >> 15);
    *((unsigned int *)t40) = t47;
    t48 = *((unsigned int *)t45);
    t49 = (t48 >> 15);
    *((unsigned int *)t44) = t49;
    t50 = *((unsigned int *)t40);
    *((unsigned int *)t40) = (t50 & 1U);
    t51 = *((unsigned int *)t44);
    *((unsigned int *)t44) = (t51 & 1U);
    t53 = ((char*)((ng2)));
    t54 = (t0 + 3472);
    t55 = (t54 + 56U);
    t56 = *((char **)t55);
    memset(t57, 0, 8);
    t58 = (t57 + 4);
    t59 = (t56 + 4);
    t60 = *((unsigned int *)t56);
    t61 = (t60 >> 15);
    t62 = (t61 & 1);
    *((unsigned int *)t57) = t62;
    t63 = *((unsigned int *)t59);
    t64 = (t63 >> 15);
    t65 = (t64 & 1);
    *((unsigned int *)t58) = t65;
    xsi_vlog_mul_concat(t52, 0, 1, t53, 1U, t57, 1);
    xsi_vlogtype_concat(t39, 1, 1, 2U, t52, 0, t40, 1);
    t66 = (t0 + 3632);
    xsi_vlogvar_assign_value(t66, t39, 0, 0, 1);
    goto LAB15;

LAB16:    *((unsigned int *)t39) = 1;
    goto LAB19;

LAB21:    t36 = *((unsigned int *)t39);
    t37 = *((unsigned int *)t43);
    *((unsigned int *)t39) = (t36 | t37);
    t38 = *((unsigned int *)t42);
    t46 = *((unsigned int *)t43);
    *((unsigned int *)t42) = (t38 | t46);
    goto LAB20;

LAB23:    xsi_set_current_line(71, ng0);
    t5 = (t0 + 3472);
    t6 = (t5 + 56U);
    t13 = *((char **)t6);
    memset(t17, 0, 8);
    t14 = (t17 + 4);
    t15 = (t13 + 4);
    t20 = *((unsigned int *)t13);
    t21 = (t20 >> 15);
    t22 = (t21 & 1);
    *((unsigned int *)t17) = t22;
    t23 = *((unsigned int *)t15);
    t24 = (t23 >> 15);
    t25 = (t24 & 1);
    *((unsigned int *)t14) = t25;
    t16 = (t0 + 3632);
    xsi_vlogvar_assign_value(t16, t17, 0, 0, 1);
    goto LAB25;

}

static void Always_80_4(char *t0)
{
    char t4[8];
    char t21[8];
    char t22[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    char *t27;

LAB0:    t1 = (t0 + 6024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 6656);
    *((int *)t2) = 1;
    t3 = (t0 + 6056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(80, ng0);

LAB5:    xsi_set_current_line(81, ng0);
    t5 = (t0 + 2432U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3792);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t21, 0, 8);
    t6 = (t21 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t21) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t21);
    *((unsigned int *)t21) = (t11 & 32767U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 32767U);
    t13 = (t0 + 3632);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    memset(t22, 0, 8);
    t23 = (t22 + 4);
    t24 = (t20 + 4);
    t15 = *((unsigned int *)t20);
    t16 = (t15 >> 0);
    *((unsigned int *)t22) = t16;
    t17 = *((unsigned int *)t24);
    t18 = (t17 >> 0);
    *((unsigned int *)t23) = t18;
    t25 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t25 & 1U);
    t26 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t26 & 1U);
    xsi_vlogtype_concat(t4, 16, 16, 2U, t22, 1, t21, 15);
    t27 = (t0 + 3152);
    xsi_vlogvar_wait_assign_value(t27, t4, 0, 0, 16, 0LL);

LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(82, ng0);
    t19 = ((char*)((ng2)));
    t20 = (t0 + 3152);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 16, 0LL);
    goto LAB12;

}

static void Always_87_5(char *t0)
{
    char t6[8];
    char t16[8];
    char t24[8];
    char t48[8];
    char t59[8];
    char t68[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    char *t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    char *t25;
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    char *t39;
    char *t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    char *t56;
    char *t57;
    char *t58;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    char *t72;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    char *t82;

LAB0:    t1 = (t0 + 6272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 6672);
    *((int *)t2) = 1;
    t3 = (t0 + 6304);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);

LAB5:    xsi_set_current_line(88, ng0);
    t4 = (t0 + 2592U);
    t5 = *((char **)t4);
    memset(t6, 0, 8);
    t4 = (t6 + 4);
    t7 = (t5 + 4);
    t8 = *((unsigned int *)t5);
    t9 = (t8 >> 15);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 15);
    t13 = (t12 & 1);
    *((unsigned int *)t4) = t13;
    t14 = (t0 + 2752U);
    t15 = *((char **)t14);
    memset(t16, 0, 8);
    t14 = (t16 + 4);
    t17 = (t15 + 4);
    t18 = *((unsigned int *)t15);
    t19 = (t18 >> 15);
    t20 = (t19 & 1);
    *((unsigned int *)t16) = t20;
    t21 = *((unsigned int *)t17);
    t22 = (t21 >> 15);
    t23 = (t22 & 1);
    *((unsigned int *)t14) = t23;
    memset(t24, 0, 8);
    t25 = (t6 + 4);
    t26 = (t16 + 4);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t16);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t25);
    t31 = *((unsigned int *)t26);
    t32 = (t30 ^ t31);
    t33 = (t29 | t32);
    t34 = *((unsigned int *)t25);
    t35 = *((unsigned int *)t26);
    t36 = (t34 | t35);
    t37 = (~(t36));
    t38 = (t33 & t37);
    if (t38 != 0)
        goto LAB9;

LAB6:    if (t36 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t24) = 1;

LAB9:    t40 = (t24 + 4);
    t41 = *((unsigned int *)t40);
    t42 = (~(t41));
    t43 = *((unsigned int *)t24);
    t44 = (t43 & t42);
    t45 = (t44 != 0);
    if (t45 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(91, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3312);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB12:    goto LAB2;

LAB8:    t39 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t39) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(89, ng0);
    t46 = (t0 + 2592U);
    t47 = *((char **)t46);
    memset(t48, 0, 8);
    t46 = (t48 + 4);
    t49 = (t47 + 4);
    t50 = *((unsigned int *)t47);
    t51 = (t50 >> 15);
    t52 = (t51 & 1);
    *((unsigned int *)t48) = t52;
    t53 = *((unsigned int *)t49);
    t54 = (t53 >> 15);
    t55 = (t54 & 1);
    *((unsigned int *)t46) = t55;
    t56 = (t0 + 3472);
    t57 = (t56 + 56U);
    t58 = *((char **)t57);
    memset(t59, 0, 8);
    t60 = (t59 + 4);
    t61 = (t58 + 4);
    t62 = *((unsigned int *)t58);
    t63 = (t62 >> 15);
    t64 = (t63 & 1);
    *((unsigned int *)t59) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 >> 15);
    t67 = (t66 & 1);
    *((unsigned int *)t60) = t67;
    t69 = *((unsigned int *)t48);
    t70 = *((unsigned int *)t59);
    t71 = (t69 ^ t70);
    *((unsigned int *)t68) = t71;
    t72 = (t48 + 4);
    t73 = (t59 + 4);
    t74 = (t68 + 4);
    t75 = *((unsigned int *)t72);
    t76 = *((unsigned int *)t73);
    t77 = (t75 | t76);
    *((unsigned int *)t74) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 != 0);
    if (t79 == 1)
        goto LAB13;

LAB14:
LAB15:    t82 = (t0 + 3312);
    xsi_vlogvar_assign_value(t82, t68, 0, 0, 1);
    goto LAB12;

LAB13:    t80 = *((unsigned int *)t68);
    t81 = *((unsigned int *)t74);
    *((unsigned int *)t68) = (t80 | t81);
    goto LAB15;

}


extern void work_m_00000000004049820904_3181901173_init()
{
	static char *pe[] = {(void *)Always_29_0,(void *)Always_52_1,(void *)Always_55_2,(void *)Always_63_3,(void *)Always_80_4,(void *)Always_87_5};
	xsi_register_didat("work_m_00000000004049820904_3181901173", "isim/tb_FIR_N_small_isim_beh.exe.sim/work/m_00000000004049820904_3181901173.didat");
	xsi_register_executes(pe);
}
