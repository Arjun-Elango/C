/*
 ============================================================================
 i++ ==> i=i+1 ==> pre-increament ( first store and it increment ) ## same in pre-decreamed
 ++i ==> i=i+1 ==> post-increament ( first increment and it store) ## same in post-decreamed
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int  number,i,sum=0;
	printf("Enter a number :");
	scanf("%d",&number);
    for(i=1;i<number;i++){
    	sum=sum+i;
    }
    printf("Sum=%d",sum);
	return EXIT_SUCCESS;
}
