#include <stdio.h>

int main()
{
   int a;
   int *p=&a;
   printf("enter the value =");
   scanf("%d",&a);
   printf("pointer address=%p\nValue in pointer=%d",p,*p);
    return 0;
}
