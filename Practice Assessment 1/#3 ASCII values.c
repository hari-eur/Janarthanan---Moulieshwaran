#include <stdio.h>
int main()
{  
    char chart;
    printf("Enter a character: ");
    scanf("%c", &chart);  
    printf("ASCII value of %c = %d", chart, chart);
    return 0;
}