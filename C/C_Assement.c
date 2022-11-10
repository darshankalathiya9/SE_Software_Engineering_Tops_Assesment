#include <stdio.h>
main()
{
    int a, b, i = 0, amount[5] = {0, 0, 0, 0, 0}, totalamount = 0;
    char c;

Again:
    printf("----------Manu----------");
    printf("\n1.Pizza \t Price = 180rs/pcs \n2.Burger \t price = 100rs/pcs \n3.Dosa  \t price = 120rs/pcs \n4.Idali \t price = 50rs/pcs");
    fflush(stdin);
    printf("\nPlease Enter Your Choice... : ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("\nYou Have Selected Pizza.");
        printf("\nEnter the quantity : ");
        scanf("%d", &b);

        amount[i] = 180 * b;
        printf("\nAmount : %d", amount[i]);

        break;

    case 2:
        printf("\nYou Have Selected Burger.");
        printf("\nEnter the quantity : ");
        scanf("%d", &b);

        amount[i] = 100 * b;
        printf("\nAmount : %d", amount[i]);
        break;

    case 3:
        printf("\nYou Have Selected Dosa.");
        printf("\nEnter the quantity : ");
        scanf("%d", &b);

        amount[i] = 120 * b;
        printf("\nAmount : %d", amount[i]);
        break;

    case 4:
        printf("\nYou Have Selected Idali.");
        printf("\nEnter the quantity : ");
        scanf("%d", &b);

        amount[i] = 50 * b;
        printf("\nAmount : %d", amount[i]);
        break;

    default:
        break;
    }

    printf("\nDo you want place more orders ? (y/n) : ");
    fflush(stdin);
    scanf("%c", &c);
    if (c == 'y')
    {
        i++;
        printf("\n\n");
        goto Again;
    }

    for (i = 0; i <= 5; i++)
    {
        totalamount = totalamount + amount[i];
    }
    printf("\nTotal Amount is = %d", totalamount);
}