#include <stdio.h>
#include <string.h>

int main()
{
    int numbers[10];

    printf("Array Operations Program\n");

    for (int i = 0; i < 10; i++)
    {
        numbers[i] = (i + 1) * 10;
    }

    printf("\nNumbers Array\n");

    for (int i = 0; i < 10; i++)
    {
        printf("%d ", numbers[i]);
    }

    printf("\n");

    int sum = 0;

    for (int i = 0; i < 10; i++)
    {
        sum += numbers[i];
    }

    printf("Sum = %d\n", sum);

    float average;

    average = (float)sum / 10;

    printf("Average = %f\n", average);

    printf("\n");

    int marks[5] = {90, 85, 80, 75, 70};

    printf("Highest Marks\n");

    int highest = marks[0];

    for (int i = 1; i < 5; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    printf("%d\n", highest);

    printf("\n");

    int attendance[5];

    attendance[0] = 1;
    attendance[1] = 1;
    attendance[2] = 1;
    attendance[3] = 0;
    attendance[4] = 1;

    int present = 0;

    for (int i = 0; i < 5; i++)
    {
        present += attendance[i];
    }

    printf("Present Days = %d\n", present);

    printf("\n");

    char subject[20];

    strcpy(subject, "ComputerScience");

    printf("%s\n", subject);

    printf("\n");

    char branch[20];

    strcpy(branch, "IT");

    printf("%s\n", branch);

    printf("\n");

    char college[10];

    college[0] = 'A';
    college[1] = 'C';
    college[2] = 'E';
    college[3] = 'I';
    college[4] = 'T';
    college[5] = '\0';

    printf("%s\n", college);

    printf("\n");

    int fees[5];

    for (int i = 0; i < 5; i++)
    {
        fees[i] = i * 10000;
    }

    printf("Fees Structure\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", fees[i]);
    }

    printf("\n");

    int result[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &result[i]);
    }

    printf("\n");

    int totalResult = 0;

    for (int i = 0; i < 5; i++)
    {
        totalResult += result[i];
    }

    printf("%d\n", totalResult);

    printf("\n");

    int stock[5] = {100, 200, 300, 400, 500};

    if (stock[2] == 300)
    {
        printf("Stock Available\n");
    }

    printf("\n");

    int backup[5];

    for (int i = 0; i < 5; i++)
    {
        backup[i] = stock[i];
    }

    printf("%d\n", backup[0]);

    printf("\n");

    float salary[5];

    salary[0] = 25000.75;

    printf("%f\n", salary[0]);

    printf("\n");

    int inventory[5];

    for (int i = 0; i < 5; i++)
    {
        inventory[i] = i;
    }

    printf("Inventory\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", inventory[i]);
    }

    printf("\n");

    char city[20];

    strcpy(city, "JaipurCity");

    printf("%s\n", city);

    printf("\n");

    int count[5];

    for (int i = 0; i < 5; i++)
    {
        count[i] = inventory[i];
    }

    printf("%d\n", count[0]);

    printf("\n");

    printf("Program Ended\n");

    return 0;
}