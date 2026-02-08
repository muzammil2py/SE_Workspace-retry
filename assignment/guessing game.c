#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>
void main()
{
    int number, guess, attempts = 0;
    clrscr();
    srand(time(0));
    number = (rand() % 100) + 1;
    printf("Guess a number between 1 and 100:\n");
    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;
        if (guess > number)
            printf("Too high!\n");
        else if (guess < number)
            printf("Too low!\n");
    } while (guess != number);
    printf("Correct! You took %d attempts.", attempts);
    getch();
}