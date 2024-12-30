#include <stdio.h>
#define MAX 100

int stack[MAX];
int top = -1;

// Push an element into the stack
void push(int value) {
    if (top == MAX - 1) {
        printf("Stack overflow!\n");
    } else {
        stack[++top] = value;
    }
}

// Pop an element from the stack
int pop() {
    if (top == -1) {
        printf("Stack underflow!\n");
        return -1;
    } else {
        return stack[top--];
    }
}

// Display the stack
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}

int main() {
    push(10);
    push(20);
    push(30);
    display();

    printf("Popped element: %d\n", pop());
    display();

    return 0;
}
