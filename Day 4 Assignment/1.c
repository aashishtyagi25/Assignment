#include <stdio.h>

int totalStudents = 500;
int score = 0;

void updateCount();
void displayData(int value);
int add(int a, int b);
int calculateAverage(int a, int b);

int main()
{
    int department = 1;

    char *marks = "90";

    printf("Program Started\n");

    int x = 10;

    {
        int x = 20;

        printf("Inner x = %d\n", x);
    }

    printf("Outer x = %d\n", x);

    if (x == 10)
    {
        printf("X is Ten\n");
    }

    printf("%d\n", score);

    int totalStudentsLocal = 100;

    printf("Students = %d\n", totalStudentsLocal);

    {
        int departmentLocal = 2;

        printf("Department = %d\n", departmentLocal);
    }

    printf("Department = %d\n", department);

    int a = 10;
    int b = 20;

    int sum;

    sum = add(a, b);

    printf("Sum = %d\n", sum);

    int temp = 0;
    {
        temp = 50;
    }

    printf("%d\n", temp);

    int arr[11];

    arr[10] = 100;

    float salary = 50000.50;

    printf("%f\n", salary);

    int count = 10;

    {
        count = count + 5;

        int countLocal = 100;

        printf("%d\n", countLocal);
    }

    printf("%d\n", count);

    int i;
    int result = 0;

    for (i = 0; i < 5; i++)
    {
        result = i * 10;
    }

    printf("%d\n", result);

    int age = 18;

    if (age > 18)
        printf("Eligible\n");
    else
        printf("Not Eligible\n");

    int value = 50;

    displayData(value);

    updateCount();

    printf("%d\n", totalStudents);

    {
        int totalStudentsInner = 200;

        printf("%d\n", totalStudentsInner);
    }

    printf("%d\n", totalStudents);

    int y = 100;

    {
        int yInner1 = 200;

        {
            int yInner2 = 300;
            printf("%d\n", yInner2);
        }

        printf("%d\n", yInner1);
    }

    printf("%d\n", y);

    int z = 10;

    while (z > 0)
    {
        z--;
    }

    char grade = 'A';

    int number = 50;

    printf("%d\n", number);

    int ptrVar = 0;
    int *ptr = &ptrVar;

    *ptr = 100;

    int average;

    average = calculateAverage(10, 20);

    printf("%d\n", average);

    return 0;
}

void updateCount()
{
    totalStudents = totalStudents + 10;
}

void displayData(int value)
{
    printf("Value = %d\n", value);
}

int add(int a, int b)
{
    return a + b;
}

int calculateAverage(int a, int b)
{
    return (a + b) / 2;
}