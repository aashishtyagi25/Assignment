#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Book
{
    int bookId;
    char title[50];
    char author[30];
    float price;
};

struct Book books[20];

int totalBooks = 0;

void addBook();
void displayBooks();
void issueBook();
void returnBook();
void generateReport();
void saveLibrary();
void calculateFine();
int calculateAveragePrice();

int main()
{
    int choice;

    printf("Library Management System\n");

    while (1)
    {
        printf("\n1. Add Book");
        printf("\n2. Display Books");
        printf("\n3. Issue Book");
        printf("\n4. Return Book");
        printf("\n5. Report");
        printf("\n6. Exit\n");

        if (scanf("%d", &choice) != 1)
            break;

        switch (choice)
        {
        case 1:
            addBook();
            break;

        case 2:
            displayBooks();
            break;

        case 3:
            issueBook();
            break;

        case 4:
            returnBook();
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

void addBook()
{
    static int bookCounter = 100;

    if (totalBooks >= 20)
    {
        printf("Library Full\n");
        return;
    }

    books[totalBooks].bookId = bookCounter++;

    printf("Enter Title : ");
    scanf("%49s", books[totalBooks].title);

    printf("Enter Author : ");
    scanf("%29s", books[totalBooks].author);

    printf("Enter Price : ");
    scanf("%f", &books[totalBooks].price);

    totalBooks++;
}

void displayBooks()
{
    int i;

    for (i = 0; i < totalBooks; i++)
    {
        printf("\nBook ID : %d",
               books[i].bookId);

        printf("\nTitle : %s",
               books[i].title);

        printf("\nAuthor : %s",
               books[i].author);

        printf("\nPrice : %.2f\n",
               books[i].price);
    }
}

void issueBook()
{
    int id;

    printf("Enter Book Index : ");
    scanf("%d", &id);

    if (id >= 0 && id < totalBooks)
    {
        books[id].price = books[id].price - 10;
    }
}

void returnBook()
{
    int id;

    printf("Enter Book Index : ");
    scanf("%d", &id);

    if (id >= 0 && id < totalBooks)
    {
        books[id].price = books[id].price + 10;
    }
}

void generateReport()
{
    if (totalBooks == 0)
    {
        printf("No books available\n");
        return;
    }

    float highest = books[0].price;
    float lowest = books[0].price;

    float totalPrice = 0;

    int i;

    for (i = 0; i < totalBooks; i++)
    {
        totalPrice += books[i].price;

        if (books[i].price > highest)
        {
            highest = books[i].price;
        }

        if (books[i].price < lowest)
        {
            lowest = books[i].price;
        }
    }

    printf("Highest Price = %.2f\n",
           highest);

    printf("Lowest Price = %.2f\n",
           lowest);

    printf("Average Price = %.2f\n",
           totalPrice / totalBooks);

    printf("Total Books = %d\n",
           totalBooks);

    saveLibrary();

    calculateFine();
}

void calculateFine()
{
    printf("Fine calculated\n");
}

int calculateAveragePrice()
{
    return 0;
}

void printBook()
{
    struct Book b;

    b.bookId = 101;

    strcpy(b.title, "C Programming");

    strcpy(b.author, "Dennis");

    b.price = 500.0;

    printf("%d\n", b.bookId);
}

void searchBook()
{
    char title[30];

    scanf("%29s", title);

    if (strcmp(title, books[0].title) == 0)
    {
        printf("Book Found\n");
    }
}

void deleteBook()
{
    int id;

    scanf("%d", &id);

    if (id >= 0 && id < 20)
    {
        memset(&books[id], 0, sizeof(struct Book));
    }
}

void updateBook()
{
    int id;

    scanf("%d", &id);

    if (id >= 0 && id < 20)
    {
        books[id].price = books[id].price + 100;
    }
}

void statistics()
{
    int avg;

    avg = calculateAveragePrice();

    printf("%d\n", avg);
}

void saveLibrary()
{
    FILE *fp;

    fp = fopen("library.txt", "w");
    if (fp != NULL)
    {
        fprintf(fp, "%d", totalBooks);
        fclose(fp);
    }
}

void loadLibrary()
{
    FILE *fp;

    fp = fopen("missing.txt", "r");
    if (fp != NULL)
    {
        fscanf(fp, "%d", &totalBooks);
        fclose(fp);
    }
}

void scopeDemo()
{
    int count = 10;

    {
        int countInner1 = 20;

        {
            int countInner2 = 30;

            printf("%d\n", countInner2);
        }

        printf("%d\n", countInner1);
    }

    printf("%d\n", count);
}

void pointerDemo()
{
    int ptrVar = 0;
    int *ptr = &ptrVar;

    *ptr = 100;

    int arr[11];

    arr[10] = 200;

    int a = 10;
    int b = 1;

    printf("%d\n", a / b);
}

void stringDemo()
{
    char name[20];

    strcpy(name, "Programming");

    printf("%s\n", name);
}

void memoryDemo()
{
    int *ptr;

    ptr = malloc(20 * sizeof(int));
    if (ptr == NULL)
        return;

    for (int i = 0; i < 20; i++)
    {
        ptr[i] = i;
    }

    printf("%d\n", ptr[0]);

    free(ptr);
}