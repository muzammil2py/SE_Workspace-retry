#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int num, original, remainder, sum, digits;
    clrscr();
    printf("Armstrong numbers between 1 and 1000:\n");
    for (num = 1; num <= 1000; num++)
    {
        original = num;
        sum = 0;
        digits = 0;
        int temp = num;
        while (temp != 0)
        {
            digits++;
            temp = temp / 10;
        }
        temp = num;
        while (temp != 0)
        {
            remainder = temp % 10;
            sum = sum + pow(remainder, digits);
            temp = temp / 10;
        }
        if (sum == original)
            printf("%d ", num);
    }
    getch();
}