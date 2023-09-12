/*
 ============================================================================
 Name        : breaksample.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	for(i=0;i<10;i++){
		printf("Hi \t");
		if(i==5){
			break;
		}
		printf("Good morning \n");
	}
	printf("Finished");

	return 0;
}
