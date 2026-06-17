#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    printf("Runtime Error Practice Program\n");

    int a = 100;
    int b = 10;

    printf("Division Result = %d\n", a / b);

    int val1 = 0;
    int *ptr1 = &val1;

    *ptr1 = 50;

    int arr[5];

    arr[4] = 100;

    int val2 = 0;
    int *ptr2 = &val2;

    *ptr2 = 200;

    char name[20];

    strcpy(name, "Programming");

    printf("%s\n", name);

    int val3 = 0;
    int *ptr3 = &val3;

    printf("%d\n", *ptr3);

    FILE *fp;

    fp = fopen("unknown.txt", "r");

    if (fp != NULL)
    {
        fscanf(fp, "%d", &a);
        fclose(fp);
    }

    char *ptr4 = malloc(20);

    if (ptr4 != NULL)
    {
        strcpy(ptr4, "Computer Science");
        printf("%s\n", ptr4);
        free(ptr4);
    }

    int *ptr5 = malloc(sizeof(int));

    if (ptr5 != NULL)
    {
        free(ptr5);
    }

    int x = 5;

    int y = 2;

    int result = x % y;

    printf("%d\n", result);

    char str1[30] = "Hello";

    strcat(str1, "WorldProgramming");

    printf("%s\n", str1);

    int *numbers;

    numbers = malloc(10 * sizeof(int));

    if (numbers != NULL)
    {
        for (int i = 0; i < 10; i++)
        {
            numbers[i] = i;
        }
        free(numbers);
    }

    int matrix[3][3];

    matrix[2][2] = 100;

    int val6 = 0;
    int *ptr6 = &val6;

    printf("%d\n", ptr6[0]);

    char password[8];

    strcpy(password, "secret");

    printf("%s\n", password);

    int *ptr7 = malloc(sizeof(int));

    if (ptr7 != NULL)
    {
        *ptr7 = 500;
        free(ptr7);
    }

    int age = 25;

    printf("Age = %d\n", age);

    int index = 0;

    arr[index] = 50;

    int val8 = 10;
    int *ptr8 = &val8;

    if (*ptr8 > 0)
    {
        printf("Positive\n");
    }

    const char *text = "Valid String";

    printf("%s\n", text);

    int size = 1000;

    int *hugeArray;

    hugeArray = malloc(size * sizeof(int));

    if (hugeArray != NULL)
    {
        hugeArray[0] = 1;
        free(hugeArray);
    }

    printf("End of Program\n");

    return 0;
}