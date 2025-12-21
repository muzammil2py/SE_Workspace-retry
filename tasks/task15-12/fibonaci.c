#include <stdio.h>
#include <conio.h>

void main() {
    
    int i, n;
    long f;

    
    clrscr();

    printf("Factorial Series till 10:\n");

    for (i = 1; i <= 10; i++) {
        f = 1; 
        n = 1;

    
        while (n <= i) {
            f *= n; 
            n++;
        }

        
        printf("Factorial of %d is: %ld\n", i, f);
    }

    
    getch();
}
