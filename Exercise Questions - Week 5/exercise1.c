#include<stdio.h>

struct student_details{
    char name[50];
    char email[25];
    char mobile_number[10];
    float percentage;
};

struct department{
    char dept_name[25];
    struct student_details s;
    float average;
}d[5];

int main(){
    int n,i;
    printf("\nEnter the no of department : ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("\nEnter the dept name :");
        scanf("%s",d[i].dept_name);
        printf("\nEnter the students details in this dept in same struct order(name email phno percentage\n");
        scanf("%s %s %s %f",d[i].s.name,d[i].s.email,d[i].s.mobile_number,&d[i].s.percentage);
        d[i].average=d[i].s.percentage;
    }
    for(i=0;i<n;i++){
        printf("\nAverage of %s is = %.2f %",d[i].dept_name,d[i].average);
    }
}
