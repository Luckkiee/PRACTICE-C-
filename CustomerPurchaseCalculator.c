#include <stdio.h>

int main () {
    int shippingFee;
    float purchaseAmount;
    char shippingDestination, customerRank;

    printf("Enter Customer Rank(G for GOLD, S for SILVER, R for Regular): ");
    scanf(" %c", &customerRank);
    
    printf("Enter Purchase Amount: ");
    scanf(" %f", &purchaseAmount);
    
    printf("Enter Shipping Destination (D for DOMESTIC, I for INTERNATIONAL): ");
    scanf(" %c", &shippingDestination);

    switch (customerRank)
    {
    case 'G': 
        purchaseAmount *= 0.80;
        if (purchaseAmount >= 100) {
            shippingFee = 0;
        } else if (shippingDestination == 'D'){
            shippingFee = 10;
        } else if (shippingDestination == 'I') {
            shippingFee = 25;
        }
        purchaseAmount += shippingFee;
        printf("Your purchase amount is: %2.f", purchaseAmount);
        break;
    case 'S':
        purchaseAmount *= 0.90;
        if (shippingDestination == 'D'){
            shippingFee = 10;
        } else if (shippingDestination == 'I') {
            shippingFee = 30;
        }
        purchaseAmount += shippingFee;
        printf("Your purchase amount is: %2.f", purchaseAmount);
        break;
    case 'R': 
        if (purchaseAmount < 50) {
            if (shippingDestination == 'D') {
                shippingFee = 15;
            } else if (shippingDestination == 'I') {
                shippingFee = 40;
            }
        } else if (purchaseAmount >= 50) {
            if (shippingDestination == 'D') {
                shippingFee = 5;
            } else if (shippingDestination == 'I') {
                shippingFee = 10;
            }
        }
        purchaseAmount += shippingFee;
        printf("Your purchase amount is: %2.f", purchaseAmount);
        break;
    default:
    printf("Invalid Input!");
    break;
    }
  return 0;
}
