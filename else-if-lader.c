/*
 ============================================================================
 Name        : else-if-lader.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : ladder menu program
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2,choice,result;
	printf("enter 2 numbers");
	scanf("%d%d",&num1,&num2);
	printf("1 for Addition \n2 for subtraction \n3 for multiplication \n4 for division\nEnter your choice");
	scanf("%d",&choice);
	if(choice==1){
		result=num1+num2;
		printf("output= %d",result);
	 }else if(choice==2){
		 result=num1-num2;
		 printf("output= %d",result);
	 }else if(choice==3){
		 result=num1*num2;
		 printf("output= %d",result);
	 }else if(choice==4){
		 result=num1/num2;
		 printf("output= %d",result);
	 }else{
		 printf("your are fool!!!!!,becz of invaild input,....\n");
	 }

	return EXIT_SUCCESS;
}
