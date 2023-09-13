/* Ramesh's basic salary is input through the keyboard . his dearness allowance is 40% of basic salary,and house rent allowance
 is 20% of basic salary.write a program to calculate his gross salary.
 */

#include <stdio.h>

int main (void){
	float salary, da,ra ,gs;
	printf("Enter Ramesh's basic salary:");
	scanf("%f",&salary);
	da=(salary * (0.4));
	printf("\nRamesh's dearness allowance: %f",da);
	ra=(salary *(0.2));
	printf("\nRamesh's rent allowance:%f",ra);
	gs=(salary + da+ra);
	printf("\nRamesh's gross salary :%0.2f",gs);
	return 0;
}
