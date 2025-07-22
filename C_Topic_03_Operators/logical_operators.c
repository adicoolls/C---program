#include <stdio.h>

int main() {
    int a = 5, b = 10;
    printf("Logical AND: %d\n", (a < b) && (a != b));
    printf("Logical OR: %d\n", (a > b) || (a == b));
    printf("Logical NOT: %d\n", !(a == b));
    return 0;
}
