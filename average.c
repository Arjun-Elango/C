/*  %d-numerical (integer)value,%f-float value,%c-character input */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float number1,number2,number3,average;
	printf("enter 3 numbers"); /*output statement*/
	scanf("%f%f%f",&number1,&number2,&number3); /* get value and store value */
    average=(number1+number2+number3)/3 ;
	printf("the value of average : %f",average);
	return 0;
}
