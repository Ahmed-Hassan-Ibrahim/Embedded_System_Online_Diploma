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
            default:
                printf("\nIncorrect option selected!\n");
                break;
        }
    }
    
    

}