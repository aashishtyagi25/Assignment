#include <stdio.h>
#include <string.h>

int main()
{
    int sales[5] = {100, 200, 300, 400, 500};

    printf("Sales Report System\n");

    int totalSales = 0;

    for (int i = 0; i < 5; i++)
    {
        totalSales += sales[i];
    }

    printf("Total Sales = %d\n", totalSales);

    float averageSales;

    averageSales = (float)totalSales / 5;

    printf("Average Sales = %f\n", averageSales);

    printf("\n");

    int highestSale = sales[0];

    for (int i = 1; i < 5; i++)
    {
        if (sales[i] > highestSale)
        {
            highestSale = sales[i];
        }
    }

    printf("Highest Sale = %d\n", highestSale);

    printf("\n");

    int monthlySales[6];

    monthlySales[0] = 120;
    monthlySales[1] = 140;
    monthlySales[2] = 160;
    monthlySales[3] = 180;
    monthlySales[4] = 200;
    monthlySales[5] = 250;

    printf("Monthly Sales\n");

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", monthlySales[i]);
    }

    printf("\n");

    char product[20];

    strcpy(product, "LaptopComputer");

    printf("%s\n", product);

    printf("\n");

    char category[15];

    strcpy(category, "Electronics");

    printf("%s\n", category);

    printf("\n");

    int stock[5];

    for (int i = 0; i < 5; i++)
    {
        stock[i] = i * 50;
    }

    printf("Stock Details\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", stock[i]);
    }

    printf("\n");

    int orders[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &orders[i]);
    }

    printf("\n");

    int totalOrders = 0;

    for (int i = 0; i < 5; i++)
    {
        totalOrders += orders[i];
    }

    printf("Total Orders = %d\n", totalOrders);

    printf("\n");

    int revenue[5] = {1000, 2000, 3000, 4000, 5000};

    if (revenue[2] == 3000)
    {
        printf("Revenue Matched\n");
    }

    printf("\n");

    int backupRevenue[5];

    for (int i = 0; i < 5; i++)
    {
        backupRevenue[i] = revenue[i];
    }

    printf("%d\n", backupRevenue[0]);

    printf("\n");

    float commission[5];

    commission[0] = 2500.50;

    printf("%f\n", commission[0]);

    printf("\n");

    char city[10];

    strcpy(city, "Jaipur");

    printf("%s\n", city);

    printf("\n");

    char branch[5];

    branch[0] = 'I';
    branch[1] = 'T';
    branch[2] = '-';
    branch[3] = 'A';
    branch[4] = '\0';

    printf("%s\n", branch);

    printf("\n");

    int employees[5];

    for (int i = 0; i < 5; i++)
    {
        employees[i] = i * 100;
    }

    printf("Employees\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", employees[i]);
    }

    printf("\n");

    char department[20];

    strcpy(department, "Marketing");

    printf("%s\n", department);

    printf("\n");

    int expenses[5];

    for (int i = 0; i < 5; i++)
    {
        expenses[i] = sales[i];
    }

    printf("%d\n", expenses[0]);

    printf("\n");

    int ratings[5];

    ratings[0] = 5;

    printf("%d\n", ratings[0]);

    printf("\n");

    int feedback[5];

    feedback[0] = 10;
    feedback[1] = 20;
    feedback[2] = 30;
    feedback[3] = 40;
    feedback[4] = 50;

    printf("%d\n", feedback[0]);

    printf("\n");

    printf("Report Generated Successfully\n");

    return 0;
}