#include <stdio.h>

int main() {

    int cart_items[3];
    int cart_quantities[3];
    int shop_prices[5];
    int total=0;
    printf("enter cart items: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &cart_items[i]);
    }
    printf("enter cart quantities: ");
    for (int i = 0; i < 3; i++) {
        scanf("%d", &cart_quantities[i]);
    }
    printf("enter shop price: ");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &shop_prices[i]);
    }

    for (int i = 0; i < 3; i++) {
         total+=cart_quantities[i]* shop_prices[cart_items[i]];
        
    }
    printf("Total : %d",total);

    return 0;
}