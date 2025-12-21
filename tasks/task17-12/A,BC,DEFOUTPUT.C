#include <stdio.h>

int main()
{
    int r, c, num;
    char a = 'A';

    printf("Enter number: ");
    scanf("%d", &num);

    for (r = 1; r <= num; r++)
    {
        for (c = 1; c <= r; c++)
        {
            printf("%c ", a);
            a++;
        }
        printf("\n");
    }

    return 0;
}
