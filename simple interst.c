// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
   float principalAmount, time, rate, simpleInterest;
    rate  = 15;
    
    printf("Please enter amount you want to borrow: ");
    scanf("%f", &principalAmount);
    
    printf("Time: ");
    scanf("%f", &time);
    
    simpleInterest = (principalAmount * time * rate)/100;
    
    printf("simpleinterest %f", simpleInterest);
    
    return 0;
}