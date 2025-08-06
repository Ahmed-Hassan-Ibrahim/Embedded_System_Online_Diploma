#include "app.h"

void Start_App()
{
    int input = 0;

    printf("Starting student database......\n");
    printf("<<<<<<<<<<  Student Database    >>>>>>>>>>\n");

    while(1)
    {
        printf("\n=================================================\n");
        printf("Choose one of the following options:\n");
        printf("\n1: Add Student");
        printf("\n2: Delete Student");
        printf("\n3: View Students");
        printf("\n4: Delete All");
        printf("\n5: Display Nth node");
        printf("\n6: Display Database length");
        printf("\n7: Display Nth node from the end");
        printf("\n8: Display the middle node");
        printf("\n9: Detect if a loop exist in the linked list");
        printf("\n10: Reverse the linked list");
        printf("\n\nEnter option: ");
        check_scan_d(input);

        switch (input)
        {
            case 1: 
                AddStudent(); break;
            case 2:
                Delete_Student(); break;
            case 3:
                View_Students(); break;
            case 4:
                Delete_All(); break;
            case 5:
                Find_Node(); break;
            case 6:
                SStudent_t *Temp_Node = head;
                printf("\nThe length of the linked list = %d", List_Len(Temp_Node));
                Temp_Node = NULL;
                free(Temp_Node);
                break;
            case 7:
                Find_Node_From_End(); break;
            case 8:
                Find_Middle_Node(); break;
            case 9:
                Detect_Loop(); break;
            case 10:
                Reverse_List(); break;
            default:
                printf("\nIncorrect option selected!\n");
                break;
        }
    }
}