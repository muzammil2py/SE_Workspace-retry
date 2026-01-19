#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("Arithmetic Operations:\n");
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);

    printf("Relational Operations:\n");
    printf("a > b = %d\n", a > b);
    printf("a == b = %d\n", a == b);

    printf("Logical Operations:\n");
    printf("(a && b) = %d\n", a && b);

    return 0;
}

