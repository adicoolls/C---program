#include <stdio.h>
int main() {
    int a = 10, b = 20, c = 15;
    if (a > b && a > c) printf("a is largest");
    else if (b > c) printf("b is largest");
    else printf("c is largest");
    return 0;
}