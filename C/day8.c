#include <stdio.h>
#include <string.h>

int main(){
    float price, total, payment, change;
    int quantity;

    printf("Enter shirt price: ");
    scanf("%f", &price);
    printf("Enter quantity: ");
    scanf("%d", &quantity);

    total = price * quantity;
    printf("The total is %.2f", total);
    printf("\nEnter payment amount: ");
    scanf("%f", &payment);

    if (payment < total)
    {
        printf("Insufficient Amount");
    } else{
        change = payment - total;
        printf("Your change is %.2f", change);
    }
    
    return 0;
}