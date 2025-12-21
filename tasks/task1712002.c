#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c,num;
    

    printf("enter num");
    scanf("%d",&num);

    for(r=1;r<=num;r++)
    {
        for(c=1;c<=r;c++)
    
        {
            int k=1;

            printf("%d",k);
        }
        printf("\n");
    }
    getch();
}