#include<stdio.h>
#include<stdlib.h>

int main(){
    int size ;
    printf("Enter size of array \n");
    scanf("%d",&size);
    int *arr;
    arr=(int*)malloc(size*sizeof(int));
    int i;
    printf("Enter %d elements into the array \n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum =0;
    for(i=0;i<size;i++)
    {
        sum=sum+arr[i];
    }
    printf("sum of array elements: %d\n ",sum);
    free(arr);
    return 0;
}