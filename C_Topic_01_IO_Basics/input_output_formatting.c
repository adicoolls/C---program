#include <stdio.h>

int main() {
    float value = 3.14159;
    printf("Default: %f\n", value);
    printf("2 decimal places: %.2f\n", value);
    printf("Width 10: %10.2f\n", value);
    return 0;
}
