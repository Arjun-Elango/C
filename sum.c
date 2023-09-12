#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number1,number2,sum;
	printf("enter 2 numbers");
	scanf("%d%d",&number1,&number2);
	sum=number1+number2;
	printf("the value of sum :%d",sum);
	return EXIT_SUCCESS;
}
