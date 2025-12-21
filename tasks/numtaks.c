#include <stdio.h>
#include <conio.h>

void main()
{
    int r, c, num;
    int k = 1;

   

    printf("Enter number of number: ");
    scanf("%d",&num);
    for(r=1; r<=num; r++)       
    {
        for(c=1;c<=r;c++)      
        {
            printf("%d", k);
            k++;
        }
        printf("\n");
    }

    getch();    
}