#include <stdio.h>
#include <conio.h>
int main()
{
	FILE *fp;
	int choice;
	char email[20],pass[20],balance[200];
	

	printf("press 1 for sing up \n press 2 for login");
	printf("\n please choose a number:-");
	scanf("%d",&choice);

	switch(choice)
	{
	case 1:

		printf("enter your email:-");
		scanf("%s",&email);

		printf("enter the password:-");
		scanf("%s",&pass);

		printf("enter the balance");
		scanf("%s",&balance);

		fp = fopen("details.txt","w");

		fprintf(fp,email);
		fprintf(fp,pass);
		fprintf(fp,balance);
		
		break;
		
		 case 2:
		 
		 printf("enter the registered email:-");
		 scanf("%s",&email);
		 
		 printf("enter the registered correct password;-");
		 scanf("%s",&pass);
		 
		 if(fscanf(fp,email) && email !=0)
		 {
		     printf("\n given emai is not registered/correct, ");
		    
		    printf("\n please check your email once again!!");
		   
		     
		 }
		 
		 else
		 {
		     printf("given email is correct and now you can enter your password");
		 }
		 
		 }
	return 0;
}