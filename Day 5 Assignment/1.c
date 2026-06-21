#include <stdio.h>
#include <string.h>

int main()
{
    int marks[5] = {80, 90, 70, 60, 50};

    printf("Student Marks System\n");

    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        total += marks[i];
    }

    printf("Total = %d\n", total);

    float average;

    average = (float)total / 5;

    printf("Average = %f\n", average);

    printf("\n");

    int scores[6];

    scores[0] = 10;
    scores[1] = 20;
    scores[2] = 30;
    scores[3] = 40;
    scores[4] = 50;
    scores[5] = 60;

    printf("Scores\n");

    for (int i = 0; i < 6; i++)
    {
        printf("%d ", scores[i]);
    }

    printf("\n");

    char subject[20];

    strcpy(subject, "Programming");

    printf("%s\n", subject);

    printf("\n");

    int attendance[5];

    for (int i = 0; i < 5; i++)
    {
        attendance[i] = i;
    }

    printf("\nAttendance\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", attendance[i]);
    }

    printf("\n");

    int arr[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\n");

    int totalMarks = 0;

    for (int i = 0; i < 5; i++)
    {
        totalMarks += arr[i];
    }

    printf("Total Marks = %d\n", totalMarks);

    char grade[5];

    grade[0] = 'A';
    grade[1] = '+';
    grade[2] = '\0';

    printf("%s\n", grade);

    printf("\n");

    int prices[5] = {100, 200, 300, 400, 500};

    if (prices[2] == 300)
    {
        printf("Price Found\n");
    }

    printf("\n");

    int inventory[5];

    for (int i = 0; i < 5; i++)
    {
        inventory[i] = prices[i];
    }

    printf("%d\n", inventory[0]);

    printf("\n");

    float salary[5];

    salary[0] = 50000.50;

    printf("%f\n", salary[0]);

    printf("\n");

    char city[10];

    strcpy(city, "Jaipur");

    printf("%s\n", city);

    printf("\n");

    int result[5];

    for (int i = 0; i < 5; i++)
    {
        result[i] = i * 10;
    }

    printf("Results\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", result[i]);
    }

    printf("\n");

    printf("Program Finished\n");

    return 0;
}