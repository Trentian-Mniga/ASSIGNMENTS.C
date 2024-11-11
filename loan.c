#include <stdio.h>
int main(){
	
	int age, salary;

	printf("Please enter your age: ");
	scanf("%d", &age);

	if( age >= 21){
        printf("Please enter your income: ");
		scanf("%d", &salary);
	if( salary >= 21000){
	    printf("Congratulations you qualify for a loan");
	}
	else{
	    printf("Unfortunately you do not qualify for a loan");
	}
	}
	else{
	    printf("Unfortunately you do not qualify for a loan");
	}


	


}

