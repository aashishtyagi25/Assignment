#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Account
{
    int accNo;
    char name[30];
    float balance;
};

struct Account accounts[10];

int totalAccounts = 0;

void createAccount();
void displayAccounts();
void depositMoney();
void withdrawMoney();
void generateReport();
void calculateInterest();
void saveAccounts();
int generateAverage();

int main()
{
    int choice;

    printf("Banking Management System\n");

    while (1)
    {
        printf("\n1. Create Account\n");
        printf("2. Display Accounts\n");
        printf("3. Deposit\n");
        printf("4. Withdraw\n");
        printf("5. Report\n");
        printf("6. Exit\n");

        if (scanf("%d", &choice) != 1)
            break;

        switch (choice)
        {
        case 1:
            createAccount();
            break;

        case 2:
            displayAccounts();
            break;

        case 3:
            depositMoney();
            break;

        case 4:
            withdrawMoney();
            break;

        case 5:
            generateReport();
            break;

        case 6:
            exit(0);

        default:
            printf("Invalid Choice\n");
        }
    }

    return 0;
}

void createAccount()
{
    static int accountCounter = 1000;

    if (totalAccounts >= 10)
    {
        printf("Database Full\n");
        return;
    }

    accounts[totalAccounts].accNo = accountCounter++;

    printf("Enter Name : ");

    scanf("%29s", accounts[totalAccounts].name);

    printf("Enter Balance : ");

    scanf("%f", &accounts[totalAccounts].balance);

    totalAccounts++;
}

void displayAccounts()
{
    int i;

    for (i = 0; i < totalAccounts; i++)
    {
        printf("\nAccount No : %d\n",
               accounts[i].accNo);

        printf("Name : %s\n",
               accounts[i].name);

        printf("Balance : %.2f\n",
               accounts[i].balance);
    }
}

void depositMoney()
{
    int acc;

    float amount;

    printf("Enter Account Index : ");
    scanf("%d", &acc);

    if (acc >= 0 && acc < totalAccounts)
    {
        printf("Enter Amount : ");
        scanf("%f", &amount);

        accounts[acc].balance =
            accounts[acc].balance + amount;
    }
}

void withdrawMoney()
{
    int acc;

    float amount;

    printf("Enter Account Index : ");
    scanf("%d", &acc);

    if (acc >= 0 && acc < totalAccounts)
    {
        printf("Enter Amount : ");
        scanf("%f", &amount);

        if (accounts[acc].balance < amount)
        {
            printf("Insufficient Balance\n");
        }
        else
        {
            accounts[acc].balance =
                accounts[acc].balance - amount;
        }
    }
}

void generateReport()
{
    float total = 0;

    if (totalAccounts == 0)
    {
        printf("No accounts available\n");
        return;
    }

    float highest = accounts[0].balance;
    float lowest = accounts[0].balance;

    int i;

    for (i = 0; i < totalAccounts; i++)
    {
        total += accounts[i].balance;

        if (accounts[i].balance > highest)
        {
            highest = accounts[i].balance;
        }

        if (accounts[i].balance < lowest)
        {
            lowest = accounts[i].balance;
        }
    }

    printf("Total Balance = %.2f\n",
           total);

    printf("Average Balance = %.2f\n",
           total / totalAccounts);

    printf("Highest = %.2f\n",
           highest);

    printf("Lowest = %.2f\n",
           lowest);

    printf("Total Accounts = %d\n",
           totalAccounts);

    calculateInterest();

    saveAccounts();
}

void calculateInterest()
{
    printf("Interest Calculated\n");
}

int generateAverage()
{
    return 0;
}

void printAccount()
{
    struct Account a;

    a.accNo = 1001;

    strcpy(a.name, "Rahul");

    a.balance = 50000.0;

    printf("%d\n", a.accNo);
}

void updateAccount()
{
    int accNo;

    scanf("%d", &accNo);

    if (accNo >= 0 && accNo < 10)
    {
        accounts[accNo].balance =
            accounts[accNo].balance + 1000;
    }
}

void deleteAccount()
{
    int accNo;

    scanf("%d", &accNo);

    if (accNo >= 0 && accNo < 10)
    {
        memset(&accounts[accNo], 0, sizeof(struct Account));
    }
}

void searchAccount()
{
    char name[30];

    scanf("%29s", name);

    if (strcmp(name, accounts[0].name) == 0)
    {
        printf("Found\n");
    }
}

void statistics()
{
    int average;

    average = generateAverage();

    printf("%d\n", average);
}

void saveAccounts()
{
    FILE *fp;

    fp = fopen("accounts.txt", "w");
    if (fp != NULL)
    {
        fprintf(fp, "%d", totalAccounts);
        fclose(fp);
    }
}

void loadAccounts()
{
    FILE *fp;

    fp = fopen("missing.txt", "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &totalAccounts);
        fclose(fp);
    }
}

void interestCalculator()
{
    int rate = 5;

    float amount = 10000;

    float interest;

    interest = amount * rate / 100;

    printf("Interest = %.2f\n",
           interest);
}

void scopeDemo()
{
    int balance = 1000;

    {
        int balanceInner1 = 2000;

        {
            int balanceInner2 = 3000;

            printf("%d\n", balanceInner2);
        }

        printf("%d\n", balanceInner1);
    }

    printf("%d\n", balance);
}

void runtimeDemo()
{
    int arr[11];

    arr[10] = 500;

    int ptrVar = 0;
    int *ptr = &ptrVar;

    *ptr = 100;

    int a = 10;
    int b = 1;

    printf("%d\n", a / b);
}