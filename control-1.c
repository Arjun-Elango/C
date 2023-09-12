/*
 ============================================================================
 Name        : control-1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : control statements for if-else statements

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
    printf("enter a number:");
    scanf("%d",&num);
    if(num<0){
    	printf("the entered number is negative");
    }else{
    	printf("the entered number is positive");
    }
	return 0;
}
