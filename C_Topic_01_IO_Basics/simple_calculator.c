#include <stdio.h>

int main() {
    int a, b;
    char op;
    printf("Enter expression (a + b): ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op) {
        case '+': printf("Result: %d\n", a + b); break;
        case '-': printf("Result: %d\n", a - b); break;
        case '*': printf("Result: %d\n", a * b); break;
        case '/': 
            if (b != 0)
                printf("Result: %.2f\n", (float)a / b);
            else
                printf("Error: Division by zero\n");
            break;
        default: printf("Invalid operator\n");
    }

    return 0;
}
