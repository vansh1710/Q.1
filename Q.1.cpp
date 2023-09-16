#include<stdio.h>
#include<conio.h>

int main() {
    float originalPrice, taxRate, finalPrice;

    printf("Enter the original price of the product: ");
    scanf("%f", &originalPrice);

    printf("Enter the sales tax rate (in percentage): ");
    scanf("%f", &taxRate);

    finalPrice = originalPrice + (originalPrice * (taxRate / 100));

    printf("The final price after adding %.2f%% sales tax is: %.2f\n", taxRate, finalPrice);

    return 0;
}
