#include <stdio.h>
#include <stdlib.h>

#define size 10
#define true 1
#define false 0

void push(void);
void pop(void);
void display(void); // Corrected function declaration
int isfull(void);
int isempty(void);
int top = -1;
int arr[size];

int isfull()
{
    if (top == size - 1)
        return true;
    else
        return false;
}

int isempty()
{
    if (top == -1)
        return true;
    else
        return false;
}

void push()
{
    int x;

    if (isfull())
        printf("\nStack overflow"); // Fixed typo in the message
    else
    {
        printf("Enter the value to push: "); // Prompt the user for input
        scanf("%d", &x);
        top++;
        arr[top] = x;
        printf("\nItem pushed successfully");
    }
}

void pop()
{
    if (isempty())
        printf("\nStack underflow");
    else
    {
        printf("Deleted item is = %d", arr[top]);
        top--;
    }
}

void display()
{
    int i;
    if (isempty())
        printf("\nStack is empty");
    else
    {
        printf("\nStack is");

        for (i = top; i >= 0; i--)
            printf("\n%d", arr[i]);
    }
}

int main()
{
    int choice;

    while (1) // Changed the condition to a constant value
    {
        printf("\nMenu...");
        printf("\n1. Push \n2. Pop \n3. Display \n4. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display(); // Corrected function call
            break;
        case 4:
            exit(0); // Used exit(0) to exit the program properly
            break;
        default:
            printf("\nWrong choice");
        }
    }
    return 0;
}
