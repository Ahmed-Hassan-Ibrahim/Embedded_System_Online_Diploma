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
//Function that displays the data value stored in the node at the given index position.
int Find_Node();
//Function to count the number of nodes in a given singly linked list
int List_Len(SStudent_t* node);
//Function that returns the value at the n’th node from end of the Linked List.
int Find_Node_From_End();
//Function to find the middle node of linked list
int Find_Middle_Node();
//Function that detects if there is a loop in the linked list
int Detect_Loop();
//Function that reverse the order of a linked list
int Reverse_List();

#endif