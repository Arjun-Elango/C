/*
 ============================================================================
 Name        : switchsample2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : switch case select the month with menu
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice ;
    printf("1 for January\n2 for February\n3 for March \n4 for April \n5 for May \n6 for June \n7 for July \n8 for August \n9 for September \n10 for October \n11 for November \n12 for December");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("YOU SELECTED JANUARY");
		break;
	case 2:
		printf("YOU SELECTED FEBUARY");
		break;
	case 3:
		printf("YOU SELECTED MARCH");
		break;
	case 4:
		printf("YOU SELECTED APRIL");
		break;
	case 5:
		printf("YOU SELECTED MAY");
		break;
	case 6:
		printf("YOU SELECTED JUNE");
		break;
	case 7:
		printf("YOU SELECTED JULY");
		break;
	case 8:
		printf("YOU SELECTED AUGUST");
		break;
	case 9:
		printf("YOU SELECTED SEPTEMBER");
		break;
	case 10:
		printf("YOU SELECTED OCTOBER");
		break;
	case 11:
		printf("YOU SELECTED NOVEMBER");
		break;
	case 12:
		printf("YOU SELECTED DECEMBER");
		break;
	default:
		printf("YOU ARE FOOL,,...! ,invaild entry")
	}
    return 0;
}
