#include "Linked_List.h"

SStudent_t* head = NULL;

void AddStudent()
{
    SStudent_t* p_temp;
    SStudent_t* LastNode;

    // If list is empty
    if (head == NULL)
    {
        // Create new record
        p_temp = (SStudent_t*)malloc(sizeof(SStudent_t));
        // Assign head to new record
        head = p_temp;
    }
    // If not empty
    else
    {
        // Navigate until you reach the last node
        LastNode = head;
        while (LastNode->next_stud != NULL)
            LastNode = LastNode->next_stud;
        // Create new record
        p_temp = (SStudent_t*)malloc(sizeof(SStudent_t));
        // Assign last node to new record
        LastNode->next_stud = p_temp;
    }

    printf("\nEnter student ID: ");
    check_scan_d(p_temp->student.ID);

    printf("\nEnter student full name: ");
    scanf("%[^\n]%*c", p_temp->student.name);

    printf("\nEnter student height: ");
    check_scan_f(p_temp->student.height);

    p_temp->next_stud = NULL;
}

int Delete_Student()
{
    int selected_ID;
    printf("\nEnter student ID to be deleted: ");
    check_scan_d(selected_ID);

    // List is not empty
    if (head)
    {
        SStudent_t* selected_node = head;
        SStudent_t* prev_node = NULL;

        // Loop on all records
        while (selected_node)
        {
            if (selected_node->student.ID == selected_ID)
            {
                // Selected node is not the first node
                if (prev_node)
                    prev_node->next_stud = selected_node->next_stud;
                // Selected node is the first node and the list contain multiple nodes
                else if (selected_node->next_stud)
                    head->next_stud = selected_node->next_stud;

                // Selected node is the first node and the list contain only 1 node
                else
                    head = NULL;

                free(selected_node);
                return 1;
            }

            prev_node = selected_node;
            selected_node = selected_node->next_stud;
        }

        printf("\nProvided ID does not exist in the database.\n");
    }
    else
        printf("\nDatabase is empty.\n");
}

void View_Students()
{
    SStudent_t* Current_Node = head;
    int count = 1;

    if (!head)
        printf("\nDatabase is empty.\n");
    else
    {
        while (Current_Node)
        {
            printf("\nRecord number %d: ", count);
            printf("\n\t ID: %d", Current_Node->student.ID);
            printf("\n\t Name: %s", Current_Node->student.name);
            printf("\n\t Height: %.2f", Current_Node->student.height);
            printf("\n-------------------------------------------------\n");
            Current_Node = Current_Node->next_stud;
            count++;
        }
    }
}

void Delete_All()
{
    SStudent_t* Current_Node = head;

    if (!head)
        printf("\nDatabase is empty.\n");
    else
    {
        while (Current_Node)
        {
            SStudent_t* Temp_Node = Current_Node;
            Current_Node = Current_Node->next_stud;
            free(Temp_Node);
        }
        head = NULL;
    }
}

int Find_Node()
{
    int index, count = 0;
    SStudent_t* Current_Node = head;
    printf("Enter the nth node you want to search for: ");
    check_scan_d(index);

    while (Current_Node)
    {
        if (count == index)
        {
            printf("\n\t ID: %d", Current_Node->student.ID);
            printf("\n\t Name: %s", Current_Node->student.name);
            printf("\n\t Height: %.2f", Current_Node->student.height);
            return 1;
        }
        count++;
        Current_Node = Current_Node->next_stud;
    }

    printf("\nThe index provided is not valid.\n");
}

int List_Len(SStudent_t* node)
{
    if (node == NULL)
        return 0;

    return (1 + List_Len(node->next_stud));
}

int Find_Node_From_End()
{
    SStudent_t* Main_Node = head;
    SStudent_t* Reference_Node = head;
    int index, i;

    if (!head)
    {
        printf("\nDatabase is empty.\n");
        return 0;
    }

    printf("Enter the nth node you want to search for from the end: ");
    check_scan_d(index);

    if (index == 0)
    {
        printf("\nThe index provided is not valid.\n");
        return 0;
    }

    //First, move reference pointer to n nodes from head.
    for (i = 0; i < index; i++)
    {
        if (Reference_Node == NULL)
        {
            printf("\nThe index provided is not valid.\n");
            return 0;
        }
        Reference_Node = Reference_Node->next_stud;
    }

    //Now move both pointers one by one until the reference pointer reaches the end.
    //Now the main pointer will point to nth node from the end. 
    while (Reference_Node)
    {
        Main_Node = Main_Node->next_stud;
        Reference_Node = Reference_Node->next_stud;
    }

    printf("\n\t ID: %d", Main_Node->student.ID);
    printf("\n\t Name: %s", Main_Node->student.name);
    printf("\n\t Height: %.2f", Main_Node->student.height);
    return 1;
}

int Find_Middle_Node()
{
    SStudent_t* Fast_Node = head;
    SStudent_t* Slow_Node = head;

    if (!head)
    {
        printf("\nDatabase is empty.\n");
        return 0;
    }

    // Traverse linked list using two pointers. 
    //Move one pointer by one and other pointer by two. 
    //When the fast pointer reaches end slow pointer will reach middle of the linked list.
    while (Fast_Node)
    {
        Fast_Node = Fast_Node->next_stud;
        if (Fast_Node == NULL)
            break;
        Fast_Node = Fast_Node->next_stud;
        Slow_Node = Slow_Node->next_stud;
    }

    printf("\n\t ID: %d", Slow_Node->student.ID);
    printf("\n\t Name: %s", Slow_Node->student.name);
    printf("\n\t Height: %.2f", Slow_Node->student.height);
    return 1;
}

int Detect_Loop()
{
    SStudent_t* Fast_Node = head;
    SStudent_t* Slow_Node = head;

    if (!head)
    {
        printf("\nDatabase is empty.\n");
        return 0;
    }

    //Move one pointer(slow_p) by one and another pointer(fast_p) by two.
    //If these pointers meet at the same node then there is a loop. If pointers do not meet then linked list doesn’t have a loop
    while (Fast_Node)
    {
        Fast_Node = Fast_Node->next_stud;
        if (Fast_Node == NULL)
            break;
        Fast_Node = Fast_Node->next_stud;
        Slow_Node = Slow_Node->next_stud;
        if (Fast_Node == Slow_Node)
        {
            printf("\nLoop is detected\n");
            return 0;
        }
    }
    printf("\nNo loop is detected.\n");
    return 1;
}

int Reverse_List()
{
    SStudent_t* Current_Node = head;
    SStudent_t* Prev_Node = NULL;
    SStudent_t* Next_Node = NULL;

    if (!head)
    {
        printf("\nDatabase is empty.\n");
        return 0;
    }

    while (Current_Node)
    {
        Next_Node = Current_Node->next_stud;
        Current_Node->next_stud = Prev_Node;
        Prev_Node = Current_Node;
        Current_Node = Next_Node;
    }

    head = Prev_Node;

    return 1;
}

