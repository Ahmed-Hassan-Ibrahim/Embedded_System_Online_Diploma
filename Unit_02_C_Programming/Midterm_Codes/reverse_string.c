/*
 ============================================================================
 Author      : Ahmed Hassan Ibrahim
 Description : Function to reverse words in a given string
 ============================================================================
 */

#include <stdio.h>
#include <string.h>

void reverse_str(char* str, int n)
{
    int i, j, k, index = 0;
    char result[n + 1];
    for(i = n; i >= 0; i--)
    {
        if (str[i] == ' ')
        {
            for(j = i+1, k = index; (j < n) && (str[j] != ' '); j++, k++)
            {
                result[k] = str[j];
                index++;
            }
            result[k] = ' ';
            index++;
        }
    }
    for(i = 0, k = index; (i < n) && (str[i] != ' '); i++, k++)
    {
        result[k] = str[i];
    }
    for(i = 0; i < n; i++)
    {
        str[i] = result[i];
    }
    return;
}

int main()
{
    char str[] = "mohamed gamal";
    printf("Input string: %s", str);
    reverse_str(str, strlen(str));
    printf("\nAfter reverse: %s", str);
    return 0;
}