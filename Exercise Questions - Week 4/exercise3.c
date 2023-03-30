#include <stdio.h>

int main()
{
    int array[5]={1,2,3,4,5};
    int *ptr=&array[0];
    for(int i=0;i<5;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
    return 0;
}
