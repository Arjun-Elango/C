/*
 ============================================================================
 Name        : switch-case.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	printf("1 for dosa \n2 for veg meals \n3 for fried rice \n4 for Noodles \nENTER YOUR CHOICE:");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf(" YOU HAVE SELECTED DOSA ....!");
		break;
	case 2:
	    printf(" YOU HAVE SELECTED VEG MEALS...!");
	    break;
	case 3:
		printf( " YOU HAVE SELECTED FRIED RICE....!");
		break;
	case 4:
		printf( " YOU HAVE SELECTED NOODLES....!");
		break;
	default:
		printf("fool , select one in the menu man...!");

	}
	return 0;
}
