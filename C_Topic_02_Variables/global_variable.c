#include <stdio.h>

int a = 10;  // global variable

void display() {
    printf("Global variable a = %d\n", a);
}

int main() {
    display();
    return 0;
}
