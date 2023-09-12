/*
 ============================================================================
 prime numbers logic if any number is divided by that number and 1 ,that number is prime number.
 so we divided by 2 ,it gives an remainder=1 ;another thing modulus gives remainder and division gives quotient

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,i,flag=0;
	printf("Enter a number :");
	scanf("%d",&number);
	for(i=2;i<=(number/2);i++){
		if(number % i==0){
			flag=1;
			break;
		}
	}
	if(flag==0){
		printf("The Entered Number Is Prime  Number");
	}else{
		printf("The Entered Number Is Not a Prime Number");
	}

	return 0;
}
