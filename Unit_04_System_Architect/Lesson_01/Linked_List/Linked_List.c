#include "Linked_List.h"

SStudent_t* head = NULL;

void AddStudent()
{
    SStudent_t *p_temp;
    SStudent_t *LastNode;

    // If list is empty
    if (head == NULL)
    {
        // Create new record
        p_temp = (SStudent_t *)malloc(sizeof(SStudent_t));
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
        p_temp = (SStudent_t *)malloc(sizeof(SStudent_t));
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
        SStudent_t *selected_node = head;
        SStudent_t *prev_node = NULL;

        // Loop on all records
        while (selected_node)
        {
            if (selected_node->student.ID == selected_ID)
            {
                // Selected node is not the first node
                if (prev_node)
                    prev_node->next_stud = selected_node->next_stud;
                // Selected node is the first node
                else
                    head->next_stud = selected_node->next_stud;

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
    SStudent_t *Current_Node = head;
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
            printf("\n\t Height: %f", Current_Node->student.height);
            printf("\n-------------------------------------------------\n");
            Current_Node = Current_Node->next_stud;
            count++;
        }
    }
}

void Delete_All()
{
    SStudent_t *Current_Node = head;

    if (!head)
        printf("\nDatabase is empty.\n");
    else
    {
        while (Current_Node)
        {
            SStudent_t *Temp_Node = Current_Node;
            Current_Node = Current_Node->next_stud;
            free (Temp_Node);
        }
        head = NULL;
    }
}