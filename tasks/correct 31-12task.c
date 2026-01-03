#include <stdio.h>
#include <conio.h>
#include <string.h> 
#include <stdlib.h> // Needed for exit()

int main()
{
    FILE *fp;
    int choice;
    
    char email[20], pass[20], balance[200];
    char fileEmail[20], filePass[20], fileBalance[200]; 

    printf("Press 1 for Sign up \nPress 2 for Login");
    printf("\nPlease choose a number:- ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1: // SIGN UP
        printf("Enter your email:- ");
        scanf("%s", email);

        printf("Enter the password:- ");
        scanf("%s", pass);

        printf("Enter the balance:- ");
        scanf("%s", balance);

        fp = fopen("details.txt", "w"); 

        
        fprintf(fp, "%s\n", email);
        fprintf(fp, "%s\n", pass);
        fprintf(fp, "%s\n", balance);
        
        fclose(fp);  
        printf("Account created successfully.\n");
        break;

    case 2: 
        printf("Enter the registered email:- ");
        scanf("%s", email);

        // 3. CORRECT FOPEN SYNTAX
        fp = fopen("details.txt", "r"); // "r" for Read mode

        if (fp == NULL) {
            printf("No registered users found!\n");
            return 0;
        }

        // 4. READ FILE INTO TEMPORARY VARIABLES
        fscanf(fp, "%s", fileEmail);
        fscanf(fp, "%s", filePass);
        
        // 5. COMPARE STRINGS USING STRCMP
        // strcmp returns 0 if strings are identical
        if(strcmp(email, fileEmail) != 0) 
        {
            printf("\nGiven email is not registered/correct.");
            printf("\nPlease check your email once again!!");
        }
        else 
        {
            printf("Given email is correct. \n");
            
            printf("Enter the registered correct password:- ");
            scanf("%s", pass);

            if(strcmp(pass, filePass) != 0)
            {
                printf("Please check the password again");
            }
            else
            {
                printf("Your password was correct & you logged in successfully!");
            }
        }
        fclose(fp);
        break;
    }
    return 0;
}