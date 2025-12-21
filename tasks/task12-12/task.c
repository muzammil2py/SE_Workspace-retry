#include<stdio.h>
#include<conio.h>
void main()
{
    int num,min=0;
    printf("enter any number");
    scanf("%d",&num);

    while(num>0)
    {
        int rem = num % 10;
        if(rem<min)
        {
            min = rem;
        }
        num=num/10;
    }
    
    getch();
}