/*
 ================================================================================================
 Name        : EX_2.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Structures, Unions, and Enums Assignment EX 2 <<Add 2 distances in feet and inches>>
 ================================================================================================
 */

#include <stdio.h>

struct S_Distance
{
    int feet;
    float inch;
};

struct S_Distance Add(struct S_Distance s_a, struct S_Distance s_b)
{
    struct S_Distance s_result;
    int temp;
    s_result.feet = s_a.feet + s_b.feet;
    s_result.inch = s_a.inch + s_b.inch;
    if(s_result.inch > 12.0)
    {
        temp = s_result.inch / 12;
        s_result.feet += temp;
        s_result.inch -= temp * 12;
    }
    return s_result;
}

struct S_Distance input(char* name)
{
    struct S_Distance s_distance;
    printf("\nEnter information for %s distance:\n", name);
    printf("Enter feet: ");
    scanf("%d", &s_distance.feet);
    printf("Enter inch: ");
    scanf("%f", &s_distance.inch);
    return s_distance;
}

int main()
{
    struct S_Distance s_a, s_b, s_z;
    s_a = input("1st");
    s_b = input("2nd");
    s_z = Add(s_a, s_b);
    printf("\nThe sum of two distances = %d'%0.2lf\"\n", s_z.feet, s_z.inch);
}