#include <stdio.h>

int main()
{
    int choice, qty;
    int totalAmount = 0;
    char moreOrder;

    /* Prices of food items */
    int pizzaPrice = 180;
    int burgerPrice = 100;
    int dosaPrice = 120;
    int idliPrice = 50;

    /* Loop will run at least once */
    do
    {
        /* Display Menu */
        printf("\n---------- MENU ----------\n");
        printf("1. Pizza  - Rs.%d per piece\n", pizzaPrice);
        printf("2. Burger - Rs.%d per piece\n", burgerPrice);
        printf("3. Dosa   - Rs.%d per piece\n", dosaPrice);
        printf("4. Idli   - Rs.%d per piece\n", idliPrice);
        printf("--------------------------\n");

        /* Take user choice */
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        /* Conditional statements for item selection */
        if (choice == 1)
        {
            printf("You selected Pizza.\n");
            printf("Enter quantity: ");
            scanf("%d", &qty);
            totalAmount = totalAmount + (pizzaPrice * qty);
        }
        else if (choice == 2)
        {
            printf("You selected Burger.\n");
            printf("Enter quantity: ");
            scanf("%d", &qty);
            totalAmount = totalAmount + (burgerPrice * qty);
        }
        else if (choice == 3)
        {
            printf("You selected Dosa.\n");
            printf("Enter quantity: ");
            scanf("%d", &qty);
            totalAmount = totalAmount + (dosaPrice * qty);
        }
        else if (choice == 4)
        {
            printf("You selected Idli.\n");
            printf("Enter quantity: ");
            scanf("%d", &qty);
            totalAmount = totalAmount + (idliPrice * qty);
        }
        else
        {
            printf("Invalid choice! Please select a valid item.\n");
        }

        /* Ask user if they want to order more */
        printf("\nDo you want to place more orders? (y/n): ");
        scanf(" %c", &moreOrder);

    } while (moreOrder == 'y' || moreOrder == 'Y');

    /* Display final bill */
    printf("\n============================\n");
    printf("Total Bill Amount: Rs.%d\n", totalAmount);
    printf("Thank you! Visit again.\n");
    printf("============================\n");

    return 0;
}
