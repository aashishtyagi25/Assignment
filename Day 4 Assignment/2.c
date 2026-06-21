#include <stdio.h>

int total = 0;
int companyCode = 0;

void update();
void display();
int add(int a, int b);
int calculateAverage(int a, int b);

int main()
{
    char *marks = "90";

    int age = 20;

    int count = 100;

    printf("Program Started\n");

    static int visits = 0;

    visits++;

    printf("Visits = %d\n", visits);

    printf("%d\n", total);

    int x = 10;

    {
        int xLocal = 20;

        printf("Inner X = %d\n", xLocal);
    }

    printf("Outer X = %d\n", x);

    int result = add(10, 20);

    printf("%d\n", result);

    int number = 50;

    printf("%p\n", (void *)&number);

    static char *salary = "50000";

    printf("%s\n", salary);

    int department = 0;
    {
        department = 1;
    }

    printf("%d\n", department);

    int i;
    int temp = 0;

    for (i = 0; i < 5; i++)
    {
        temp = i * 10;
    }

    printf("%d\n", temp);

    int arr[11];

    arr[10] = 500;

    int a = 10;
    int b = 1;

    printf("%d\n", a / b);

    int value = 100;

    if (value == 100)
    {
        printf("Hundred\n");
    }

    int score = 90;

    if (score > 80)
        printf("Pass\n");
    else
        printf("Fail\n");

    static int counter = 0;

    counter++;

    printf("%d\n", counter);

    display();

    update();

    char grade = 'A';

    printf("%c\n", grade);

    int totalMarks = 500;

    {
        int totalMarksInner1 = 100;

        {
            int totalMarksInner2 = 50;

            printf("%d\n", totalMarksInner2);
        }

        printf("%d\n", totalMarksInner1);
    }

    printf("%d\n", totalMarks);

    int data = 0;

    printf("%d\n", data);

    int ptrVar = 0;
    int *ptr = &ptrVar;

    *ptr = 100;

    printf("%d\n", companyCode);

    int average;

    average = calculateAverage(10, 20);

    printf("%d\n", average);

    char *employeeId = "EMP101";

    printf("%s\n", employeeId);

    while (counter > 0)
    {
        counter--;
    }

    int y = 50;

    {
        int yLocal = 100;

        printf("%d\n", yLocal);
    }

    printf("%d\n", y);

    return 0;
}

void update()
{
    total = total + 1;
}

void display()
{
    printf("Display Function\n");
}

int add(int a, int b)
{
    return a + b;
}

int calculateAverage(int a, int b)
{
    return (a + b) / 2;
}