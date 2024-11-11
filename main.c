#include <stdio.h>

void checkEvenOdd(int num) {
	
    if (num % 2 == 0) {
    	
        printf("The number is even\n");
        
    } else {
    	
        printf("The number is odd\n");
    }
}

int main() {
	
    int number;

    printf("Enter an integer: ");
    
    scanf("%d", &number);


    checkEvenOdd(number);

    return 0;
}