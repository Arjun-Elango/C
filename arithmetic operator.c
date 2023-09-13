/*
    arithmetic operator
    *  /  %
    +  -
 */
#include <stdio.h>

int main (){
	int a,b,c,d,e,f,g;
	printf("\nEnter Two Number :");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("\n total:%d",c);
	d=a-b;
	printf("\n difference:%d",d);
	e=a*b;
	printf("\n product:%d",e);
	f=a/b;
	printf("\n quotient:%f",f);
	g=a%b;
	printf("\n remainder:%d",g);
	return 0;
}
