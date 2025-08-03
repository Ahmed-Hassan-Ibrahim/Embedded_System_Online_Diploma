#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "stdio.h"
#include "stdlib.h"
#include "string.h"
#include "conio.h"
#include "Data_Check.h"

//Effective Data
typedef struct Sdata
{
    int ID;
    char name[40];
    float height;
}Sdata_t;

//Linked List Node
typedef struct SStudent
{
    Sdata_t student;
    struct SStudent* next_stud;
}SStudent_t;

//Head node
extern SStudent_t* head;

//APIs
void AddStudent();
int Delete_Student();
void View_Students();
void Delete_All();

#endif