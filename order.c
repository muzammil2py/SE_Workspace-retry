#include<stdio.h>
#include<conio.h>
void main()
{
    int ord;

    printf("enter your order; \n enter 1 for ordering pizza. \n enter 2 for ordering burger. \n enter 3 for ordering coffee");
    scanf("%d",&ord);

    switch(ord)
    {
        case 1:printf("your order is pizza");
        break;

        case 2:printf("your order is burder");
        break;

        case 3:printf("your order is coffe");
        break;
    }

    if(ord==1)
    {
        printf("your bill ammount is - 100");
    
    }
    else if(ord==2)
    {
        printf("your bill ammount is - 70");

    }
    else if (ord==3)
    {
        printf("your bill ammount is - 120");
    }
    else
    {
      printf("the item is not avalable.");
    }
    getch();
}