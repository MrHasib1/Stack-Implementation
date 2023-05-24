#include<stdio.h>
#include<stdlib.h>
int a[5], top = -1;
void push();
void pop();
void display();

int main()
{
    int ch;
    printf("-------Stack Implementation-------\n");
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Display\n");
    printf("4. Exit\n");

    while(1)
    {
        printf("Select choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
        case 1:
            push();
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(0);
            break;
        default:
            printf("Invalid");

        }
    }
 return 0;
}

void push()
{
    int item;
    if(top == 5-1)
    {
        printf("Stack is full.\n");
    }
    else
    {
        printf("Enter element: \n");
        scanf("%d", &item);
        top++;
        a[top] = item;
    }
}

void pop()
{
    if(top == -1)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("Popped element is null\n");
        top--;
    }
}

void display()
{
    if(top == -1)
    {
        printf("Stack is underflow\n");
    }
    else
    {
        printf("Element present in the stack\n");

        for(int i = top; i>=0; i--)
        {
            printf("%d\n", a[i]);
        }
    }
}


