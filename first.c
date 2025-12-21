#include <stdio.h>

int main() {
    int n, reverse = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n); // Reads the user's input

    while (n != 0) {
        remainder = n % 10; 
        reverse = reverse * 10 + remainder; 
        n /= 10; 
    }

    printf("Reversed number: %d\n", reverse); // Prints the reversed number

    return 0;
}
