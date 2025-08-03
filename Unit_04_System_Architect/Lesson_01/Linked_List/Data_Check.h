#ifndef DATA_CHECK_H
#define DATA_CHECK_H

// Check float i/p
#define check_scan_f(x)                                   \
    while (scanf("%f", &x) != 1 || (getchar() != '\n'))   \
    {                                                     \
        while (getchar() != '\n')                         \
            ;                                             \
        printf("Invalid input. Please enter a number: "); \
    }

// Check integer i/p
#define check_scan_d(x)                                   \
    while (scanf("%d", &x) != 1 || (getchar() != '\n'))   \
    {                                                     \
        while (getchar() != '\n')                         \
            ;                                             \
        printf("Invalid input. Please enter a number: "); \
    }

#endif