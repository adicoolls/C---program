#include <stdio.h>

int main() {
    int a;
    float b;
    char c;
    double d;

    printf("Size of int: %lu bytes\n", sizeof(a));
    printf("Size of float: %lu bytes\n", sizeof(b));
    printf("Size of char: %lu bytes\n", sizeof(c));
    printf("Size of double: %lu bytes\n", sizeof(d));

    return 0;
}
