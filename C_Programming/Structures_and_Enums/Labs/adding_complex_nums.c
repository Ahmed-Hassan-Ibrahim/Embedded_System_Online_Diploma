/*
 =====================================================================================
 Name        : Lab_1.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Structures, Unions, and Enums Lab 1 <<Adding two complex numbers>>
 =====================================================================================
 */

#include <stdio.h>

struct S_Complex_Number
{
    double real_prt;
    double img_prt;
};

struct S_Complex_Number Add(struct S_Complex_Number a, struct S_Complex_Number b)
{
    struct S_Complex_Number result;
    result.real_prt = a.real_prt + b.real_prt;
    result.img_prt = a.img_prt + b.img_prt;
    return result;
}

struct S_Complex_Number Read_Complex(char* name)
{
    struct S_Complex_Number num;
    printf("Enter %s real part value: ", name);
    scanf("%lf", &num.real_prt);
    printf("Enter %s imagenary part value: ", name);
    scanf("%lf", &num.img_prt);
    return num;
}

void Print_Complex(char* name, struct S_Complex_Number num)
{
    printf("%s = %lf + j %lf\n", name, num.real_prt, num.img_prt);
    return;
}

int main()
{
    struct S_Complex_Number X, Y, Z;
    X = Read_Complex("X");
    Y = Read_Complex("Y");
    Z = Add(X, Y);
    Print_Complex("Z", Z);
    return 0;
}

