/*
 ============================================================================
even number logic n/2=0
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,number;
	printf("enter a number:");
	scanf("%d",&number);
	for(i=2;i<=number;i++){
		if(i%2==0){
			printf("%d \t",i);
		}
	}
	return EXIT_SUCCESS;
}
