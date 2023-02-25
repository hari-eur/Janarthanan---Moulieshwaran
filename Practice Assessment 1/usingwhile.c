#include <stdio.h>
#include<string.h>
int main()
{
    int i=0,j,n;
    char name[25];
    printf("enter your name\n");
    scanf("%s",name);
    n=strlen(name);
    while(i<n)
    {
        j=0;
        while(j<=i){
           printf("%c",name[j]);
           j++;
        }
        i++;
        printf("\n");
    }
    return 0;
}
