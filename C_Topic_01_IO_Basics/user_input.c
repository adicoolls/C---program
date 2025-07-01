#include <stdio.h>

int main() {
    int age;
    float weight;
    char grade;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your weight: ");
    scanf("%f", &weight);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("You entered: Age = %d, Weight = %.2f, Grade = %c\n", age, weight, grade);

    return 0;
}
