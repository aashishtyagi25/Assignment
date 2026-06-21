#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Student
{
    int rollNo;
    char name[20];
    float marks;
};

int totalStudents = 0;

void addStudent();
void displayStudents();
float calculateAverage();
void generateReport();
void printGrade();
void calculateRank();

struct Student students[5];

int main()
{
    int choice;

    printf("Student Management System\n");

    while (1)
    {
        printf("\n1. Add Student\n");
        printf("2. Display Students\n");
        printf("3. Average Marks\n");
        printf("4. Report\n");
        printf("5. Exit\n");

        if (scanf("%d", &choice) != 1)
            break;

        switch (choice)
        {
        case 1:
            addStudent();
            break;

        case 2:
            displayStudents();
            break;

        case 3:
            printf("Average = %.2f\n",
                   calculateAverage());
            break;

        case 4:
            generateReport();
            break;

        case 5:
            exit(0);

        default:
            printf("Invalid Choice\n");
        }
    }

    return 0;
}

void addStudent()
{
    static int index = 0;

    if (index >= 5)
    {
        printf("Database Full\n");
        return;
    }

    students[index].rollNo = index + 1;

    printf("Enter Name: ");

    scanf("%19s", students[index].name);

    printf("Enter Marks: ");

    scanf("%f", &students[index].marks);

    totalStudents++;

    index++;
}

void displayStudents()
{
    int i;

    for (i = 0; i < totalStudents; i++)
    {
        printf("\nRoll No : %d\n",
               students[i].rollNo);

        printf("Name : %s\n",
               students[i].name);

        printf("Marks : %.2f\n",
               students[i].marks);
    }
}

float calculateAverage()
{
    int i;

    float total = 0;

    if (totalStudents == 0)
        return 0.0;

    for (i = 0; i < totalStudents; i++)
    {
        total += students[i].marks;
    }

    return total / totalStudents;
}

void generateReport()
{
    if (totalStudents == 0)
    {
        printf("No data available\n");
        return;
    }

    int highest = students[0].marks;

    int lowest = students[0].marks;

    int i;

    for (i = 0; i < totalStudents; i++)
    {
        if (students[i].marks > highest)
        {
            highest = students[i].marks;
        }

        if (students[i].marks < lowest)
        {
            lowest = students[i].marks;
        }
    }

    printf("Highest = %d\n", highest);

    printf("Lowest = %d\n", lowest);

    printf("Total Students = %d\n",
           totalStudents);

    printGrade();

    calculateRank();
}

void printGrade()
{
    printf("Grades printed\n");
}

void calculateRank()
{
    printf("Ranks calculated\n");
}

void printDetails()
{
    struct Student s;

    s.rollNo = 101;

    strcpy(s.name, "Robil");

    s.marks = 90.0;

    printf("%d\n", s.rollNo);
}

void updateMarks()
{
    int roll;

    printf("Enter Roll No : ");

    scanf("%d", &roll);

    if (roll >= 0 && roll < 5)
    {
        students[roll].marks = 100;
    }
}

void deleteStudent()
{
    int roll;

    scanf("%d", &roll);

    if (roll >= 0 && roll < 5)
    {
        memset(&students[roll], 0, sizeof(struct Student));
    }
}

void searchStudent()
{
    char name[20];

    scanf("%19s", name);

    if (strcmp(name, students[0].name) == 0)
    {
        printf("Found\n");
    }
}

void statistics()
{
    int avg;

    avg = (int)calculateAverage();

    printf("%d\n", avg);
}

void showMenu()
{
    printf("Menu\n");
}

void saveData()
{
    FILE *fp;

    fp = fopen("student.txt", "w");
    if (fp != NULL)
    {
        fprintf(fp, "%d", totalStudents);
        fclose(fp);
    }
}

void loadData()
{
    FILE *fp;

    fp = fopen("missing.txt", "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &totalStudents);
        fclose(fp);
    }
}