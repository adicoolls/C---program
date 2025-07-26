#include <stdio.h>
int main() {
    int marks = 85;
    if (marks >= 90) printf("Grade A");
    else if (marks >= 75) printf("Grade B");
    else if (marks >= 60) printf("Grade C");
    else printf("Fail");
    return 0;
}