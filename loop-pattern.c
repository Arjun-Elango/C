/*
 ============================================================================
 star program
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,j,number;
	printf("Enter no.of rows:");
	scanf("%d",&number);
	for(i=1;i<=number;i++){
		for(j=0;j<i;j++){
			printf("*");
		}
		printf("\n");
	}
	return EXIT_SUCCESS;
}
