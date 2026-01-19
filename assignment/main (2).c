#include <stdio.h>
int main() {
    int n, m;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n % 2 == 0)
        printf("Even\n");
    else
        printf("Odd\n");

    printf("Enter month number: ");
    scanf("%d", &m);

    switch(m) {
        case 1: printf("January"); break;
        case 2: printf("February"); break;
        case 3: printf("March"); break;
        default: printf("Invalid");
    }
    return 0;
}

