#include <stdio.h>
#define MAX 100
int TOP = -1;
int S[MAX];

void push(int a) {
    if (TOP == MAX - 1)
    {
        printf("Stack is full, Overflow condition\n");
    }
    else
    {
        TOP = TOP + 1;
        S[TOP] = a;
    }
}
void pop() {
    if (TOP == -1)
    {
        printf("Stack is empty, Underflow condition\n");
    } else
    {
        int a = S[TOP];
        TOP = TOP - 1;
    }
}
void display() {
    if (TOP < 0) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements are:\n");
        for (int i = TOP; i >= 0; i--) {
            printf("%d\n", S[i]);
        }
    }
}

int main() {
    int choice, element;
    while (1)
        {
        printf("STACK OPERATIONS\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

switch (choice) {
            case 1:
                printf("Enter element to push: ");
                scanf("%d", &element);
                push(element);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 4:
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}