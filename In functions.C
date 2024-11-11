#include <stdio.h>

float calculateCharges(int unitsConsumed) {

    float chargesPerUnit;

    if (unitsConsumed <= 199) {

        chargesPerUnit = 1.20;

    } else if (unitsConsumed <= 399) {

        chargesPerUnit = 1.50;

    } else if (unitsConsumed <= 599) {

        chargesPerUnit = 1.80;
    } else {
        chargesPerUnit = 2.00;
    }

    return unitsConsumed * chargesPerUnit;
}

float calculateSurcharge(float totalBill) {

    return totalBill > 400 ? totalBill * 0.15 : 0.0;
}

int main() {
    int customerID, unitsConsumed;

    float totalBill, surcharge;

    char customerName[50];

    // i. Prompt user for input

    printf("Enter Customer ID: ");

    scanf("%d", &customerID);

    printf("Enter Customer Name: ");

    scanf("%s", customerName);

    printf("Enter Units Consumed: ");

    scanf("%d", &unitsConsumed);


    return 0;
}