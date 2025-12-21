#include<stdio.h>
#include<conio.h>
void main()
{
    
    int r,c,num;
    char a='A';

    printf("enter numer:-");
    scanf("%d",&num);

    for(r=1;r<=num;r++)
    {
        for(c=1;c<=r;c++)
        {
            printf("%c",a);
        
        }
        a++;
        printf("\n");
    }
    

}