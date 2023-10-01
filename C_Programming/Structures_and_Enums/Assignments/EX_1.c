/*
 ================================================================================================
 Name        : EX_1.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Structures, Unions, and Enums Assignment EX 1 <<Students Infromation Structure>>
 ================================================================================================
 */

#include <stdio.h>

struct S_Student
{
    char name[50];
    int roll_num;
    float marks;
};

int main()
{
    struct S_Student s_s1;
    printf("Enter student's name: ");
    scanf("%s", s_s1.name);

    printf("Enter student's roll number: ");
    scanf("%d", &s_s1.roll_num);

    printf("Enter student's mark: ");
    scanf("%f", &s_s1.marks);

    printf("\nDisplaying Information\nName: %s\nRoll number: %d\nMarks: %0.2f\n", s_s1.name, s_s1.roll_num, s_s1.marks);
    return 0;
}
