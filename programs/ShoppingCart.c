




#include<stdio.h>
#include<string.h>

int main() {

    int itemQuantity;
    float pizzaPrice=2.53; float burgerPrice=0.78;
    char itemName[30]; char currency='$';

    float totalBill1 = itemQuantity*pizzaPrice ;
    float totalBill2 = itemQuantity*burgerPrice ;

    printf("Here's the list of items we've:\n\n\nPizza    Burger\n\n%c%f    %c%f\n", currency,pizzaPrice,currency,burgerPrice);


    printf("What would you like to buy: ");
    scanf("%s", &itemName);

    printf("How much would you like: ");
    scanf("%d", &itemQuantity);

    printf("thanks for purchasing!");

    if (itemName=='pizza') {
    printf("Your total bill is: %c%f", currency, totalBill1);
} else {
    printf("Your total Bill is: %c%f", currency, totalBill2);
}

return 0;
}