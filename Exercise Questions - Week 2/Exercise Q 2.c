/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int main()
{
    int rows = 7;
    printf("Full pyramid:\n\n");
    int i = 0, j = 0;
    while (i < rows)
    {
        j = 0;
        while (j < rows - i - 1)
        {
            printf(" ");
            j++;
        }
        j = 0;
        while (j <= i)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n***************************************************\n");
    printf("\nInverted pyramid:\n\n");
    i = rows;
    while (i > 0) 
    {
        j = 0;
        while (j < rows - i) {
            printf(" ");
            j++;
        }
        j = 0;
        while (j < i) {
            printf("* ");
            j++;
        }
        printf("\n");
        i--;
    }
    printf("\n***************************************************\n");
    printf("\nHalf pyramid:\n\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
