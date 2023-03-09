
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice;
    char ch;
    float amount;
    printf("List of banks:\n1. Indian Bank\n2. ICICI Bank\n3. City Union Bank\n4. Canara Bank\n5. Bank of Baroda\n");
    printf("Select a bank (1-5): ");
    scanf("%d", &choice);
    switch(choice)
    {
        case 1:
            printf(" \nSelected - Indian Bank\n");
            break;
        case 2:
            printf(" \nSelected - ICICI Bank\n");
            break;
        case 3:
            printf(" \nSelected - City Union Bank\n");
            break;
        case 4:
            printf(" \nSelected - Canara Bank\n");
            break;
        case 5:
            printf(" \nSelected - Bank of Baroda\n");
            break;
        default:
            printf("\nInvalid choice. Please select a valid bank (1-5).\n");
            exit(0);
    }
    do
    {
     printf("\n Banking Operations:\n1. Deposit\n2. Withdraw\n3. Balance and Benefits Enquiry\n");
     printf("\nSelect an operation (1-3): ");
     scanf("%d",&choice);
     switch(choice)
     {
        case 1:
            printf(" Selected - Deposit Operation");
            printf("\nAccount Types\n1. Savings\n2. Current\n3. Demat\n");
            scanf("Enter account type:%d",&choice);
            switch(choice)
            {
                case 1:
                     printf(" Selected - Savings Account\n");
                     printf("Enter amount to deposit: ");
                     scanf("%f", &amount);
                     printf("\nAmount deposited successfully into Savings account.\n");
                     break;
                case 2:
                     printf(" Selected - Current Account\n");
                     printf("Enter amount to deposit: ");
                     scanf("%f", &amount);
                     printf("\nAmount deposited successfully into Current account.\n");
                     break;
                case 3:
                     printf(" Selected - Demat Account\n");
                     printf("Enter amount to deposit: ");
                     scanf("%f", &amount);
                     printf("\nAmount deposited successfully into Demat account.\n");
                     break;
                default:
                     printf("\nInvalid choice. Please select a valid choice (1-3).\n");
                     exit(0);
            }
            break;
        case 2:
            printf(" Selected - Withdrawl Operation");
            printf("\n Account type:\n1. Savings\n2. Current\n3. Demat\n");
            scanf("Enter account type:%d",&choice);
            switch(choice)
            {
                case 1:
                     printf(" Selected - Savings Account\n");
                     printf("Enter amount to Withdraw: ");
                     scanf("%f", &amount);
                     printf("\nAmount Withdrawn successfully from Savings account.\n");
                     break;
                case 2:
                     printf(" Selected - Current Account\n");
                     printf("Enter amount to Withdraw: ");
                     scanf("%f", &amount);
                     printf("\nAmount Withdrawn successfully from Current account.\n");
                     break;
                case 3:
                     printf(" Selected - Demat Account\n");
                     printf("Enter amount to Withdraw: ");
                     scanf("%f", &amount);
                     printf("\nAmount Withdrawn successfully from Demat account.\n");
                     break;  
                default:
                     printf("\nInvalid choice. Please select a valid choice (1-3).\n");
                     exit(0);
            }
            break;
        case 3:
            printf(" Selected - Balance and Benefits Enquiry");
            printf("\nAccount type:\n1. Savings\n2. Current\n3. Demat\n");
            scanf("Enter account type:%d",&choice);
            switch(choice)
            {
                case 1:
                     printf("SAVINGS ACCOUNT\n");
                     printf("Balance:10,000\n ");
                     printf("Benefits:\n Interest : 1%.\nTax:0.3%.\n");
                     break;
                case 2:
                     printf("CURRENT ACCOUNT\n");
                     printf("Balance:10,000\n ");
                     printf("Benefits:\n Interest : 1%.\nTax:0.4%.\n");
                     break;
                case 3: 
                     printf("DEMAT ACCOUNT\n");
                     printf("Balance:15,000\n ");
                     printf("Benefits:\n Brokerage : 1%.\nTax:0.6%.\n");
                     break;
                default:
                     printf("\nInvalid choice. Please select a valid choice (1-3).\n");
                     exit(0);
            }
            break;   
        default:
            printf("\nInvalid choice. Please select a valid operation (1-3).\n");
            exit(0);
     }
     printf("Do you want to repeat again for other details!!! say y or n");
     scanf("%c",&ch);
    }while(ch=='y');
   return 0;
}

