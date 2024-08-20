#include <stdio.h>

int main() {
    float amount, convertedAmount;
    int choice;
    float usdToInr = 83.00;  // Example rate: 1 USD = 83.00 INR
    float eurToInr = 90.00;  // Example rate: 1 EUR = 90.00 INR
    float inrToUsd = 0.012;  // Example rate: 1 INR = 0.012 USD
    float inrToEur = 0.011;  // Example rate: 1 INR = 0.011 EUR

    printf("Currency Converter\n");
    printf("1: USD to INR\n");
    printf("2: EUR to INR\n");
    printf("3: INR to USD\n");
    printf("4: INR to EUR\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the amount: ");
    scanf("%f", &amount);

    switch(choice) {
        case 1:
            convertedAmount = amount * usdToInr;
            printf("%.2f USD = %.2f INR\n", amount, convertedAmount);
            break;
        case 2:
            convertedAmount = amount * eurToInr;
            printf("%.2f EUR = %.2f INR\n", amount, convertedAmount);
            break;
        case 3:
            convertedAmount = amount * inrToUsd;
            printf("%.2f INR = %.2f USD\n", amount, convertedAmount);
            break;
        case 4:
            convertedAmount = amount * inrToEur;
            printf("%.2f INR = %.2f EUR\n", amount, convertedAmount);
            break;
        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
