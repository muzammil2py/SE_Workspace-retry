#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int num, original, remainder, sum = 0, digits = 0;
    clrscr();
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;
    while (num != 0)
    {
        digits++;
        num = num / 10;
    }
    num = original;
    while (num != 0)
    {
        remainder = num % 10;
        sum = sum + pow(remainder, digits);
        num = num / 10;
    }
    if (sum == original)
        printf("Armstrong Number");
    else
        printf("Not an Armstrong Number");
    getch();
}