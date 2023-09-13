
#include <stdio.h>

int main(void) {
	int a=10; /*its stores like decimal*/
    char b='$';
    float c=12.5f;
    float t=234e-4;
    float y=546e4;
    long int d=2567431097l;
    int r=012 ; /*its stores as octal*/
    int h=0x41; /*its stores as hexadecimal */
    printf("%d \n %d \n%0.2f \n%ld \n %d \n%c\n%d \n%f \n%f",a,b,c,d,r,h,h,t,y); /* call as decimal , b is a char but called as decimal ascii,only 2 digits will be print*/
	return 0;
}
