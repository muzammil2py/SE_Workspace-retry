#include<stdio.h>
#include<conio.h>
void main()
{

    int r,c,num;
    printf("Enter the number of rows and columns:");
    scanf("%d"&num);
    for(r=1;r<=num;r++)
    {
        for(c=1;c<=num;c++)
        {
            printf("%d ",r*r);
        }
        printf("\n");
    } 
       getch();

}