/*
 ============================================================================
 Name        : nested.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : nested if control statement greatest Among three
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,num3;
	printf("enter three number :");
	scanf("%d%d%d",&num1,&num2,&num3);
	if(num1>num2 && num1>num3){
		printf("greatest number is %d",num1);
	}else{
		if(num2>num1 && num2>num3){
			printf("greatest number is %d",num2);
		}else{
			printf("greatest number is %d",num3);
		}
	}
	return EXIT_SUCCESS;
}
