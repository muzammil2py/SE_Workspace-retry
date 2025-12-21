#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,num;

    printf("enter the numberrrr");
    scanf("%d",&num);

    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
    
    printf("\n");
    }
    getch();

}