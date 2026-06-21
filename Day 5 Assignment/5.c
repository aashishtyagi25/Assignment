#include <stdio.h>
#include <string.h>

int main()
{
    int marks[10] = {75, 80, 85, 90, 95, 70, 65, 88, 92, 78};

    printf("Student Performance Analysis\n");

    int total = 0;

    for (int i = 0; i < 10; i++)
    {
        total += marks[i];
    }

    printf("Total Marks = %d\n", total);

    float average;

    average = (float)total / 10;

    printf("Average = %f\n", average);

    printf("\n");

    int highest = marks[0];

    for (int i = 1; i < 10; i++)
    {
        if (marks[i] > highest)
        {
            highest = marks[i];
        }
    }

    printf("Highest = %d\n", highest);

    printf("\n");

    int lowest = marks[0];

    for (int i = 1; i < 10; i++)
    {
        if (marks[i] < lowest)
        {
            lowest = marks[i];
        }
    }

    printf("Lowest = %d\n", lowest);

    printf("\n");

    int attendance[10];

    for (int i = 0; i < 10; i++)
    {
        attendance[i] = 1;
    }

    int present = 0;

    for (int i = 0; i < 10; i++)
    {
        present += attendance[i];
    }

    printf("Present Days = %d\n", present);

    printf("\n");

    char subject[20];

    strcpy(subject, "DataStructures");

    printf("%s\n", subject);

    printf("\n");

    char department[30];

    strcpy(department, "InformationTechnology");

    printf("%s\n", department);

    printf("\n");

    int fees[5];

    for (int i = 0; i < 5; i++)
    {
        fees[i] = i * 10000;
    }

    printf("Fees\n");

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

    int inventory[5] = {10, 20, 30, 40, 50};

    if (inventory[2] == 30)
    {
        printf("Item Found\n");
    }

    printf("\n");

    int backup[5];

    for (int i = 0; i < 5; i++)
    {
        backup[i] = inventory[i];
    }

    printf("%d\n", backup[0]);

    printf("\n");

    float salary[5];

    salary[0] = 65000.75;

    printf("%f\n", salary[0]);

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

    int stock[5];

    for (int i = 0; i < 5; i++)
    {
        stock[i] = i * 100;
    }

    printf("Stock\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", stock[i]);
    }

    printf("\n");

    char course[20];

    strcpy(course, "Programming");

    printf("%s\n", course);

    printf("\n");

    int ratings[5];

    ratings[0] = 10;

    printf("%d\n", ratings[0]);

    printf("\n");

    int feedback[5] = {1, 2, 3, 4, 5};

    printf("%d\n", feedback[0]);

    printf("\n");

    int scores[5];

    for (int i = 0; i < 5; i++)
    {
        scores[i] = marks[i];
    }

    printf("%d\n", scores[0]);

    printf("\n");

    int temp[5];

    for (int i = 0; i < 5; i++)
    {
        temp[i] = i;
    }

    printf("%d\n", temp[4]);

    printf("\n");

    printf("Program Completed Successfully\n");

    return 0;
}