/*
 ============================================================================
 Name        : Q5.c
 Author      : Ahmed Hassan Ibrahim
 Description : Assignment 7 C Pointers Q5 <show a pointer to an array which contents
                                           are pointer to structure.>
 ============================================================================
 */

#include <stdio.h>

struct s_employee
{
    char* name;
    int ID;
};

int main()
{
    static struct s_employee emp1 = {"Alex", 1002}, emp2 = {"Ahmed", 1003}, emp3 = {"Aly", 1004};
    struct s_employee (*arr[]) = {&emp1, &emp2, &emp3};
    struct s_employee (*(*ptr)[3]) = &arr;

    int i;
    printf("Employees Names: ");
    for(i = 0; i < 3; i++)
    {
        printf("%s", (**(*ptr + i)).name);
        printf(" ");
    }
    printf("\nEmployees ID's: ");
        for(i = 0; i < 3; i++)
    {
        printf("%d", (**(*ptr + i)).ID);
        printf(" ");
    }

    return 0;
}