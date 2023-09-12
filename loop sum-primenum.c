/*
 ============================================================================

 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int isprime (int num){
	if(num<= 1){
		return 0;
	}for(int i =2;i*i <= num;i++){
		if(num % i==0){
			return 0;
		}
	}
	return 1;
}
int main(void) {
		int limit;
		printf("Enter a limit:");
		scanf("%d",&limit);
		int sum =0;
	for(int i=2;i<= limit;i++){
		if(isprime(i)){
			sum += i;
		}
	}
	printf("sum of prime numbers:%d\n",sum);
	return 0;
}

