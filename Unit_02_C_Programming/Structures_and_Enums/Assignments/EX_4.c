/*
 =====================================================================================================
 Name        : EX_4.c
 Author      : Ahmed Hassan Ibrahim
 Description : C Structures, Unions, and Enums Assignment EX 4 <<Students Infromation Structure Array>>
 =====================================================================================================
 */

#include <stdio.h>

struct S_Student
{
    char name[50];
    int roll_num;
    float marks;
};

struct S_Student Input(int index)
{
    struct S_Student s_student;
    printf("\nFor roll number %d\n", index);
    printf("Student name: ");
    scanf("%s", s_student.name);
    printf("Student marks: ");
    scanf("%f", &s_student.marks);
    s_student.roll_num = index;
    return s_student;
}

void Print(struct S_Student s_student)
{
    printf("\n\nInfromation for roll number %d: \nName: %s\nMarks: %0.2f", s_student.roll_num, s_student.name, s_student.marks);
    return;
}

int main()
{
    struct S_Student s_students[10];
    int i;
    printf("Enter students information:\n");
    for(i = 0; i < 10; i++)
        s_students[i] = Input(i + 1);
    printf("\nDisplaying information of students:");
    for(i = 0; i < 10; i++)
        Print(s_students[i]);
    return 0;
}
