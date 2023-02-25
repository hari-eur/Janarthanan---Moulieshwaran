#include <stdio.h>
#include<string.h>
int main()
{
    int i,j,n;
    char name[25];
    printf("enter your name\n");
    scanf("%s",name);
    n=strlen(name);
    for(i=0;i<n;i++)
    { 
        for(j=0;j<=i;j++){
         printf("%c",name[j]);
        }
        printf("\n");
    }
    
    return 0;
}