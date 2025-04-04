// 5  50 customer specify data in a bank the data should store in account number, name ,balance, and print all the detail of customer having balance less than 100

#include <stdio.h>

// Structure to store customer data
struct Customer
{
    int account_number;
    char name[100];
    float balance;
};

int main()
{
    
    struct Customer customers[50];

   
    for (int i = 0; i < 50; i++)
    {
        printf("Enter customer %d details:\n", i + 1);
        printf("Enter account number: ");
        scanf("%d", &customers[i].account_number);
        printf("Enter name: ");
        scanf("%s", customers[i].name);
        printf("Enter balance: ");
        scanf("%f", &customers[i].balance);
    }


    printf("Customers with balance less than 100:\n");
    for (int i = 0; i < 50; i++)
    {
        if (customers[i].balance < 100)
        {
            printf("Account Number: %d\n", customers[i].account_number);
            printf("Name: %s\n", customers[i].name);
            printf("Balance: %.2f\n", customers[i].balance);
            printf("\n");
        }
    }

    return 0;
}
