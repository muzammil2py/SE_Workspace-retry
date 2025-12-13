#include<stdio.h>
#include<conio.h>
void main()
{
    int t,n;

    printf("\nenter n:-");
    scanf("%d",&n);

    for(t=1;t<=10;t++)
    {
        int  ans=n*t;
        printf("\n %d*%d=%d",n,t,ans);
    }
    getch();

}