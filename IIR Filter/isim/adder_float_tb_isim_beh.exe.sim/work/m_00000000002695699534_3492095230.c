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
static const char *ng0 = "D:/Synchronous/Graduate Studies/Homework/672/HWprojects/HW6-IIR/nor_cor.v";
static int ng1[] = {0, 0};
static int ng2[] = {2, 0};
static int ng3[] = {1, 0};
static unsigned int ng4[] = {1U, 0U};
static int ng5[] = {23, 0};



static int sp_log2(char *t1, char *t2)
{
    char t7[8];
    char t11[8];
    char t22[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t23;

LAB0:    t0 = 1;
    xsi_set_current_line(38, ng0);

LAB2:    xsi_set_current_line(39, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t1 + 5304);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 32);
    xsi_set_current_line(40, ng0);

LAB3:    t3 = ((char*)((ng2)));
    t4 = (t1 + 5304);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memset(t7, 0, 8);
    xsi_vlog_signed_power(t7, 32, t3, 32, t6, 32, 1);
    t8 = (t1 + 5464);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_signed_less(t11, 32, t7, 32, t10, 32);
    t12 = (t11 + 4);
    t13 = *((unsigned int *)t12);
    t14 = (~(t13));
    t15 = *((unsigned int *)t11);
    t16 = (t15 & t14);
    t17 = (t16 != 0);
    if (t17 > 0)
        goto LAB4;

LAB5:    t0 = 0;

LAB1:    return t0;
LAB4:    xsi_set_current_line(40, ng0);

LAB6:    xsi_set_current_line(41, ng0);
    t18 = (t1 + 5304);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    memset(t22, 0, 8);
    xsi_vlog_signed_add(t22, 32, t20, 32, t21, 32);
    t23 = (t1 + 5304);
    xsi_vlogvar_assign_value(t23, t22, 0, 0, 32);
    goto LAB3;

}

static void Always_65_0(char *t0)
{
    char t6[8];
    char t15[8];
    char t23[8];
    char t24[8];
    char t42[16];
    char t73[8];
    char t94[8];
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
    char *t13;
    char *t14;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t33;
    char *t34;
    unsigned int t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    char *t74;
    char *t75;
    char *t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    unsigned int t82;
    char *t83;
    char *t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    char *t93;
    char *t95;
    int t96;

LAB0:    t1 = (t0 + 6384U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 6952);
    *((int *)t2) = 1;
    t3 = (t0 + 6416);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(65, ng0);

LAB5:    xsi_set_current_line(67, ng0);
    xsi_set_current_line(67, ng0);
    t4 = (t0 + 472);
    t5 = *((char **)t4);
    t4 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t5, 32, t4, 32);
    t7 = (t0 + 3704);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);

LAB6:    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_signed_greatereq(t6, 32, t4, 32, t5, 32);
    t7 = (t6 + 4);
    t8 = *((unsigned int *)t7);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB7;

LAB8:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t13 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t13);
    t26 = (t11 ^ t12);
    t27 = (t10 | t26);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t13);
    t30 = (t28 | t29);
    t35 = (~(t30));
    t36 = (t27 & t35);
    if (t36 != 0)
        goto LAB15;

LAB12:    if (t30 != 0)
        goto LAB14;

LAB13:    *((unsigned int *)t6) = 1;

LAB15:    t16 = (t6 + 4);
    t37 = *((unsigned int *)t16);
    t38 = (~(t37));
    t39 = *((unsigned int *)t6);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB16;

LAB17:    xsi_set_current_line(79, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t13 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t13);
    t26 = (t11 ^ t12);
    t27 = (t10 | t26);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t13);
    t30 = (t28 | t29);
    t35 = (~(t30));
    t36 = (t27 & t35);
    if (t36 != 0)
        goto LAB31;

LAB28:    if (t30 != 0)
        goto LAB30;

LAB29:    *((unsigned int *)t6) = 1;

LAB31:    t16 = (t6 + 4);
    t37 = *((unsigned int *)t16);
    t38 = (~(t37));
    t39 = *((unsigned int *)t6);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(84, ng0);
    t2 = (t0 + 3864);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    if (*((unsigned int *)t7) != 0)
        goto LAB37;

LAB36:    t13 = (t5 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB37;

LAB40:    if (*((unsigned int *)t4) > *((unsigned int *)t5))
        goto LAB38;

LAB39:    t16 = (t6 + 4);
    t8 = *((unsigned int *)t16);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB41;

LAB42:
LAB43:
LAB34:
LAB18:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 30);
    t10 = (t9 & 1);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 30);
    t26 = (t12 & 1);
    *((unsigned int *)t5) = t26;
    t13 = ((char*)((ng4)));
    memset(t15, 0, 8);
    t14 = (t6 + 4);
    t16 = (t13 + 4);
    t27 = *((unsigned int *)t6);
    t28 = *((unsigned int *)t13);
    t29 = (t27 ^ t28);
    t30 = *((unsigned int *)t14);
    t35 = *((unsigned int *)t16);
    t36 = (t30 ^ t35);
    t37 = (t29 | t36);
    t38 = *((unsigned int *)t14);
    t39 = *((unsigned int *)t16);
    t40 = (t38 | t39);
    t41 = (~(t40));
    t43 = (t37 & t41);
    if (t43 != 0)
        goto LAB56;

LAB53:    if (t40 != 0)
        goto LAB55;

LAB54:    *((unsigned int *)t15) = 1;

LAB56:    t18 = (t15 + 4);
    t44 = *((unsigned int *)t18);
    t45 = (~(t44));
    t46 = *((unsigned int *)t15);
    t47 = (t46 & t45);
    t48 = (t47 != 0);
    if (t48 > 0)
        goto LAB57;

LAB58:    xsi_set_current_line(119, ng0);

LAB89:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 31);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 31);
    *((unsigned int *)t5) = t11;
    t13 = (t4 + 8);
    t14 = (t4 + 12);
    t12 = *((unsigned int *)t13);
    t26 = (t12 << 1);
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 | t26);
    t28 = *((unsigned int *)t14);
    t29 = (t28 << 1);
    t30 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t30 | t29);
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & 16777215U);
    t36 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t36 & 16777215U);
    t16 = (t0 + 4824);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 24);
    xsi_set_current_line(121, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4344);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);

LAB59:    goto LAB2;

LAB7:    xsi_set_current_line(68, ng0);
    t13 = (t0 + 2504U);
    t14 = *((char **)t13);
    t13 = (t0 + 2464U);
    t16 = (t13 + 72U);
    t17 = *((char **)t16);
    t18 = (t0 + 472);
    t19 = *((char **)t18);
    t18 = (t0 + 3704);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t22 = ((char*)((ng3)));
    memset(t23, 0, 8);
    xsi_vlog_signed_add(t23, 32, t21, 32, t22, 32);
    memset(t24, 0, 8);
    xsi_vlog_signed_minus(t24, 32, t19, 32, t23, 32);
    xsi_vlog_generic_get_index_select_value(t15, 1, t14, t17, 2, t24, 32, 1);
    t25 = (t15 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t15);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB9;

LAB10:
LAB11:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng3)));
    memset(t6, 0, 8);
    xsi_vlog_signed_minus(t6, 32, t4, 32, t5, 32);
    t7 = (t0 + 3704);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 32);
    goto LAB6;

LAB9:    xsi_set_current_line(68, ng0);
    t31 = (t0 + 3704);
    t32 = (t31 + 56U);
    t33 = *((char **)t32);
    t34 = (t0 + 3864);
    xsi_vlogvar_assign_value(t34, t33, 0, 0, 6);
    goto LAB11;

LAB14:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB15;

LAB16:    xsi_set_current_line(71, ng0);

LAB19:    xsi_set_current_line(72, ng0);
    t17 = (t0 + 2664U);
    t18 = *((char **)t17);
    t17 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_add(t15, 32, t18, 8, t17, 32);
    t19 = (t0 + 4184);
    xsi_vlogvar_assign_value(t19, t15, 0, 0, 8);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2664U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB21;

LAB20:    t13 = (t7 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB21;

LAB24:    if (*((unsigned int *)t4) < *((unsigned int *)t7))
        goto LAB22;

LAB23:    t16 = (t6 + 4);
    t8 = *((unsigned int *)t16);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB27:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    t2 = (t0 + 4024);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 55);
    goto LAB18;

LAB21:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB23;

LAB22:    *((unsigned int *)t6) = 1;
    goto LAB23;

LAB25:    xsi_set_current_line(74, ng0);
    t17 = ((char*)((ng3)));
    t18 = (t0 + 5144);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB27;

LAB30:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB31;

LAB32:    xsi_set_current_line(79, ng0);

LAB35:    xsi_set_current_line(80, ng0);
    t17 = (t0 + 2664U);
    t18 = *((char **)t17);
    t17 = (t0 + 4184);
    xsi_vlogvar_assign_value(t17, t18, 0, 0, 8);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng3)));
    xsi_vlog_unsigned_lshift(t42, 55, t3, 55, t2, 32);
    t4 = (t0 + 4024);
    xsi_vlogvar_assign_value(t4, t42, 0, 0, 55);
    xsi_set_current_line(82, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB34;

LAB37:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB39;

LAB38:    *((unsigned int *)t6) = 1;
    goto LAB39;

LAB41:    xsi_set_current_line(84, ng0);

LAB44:    xsi_set_current_line(85, ng0);
    t17 = (t0 + 2664U);
    t18 = *((char **)t17);
    t17 = (t0 + 3864);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = ((char*)((ng3)));
    memset(t15, 0, 8);
    xsi_vlog_unsigned_minus(t15, 32, t20, 6, t21, 32);
    memset(t23, 0, 8);
    xsi_vlog_unsigned_minus(t23, 32, t18, 8, t15, 32);
    t22 = (t0 + 4184);
    xsi_vlogvar_assign_value(t22, t23, 0, 0, 8);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2664U);
    t7 = *((char **)t5);
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    if (*((unsigned int *)t5) != 0)
        goto LAB46;

LAB45:    t13 = (t7 + 4);
    if (*((unsigned int *)t13) != 0)
        goto LAB46;

LAB49:    if (*((unsigned int *)t4) > *((unsigned int *)t7))
        goto LAB47;

LAB48:    t16 = (t6 + 4);
    t8 = *((unsigned int *)t16);
    t9 = (~(t8));
    t10 = *((unsigned int *)t6);
    t11 = (t10 & t9);
    t12 = (t11 != 0);
    if (t12 > 0)
        goto LAB50;

LAB51:    xsi_set_current_line(89, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB52:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2504U);
    t3 = *((char **)t2);
    t2 = (t0 + 3864);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    xsi_vlog_unsigned_lshift(t42, 55, t3, 55, t5, 6);
    t7 = (t0 + 4024);
    xsi_vlogvar_assign_value(t7, t42, 0, 0, 55);
    goto LAB43;

LAB46:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB48;

LAB47:    *((unsigned int *)t6) = 1;
    goto LAB48;

LAB50:    xsi_set_current_line(87, ng0);
    t17 = ((char*)((ng3)));
    t18 = (t0 + 5144);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB52;

LAB55:    t17 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t17) = 1;
    goto LAB56;

LAB57:    xsi_set_current_line(95, ng0);

LAB60:    xsi_set_current_line(96, ng0);
    t19 = (t0 + 4024);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memset(t23, 0, 8);
    t22 = (t23 + 4);
    t25 = (t21 + 4);
    t49 = *((unsigned int *)t21);
    t50 = (t49 >> 0);
    *((unsigned int *)t23) = t50;
    t51 = *((unsigned int *)t25);
    t52 = (t51 >> 0);
    *((unsigned int *)t22) = t52;
    t53 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t53 & 1073741823U);
    t54 = *((unsigned int *)t22);
    *((unsigned int *)t22) = (t54 & 1073741823U);
    t31 = ((char*)((ng1)));
    memset(t24, 0, 8);
    t32 = (t23 + 4);
    t33 = (t31 + 4);
    t55 = *((unsigned int *)t23);
    t56 = *((unsigned int *)t31);
    t57 = (t55 ^ t56);
    t58 = *((unsigned int *)t32);
    t59 = *((unsigned int *)t33);
    t60 = (t58 ^ t59);
    t61 = (t57 | t60);
    t62 = *((unsigned int *)t32);
    t63 = *((unsigned int *)t33);
    t64 = (t62 | t63);
    t65 = (~(t64));
    t66 = (t61 & t65);
    if (t66 != 0)
        goto LAB62;

LAB61:    if (t64 != 0)
        goto LAB63;

LAB64:    t67 = (t24 + 4);
    t68 = *((unsigned int *)t67);
    t69 = (~(t68));
    t70 = *((unsigned int *)t24);
    t71 = (t70 & t69);
    t72 = (t71 != 0);
    if (t72 > 0)
        goto LAB65;

LAB66:    xsi_set_current_line(114, ng0);

LAB88:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4024);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    memset(t6, 0, 8);
    t5 = (t6 + 4);
    t7 = (t4 + 4);
    t8 = *((unsigned int *)t4);
    t9 = (t8 >> 31);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t7);
    t11 = (t10 >> 31);
    *((unsigned int *)t5) = t11;
    t13 = (t4 + 8);
    t14 = (t4 + 12);
    t12 = *((unsigned int *)t13);
    t26 = (t12 << 1);
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 | t26);
    t28 = *((unsigned int *)t14);
    t29 = (t28 << 1);
    t30 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t30 | t29);
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & 16777215U);
    t36 = *((unsigned int *)t5);
    *((unsigned int *)t5) = (t36 & 16777215U);
    t16 = (t0 + 4824);
    xsi_vlogvar_assign_value(t16, t6, 0, 0, 24);
    xsi_set_current_line(116, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4344);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);

LAB67:    goto LAB59;

LAB62:    *((unsigned int *)t24) = 1;
    goto LAB64;

LAB63:    t34 = (t24 + 4);
    *((unsigned int *)t24) = 1;
    *((unsigned int *)t34) = 1;
    goto LAB64;

LAB65:    xsi_set_current_line(96, ng0);

LAB68:    xsi_set_current_line(97, ng0);
    t74 = (t0 + 4024);
    t75 = (t74 + 56U);
    t76 = *((char **)t75);
    memset(t73, 0, 8);
    t77 = (t73 + 4);
    t78 = (t76 + 4);
    t79 = *((unsigned int *)t76);
    t80 = (t79 >> 31);
    *((unsigned int *)t73) = t80;
    t81 = *((unsigned int *)t78);
    t82 = (t81 >> 31);
    *((unsigned int *)t77) = t82;
    t83 = (t76 + 8);
    t84 = (t76 + 12);
    t85 = *((unsigned int *)t83);
    t86 = (t85 << 1);
    t87 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t87 | t86);
    t88 = *((unsigned int *)t84);
    t89 = (t88 << 1);
    t90 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t90 | t89);
    t91 = *((unsigned int *)t73);
    *((unsigned int *)t73) = (t91 & 16777215U);
    t92 = *((unsigned int *)t77);
    *((unsigned int *)t77) = (t92 & 16777215U);
    t93 = ((char*)((ng3)));
    memset(t94, 0, 8);
    xsi_vlog_unsigned_add(t94, 32, t73, 32, t93, 32);
    t95 = (t0 + 4824);
    xsi_vlogvar_assign_value(t95, t94, 0, 0, 24);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 4824);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4024);
    t7 = (t5 + 56U);
    t13 = *((char **)t7);
    memset(t6, 0, 8);
    t14 = (t6 + 4);
    t16 = (t13 + 4);
    t8 = *((unsigned int *)t13);
    t9 = (t8 >> 31);
    *((unsigned int *)t6) = t9;
    t10 = *((unsigned int *)t16);
    t11 = (t10 >> 31);
    *((unsigned int *)t14) = t11;
    t17 = (t13 + 8);
    t18 = (t13 + 12);
    t12 = *((unsigned int *)t17);
    t26 = (t12 << 1);
    t27 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t27 | t26);
    t28 = *((unsigned int *)t18);
    t29 = (t28 << 1);
    t30 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t30 | t29);
    t35 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t35 & 16777215U);
    t36 = *((unsigned int *)t14);
    *((unsigned int *)t14) = (t36 & 16777215U);
    memset(t15, 0, 8);
    t19 = (t4 + 4);
    if (*((unsigned int *)t19) != 0)
        goto LAB70;

LAB69:    t20 = (t6 + 4);
    if (*((unsigned int *)t20) != 0)
        goto LAB70;

LAB73:    if (*((unsigned int *)t4) < *((unsigned int *)t6))
        goto LAB71;

LAB72:    t22 = (t15 + 4);
    t37 = *((unsigned int *)t22);
    t38 = (~(t37));
    t39 = *((unsigned int *)t15);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB74;

LAB75:    xsi_set_current_line(109, ng0);

LAB87:    xsi_set_current_line(110, ng0);
    t2 = (t0 + 4184);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 4344);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 8);

LAB76:    goto LAB67;

LAB70:    t21 = (t15 + 4);
    *((unsigned int *)t15) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB72;

LAB71:    *((unsigned int *)t15) = 1;
    goto LAB72;

LAB74:    xsi_set_current_line(99, ng0);

LAB77:    xsi_set_current_line(100, ng0);
    t25 = (t0 + 4184);
    t31 = (t25 + 56U);
    t32 = *((char **)t31);
    t33 = ((char*)((ng3)));
    memset(t23, 0, 8);
    xsi_vlog_unsigned_add(t23, 32, t32, 8, t33, 32);
    t34 = (t0 + 4344);
    xsi_vlogvar_assign_value(t34, t23, 0, 0, 8);
    xsi_set_current_line(101, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 4824);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 24);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 4824);
    t4 = (t0 + 4824);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t13 = ((char*)((ng5)));
    xsi_vlog_generic_convert_bit_index(t6, t7, 2, t13, 32, 1);
    t14 = (t6 + 4);
    t8 = *((unsigned int *)t14);
    t96 = (!(t8));
    if (t96 == 1)
        goto LAB78;

LAB79:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 4344);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t4 + 4);
    t13 = (t5 + 4);
    t8 = *((unsigned int *)t4);
    t9 = *((unsigned int *)t5);
    t10 = (t8 ^ t9);
    t11 = *((unsigned int *)t7);
    t12 = *((unsigned int *)t13);
    t26 = (t11 ^ t12);
    t27 = (t10 | t26);
    t28 = *((unsigned int *)t7);
    t29 = *((unsigned int *)t13);
    t30 = (t28 | t29);
    t35 = (~(t30));
    t36 = (t27 & t35);
    if (t36 != 0)
        goto LAB83;

LAB80:    if (t30 != 0)
        goto LAB82;

LAB81:    *((unsigned int *)t6) = 1;

LAB83:    t16 = (t6 + 4);
    t37 = *((unsigned int *)t16);
    t38 = (~(t37));
    t39 = *((unsigned int *)t6);
    t40 = (t39 & t38);
    t41 = (t40 != 0);
    if (t41 > 0)
        goto LAB84;

LAB85:    xsi_set_current_line(107, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 5144);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB86:    goto LAB76;

LAB78:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t6), 1);
    goto LAB79;

LAB82:    t14 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t14) = 1;
    goto LAB83;

LAB84:    xsi_set_current_line(105, ng0);
    t17 = ((char*)((ng3)));
    t18 = (t0 + 5144);
    xsi_vlogvar_assign_value(t18, t17, 0, 0, 1);
    goto LAB86;

}

static void Always_130_1(char *t0)
{
    char t4[8];
    char t23[8];
    char t37[8];
    char t53[8];
    char t61[8];
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
    unsigned int t21;
    unsigned int t22;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t38;
    char *t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    char *t52;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    char *t60;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    char *t65;
    char *t66;
    char *t67;
    unsigned int t68;
    unsigned int t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    char *t75;
    char *t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    int t80;
    unsigned int t81;
    unsigned int t82;
    unsigned int t83;
    int t84;
    unsigned int t85;
    unsigned int t86;
    unsigned int t87;
    unsigned int t88;
    char *t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t95;
    char *t96;

LAB0:    t1 = (t0 + 6632U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(130, ng0);
    t2 = (t0 + 6968);
    *((int *)t2) = 1;
    t3 = (t0 + 6664);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(130, ng0);

LAB5:    xsi_set_current_line(131, ng0);
    t5 = (t0 + 2184U);
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

LAB11:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 2984U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng4)));
    memset(t4, 0, 8);
    t5 = (t3 + 4);
    t6 = (t2 + 4);
    t7 = *((unsigned int *)t3);
    t8 = *((unsigned int *)t2);
    t9 = (t7 ^ t8);
    t10 = *((unsigned int *)t5);
    t11 = *((unsigned int *)t6);
    t14 = (t10 ^ t11);
    t15 = (t9 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t6);
    t18 = (t16 | t17);
    t21 = (~(t18));
    t22 = (t15 & t21);
    if (t22 != 0)
        goto LAB17;

LAB14:    if (t18 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t4) = 1;

LAB17:    memset(t23, 0, 8);
    t13 = (t4 + 4);
    t24 = *((unsigned int *)t13);
    t25 = (~(t24));
    t26 = *((unsigned int *)t4);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB18;

LAB19:    if (*((unsigned int *)t13) != 0)
        goto LAB20;

LAB21:    t20 = (t23 + 4);
    t29 = *((unsigned int *)t23);
    t30 = (!(t29));
    t31 = *((unsigned int *)t20);
    t32 = (t30 || t31);
    if (t32 > 0)
        goto LAB22;

LAB23:    memcpy(t61, t23, 8);

LAB24:    t89 = (t61 + 4);
    t90 = *((unsigned int *)t89);
    t91 = (~(t90));
    t92 = *((unsigned int *)t61);
    t93 = (t92 & t91);
    t94 = (t93 != 0);
    if (t94 > 0)
        goto LAB36;

LAB37:    xsi_set_current_line(139, ng0);
    t2 = (t0 + 2824U);
    t3 = *((char **)t2);
    t2 = (t3 + 4);
    t7 = *((unsigned int *)t2);
    t8 = (~(t7));
    t9 = *((unsigned int *)t3);
    t10 = (t9 & t8);
    t11 = (t10 != 0);
    if (t11 > 0)
        goto LAB40;

LAB41:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 4824);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    memset(t23, 0, 8);
    t6 = (t23 + 4);
    t12 = (t5 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (t7 >> 0);
    *((unsigned int *)t23) = t8;
    t9 = *((unsigned int *)t12);
    t10 = (t9 >> 0);
    *((unsigned int *)t6) = t10;
    t11 = *((unsigned int *)t23);
    *((unsigned int *)t23) = (t11 & 8388607U);
    t14 = *((unsigned int *)t6);
    *((unsigned int *)t6) = (t14 & 8388607U);
    t13 = (t0 + 4344);
    t19 = (t13 + 56U);
    t20 = *((char **)t19);
    t33 = (t0 + 2344U);
    t34 = *((char **)t33);
    xsi_vlogtype_concat(t4, 32, 32, 3U, t34, 1, t20, 8, t23, 23);
    t33 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t33, t4, 0, 0, 32, 0LL);

LAB42:
LAB38:
LAB12:    xsi_set_current_line(145, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(131, ng0);

LAB13:    xsi_set_current_line(132, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 32, 0LL);
    xsi_set_current_line(133, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);
    goto LAB12;

LAB16:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB17;

LAB18:    *((unsigned int *)t23) = 1;
    goto LAB21;

LAB20:    t19 = (t23 + 4);
    *((unsigned int *)t23) = 1;
    *((unsigned int *)t19) = 1;
    goto LAB21;

LAB22:    t33 = (t0 + 5144);
    t34 = (t33 + 56U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng4)));
    memset(t37, 0, 8);
    t38 = (t35 + 4);
    t39 = (t36 + 4);
    t40 = *((unsigned int *)t35);
    t41 = *((unsigned int *)t36);
    t42 = (t40 ^ t41);
    t43 = *((unsigned int *)t38);
    t44 = *((unsigned int *)t39);
    t45 = (t43 ^ t44);
    t46 = (t42 | t45);
    t47 = *((unsigned int *)t38);
    t48 = *((unsigned int *)t39);
    t49 = (t47 | t48);
    t50 = (~(t49));
    t51 = (t46 & t50);
    if (t51 != 0)
        goto LAB28;

LAB25:    if (t49 != 0)
        goto LAB27;

LAB26:    *((unsigned int *)t37) = 1;

LAB28:    memset(t53, 0, 8);
    t54 = (t37 + 4);
    t55 = *((unsigned int *)t54);
    t56 = (~(t55));
    t57 = *((unsigned int *)t37);
    t58 = (t57 & t56);
    t59 = (t58 & 1U);
    if (t59 != 0)
        goto LAB29;

LAB30:    if (*((unsigned int *)t54) != 0)
        goto LAB31;

LAB32:    t62 = *((unsigned int *)t23);
    t63 = *((unsigned int *)t53);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = (t23 + 4);
    t66 = (t53 + 4);
    t67 = (t61 + 4);
    t68 = *((unsigned int *)t65);
    t69 = *((unsigned int *)t66);
    t70 = (t68 | t69);
    *((unsigned int *)t67) = t70;
    t71 = *((unsigned int *)t67);
    t72 = (t71 != 0);
    if (t72 == 1)
        goto LAB33;

LAB34:
LAB35:    goto LAB24;

LAB27:    t52 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t52) = 1;
    goto LAB28;

LAB29:    *((unsigned int *)t53) = 1;
    goto LAB32;

LAB31:    t60 = (t53 + 4);
    *((unsigned int *)t53) = 1;
    *((unsigned int *)t60) = 1;
    goto LAB32;

LAB33:    t73 = *((unsigned int *)t61);
    t74 = *((unsigned int *)t67);
    *((unsigned int *)t61) = (t73 | t74);
    t75 = (t23 + 4);
    t76 = (t53 + 4);
    t77 = *((unsigned int *)t75);
    t78 = (~(t77));
    t79 = *((unsigned int *)t23);
    t80 = (t79 & t78);
    t81 = *((unsigned int *)t76);
    t82 = (~(t81));
    t83 = *((unsigned int *)t53);
    t84 = (t83 & t82);
    t85 = (~(t80));
    t86 = (~(t84));
    t87 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t87 & t85);
    t88 = *((unsigned int *)t67);
    *((unsigned int *)t67) = (t88 & t86);
    goto LAB35;

LAB36:    xsi_set_current_line(135, ng0);

LAB39:    xsi_set_current_line(136, ng0);
    t95 = ((char*)((ng4)));
    t96 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t96, t95, 0, 0, 1, 0LL);
    xsi_set_current_line(137, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB38;

LAB40:    xsi_set_current_line(139, ng0);

LAB43:    xsi_set_current_line(140, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 3384);
    xsi_vlogvar_wait_assign_value(t6, t5, 0, 0, 1, 0LL);
    xsi_set_current_line(141, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3544);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 32, 0LL);
    goto LAB42;

}


extern void work_m_00000000002695699534_3492095230_init()
{
	static char *pe[] = {(void *)Always_65_0,(void *)Always_130_1};
	static char *se[] = {(void *)sp_log2};
	xsi_register_didat("work_m_00000000002695699534_3492095230", "isim/adder_float_tb_isim_beh.exe.sim/work/m_00000000002695699534_3492095230.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
