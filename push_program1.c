// Online C compiler to run C program online
#include <stdio.h>
#define MAX 4
int stack_arr[MAX]; // global declaration
int top = -1;       // the stack is empty
void push(int data)
{
    if (top == MAX - 1)
    {
        printf("stack overflow");
        return;
    }

    top = top + 1;
    stack_arr[top] = data;
}

int main()
{
    push(1);
    push(2);
    push(3);
    push(4);
    push(5);

    return 0;
}