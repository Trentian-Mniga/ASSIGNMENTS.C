#include <stdio.h>

int main() {

    int customerID, unitsConsumed;

    float chargesPerUnit[5][2] = {{0, 1.20}, {200, 1.50}, {400, 1.80}, {600, 2.00}, {10000, 0.0}}; // 2D array for unit ranges and charges

    float totalBill, surcharge = 0.0;

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