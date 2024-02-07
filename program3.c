#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void displaymenu()
{
    printf("\n\tWelcome to V coffee shop, a typical place for coffeeholics\t\n");
    printf("~~~~~ V Cafe Order Form ~~~~~ \n");
    printf("Food Menu:\n");
    printf("f1 - Korean Noodle\nf2 - Sandwich with bacon and cheese\nf3 - Spaghetti\nf4 - Salad\nf5 - Pizza\n\n");
    printf("Drink Menu:\n");
    printf("d1 - Black Coffee\nd2 - Cold Brew\nd3 - Milk Coffee\nd4 - Matcha\nd5 - Cappuccino\n\n");
}

double price(char* code, int quantity)
{
    double price = 0.0;
    char size;

    if (strlen(code) != 2)
    {
        if (strlen(code) == 1)
        {
            printf("Invalid code format: %s. Please use 'f' or 'd' prefix.\n", code);
        } 
        else 
        {
            printf("Invalid code length: %s. Please use a two-character code.\n", code);
        }
        return -1.0;
    }

    switch (code[0])
    {
        case 'f':
            switch (code[1])
            {
                case '1':
                    printf("\nYou've chosen Korean Noodle");
                    price = 2.7;
                    break;
                case '2':
                    printf("\nYou've chosen Sandwich with bacon and cheese");
                    price = 2.0;
                    break;
                case '3':
                    printf("\nYou've chosen Spaghetti");
                    price = 6.3;
                    break;
                case '4': 
                    printf("\nYou've chosen Salad");
                    price = 1.7;
                    break;
                case '5':
                    printf("\nYou've chosen Pizza");
                    price = 8.9;
                    break;
                default:
                    printf("Invalid option for type of food.");
                    break;
            }
            break;

        case 'd':
            switch (code[1])
            {
                case '1':
                    printf("\nYou've chosen Black Coffee");
                    printf("Enter the size (M/L): ");
                    scanf(" %c", &size);
                    if (size == 'M' || size == 'm')
                    {
                        price = 2.2;
                    }
                    else if (size == 'L' || size == 'l')
                    {
                        price = 2.5;
                    }
                    else
                    {
                        printf("Invalid size for Black Coffee. Defaulting to Medium.\n");
                        price = 2.2;
                    }
                    break;

                case '2':
                    printf("\nYou've chosen Cold Brew");
                    printf("Enter the size (M/L): ");
                    scanf(" %c", &size);
                    if (size == 'M' || size == 'm')
                    {
                        price = 2.3;
                    }
                    else if (size == 'L' || size == 'l')
                    {
                        price = 2.6;
                    }
                    else
                    {
                        printf("Invalid size for Cold Brew. Defaulting to Medium.\n");
                        price = 2.3;
                    }
                    break;

                case '3':
                    printf("\nYou've chosen Milk Coffee");
                    printf("Enter the size (M/L): ");
                    scanf(" %c", &size);
                    if (size == 'M' || size == 'm')
                    {
                        price = 2.2;
                    }
                    else if (size == 'L' || size == 'l')
                    {
                        price = 2.5;
                    }
                    else
                    {
                        printf("Invalid size for Milk Coffee. Defaulting to Medium.\n");
                        price = 2.2;
                    }
                    break;

                case '4':
                    printf("\nYou've chosen Matcha");
                    printf("Enter the size (M/L): ");
                    scanf(" %c", &size);
                    if (size == 'M' || size == 'm')
                    {
                        price = 2.7;
                    }
                    else if (size == 'L' || size == 'l')
                    {
                        price = 3.0;
                    }
                    else
                    {
                        printf("Invalid size for Matcha. Defaulting to Medium.\n");
                        price = 2.5;
                    }
                    break;

                case '5':
                    printf("\nYou've chosen Cappuccino");
                    printf("Enter the size (M/L): ");
                    scanf(" %c", &size);
                    if (size == 'M' || size == 'm')
                    {
                        price = 3.2;
                    }
                    else if (size == 'L' || size == 'l')
                    {
                        price = 3.5;
                    }
                    else
                    {
                        printf("Invalid size for Cappuccino. Defaulting to Medium.\n");
                        price = 3.2;
                    }
                    break;

                default:
                    printf("Invalid option for type of drink.");
                    break;
            }
            break;

        default:
            printf("Invalid option. Please use 'f' for food or 'd' for drink.\n");
            price = -1.0;
            break;
    }
    
    return price * quantity;
}

int main()
{
    int quantity1, quantity2, quantity3;
    char Order1[3], Order2[3], Order3[3];
    char name[20];
    float totalCost = 0.0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    displaymenu();

    printf("Hello, %s\n", name);

    do {
        printf("\nOrder 1 : ");
        scanf("%2s", Order1);
        printf("Order 1 quantity: ");
        scanf("%d", &quantity1);
        totalCost = price(Order1, quantity1);
        if (totalCost < 0.0) {
            printf("Invalid input. Please enter 'f' or 'd' for food or drink.\n");
        }
    } while (totalCost < 0.0);

    do {
        printf("\nOrder 2 : ");
        scanf("%2s", Order2);
        printf("Order 2 quantity: ");
        scanf("%d", &quantity2);
        totalCost += price(Order2, quantity2);
        if (totalCost < 0.0) {
            printf("Invalid input. Please enter 'f' or 'd' for food or drink.\n");
        }
    } while (totalCost < 0.0);

    do {
        printf("\nOrder 3 : ");
        scanf("%2s", Order3);
        printf("Order 3 quantity: ");
        scanf("%d", &quantity3);
        totalCost += price(Order3, quantity3);
        if (totalCost < 0.0) {
            printf("Invalid input. Please enter 'f' or 'd' for food or drink.\n");
        }
    } while (totalCost < 0.0);

    printf("\nTotal Price: $%.2f\n", totalCost);
    return 0;
}