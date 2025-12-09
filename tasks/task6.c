#include<stdio.h>
#include<conio.h>
void main()
{
  
       int p, r, n;
    int ans;

    printf("Enter the principal amount: ");
    scanf("%d", &p);

    printf("Enter the rate of interest: ");
    scanf("%d", &r);

    printf("Enter the number of years: ");
    scanf("%d", &n);

    ans = (p * r * n) / 100;

    printf("Simple Interest = %d\n", ans);
    

    getch();

}
