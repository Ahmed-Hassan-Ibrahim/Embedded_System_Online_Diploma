/*
 ================================================================================================
 Name        : EX_3.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Structures, Unions, and Enums Assignment EX 3 <<Add 2 complex numbers>>
 ================================================================================================
 */

#include <stdio.h>

struct S_Complex_Number
{
    double real_prt;
    double img_prt;
};

struct S_Complex_Number Add(struct S_Complex_Number s_a, struct S_Complex_Number s_b)
{
    struct S_Complex_Number s_result;
    s_result.real_prt = s_a.real_prt + s_b.real_prt;
    s_result.img_prt = s_a.img_prt + s_b.img_prt;
    return s_result;
}

struct S_Complex_Number Read_Complex(char* name)
{
    struct S_Complex_Number s_num;
    printf("Enter %s real part value: ", name);
    scanf("%lf", &s_num.real_prt);
    printf("Enter %s imagenary part value: ", name);
    scanf("%lf", &s_num.img_prt);
    return s_num;
}

void Print_Complex(char* name, struct S_Complex_Number num)
{
    printf("\n%s = %0.1lf + %0.1lf i\n", name, num.real_prt, num.img_prt);
    return;
}

int main()
{
    struct S_Complex_Number s_X, s_Y, s_Sum;
    s_X = Read_Complex("1st number");
    printf("\n");
    s_Y = Read_Complex("2nd number");
    s_Sum = Add(s_X, s_Y);
    Print_Complex("Sum", s_Sum);
    return 0;
}
