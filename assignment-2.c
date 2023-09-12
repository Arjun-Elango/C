/*
 ============================================================================
 Name        : assignment-2.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
     int amount;
     printf("Enter the amount:");
     scanf("%d",&amount);

     int notes_500=0,notes_100=0,notes_50=0,notes_20=0,notes_10=0,notes_5=0,notes_2=0,notes_1=0;

     if(amount >= 500){
    	 notes_500= amount/500;
    	 amount %= 500;
     }
     if(amount>=100){
    	   notes_100= amount/100;
    	    amount %= 100;
     }
     if(amount >= 50){
         	 notes_50= amount/50;
         	 amount %= 50;
          }
     if(amount >= 20){
         	 notes_20= amount/20;
         	 amount %= 20;
          }
     if(amount >= 10){
         	 notes_10= amount/10;
         	 amount %= 10;
          }
     if(amount >= 5){
         	 notes_5= amount/5;
         	 amount %= 5;
          }
     if(amount >= 2){
         	 notes_2= amount/2;
         	 amount %= 2;
          }

     notes_1 = amount;

   printf("Minimum number of notes :\n");
   printf("Rs. 500: %d\n",notes_500);
   printf("Rs. 100: %d\n",notes_100);
   printf("Rs. 50: %d\n",notes_50);
   printf("Rs. 20: %d\n",notes_20);
   printf("Rs. 10: %d\n",notes_10);
   printf("Rs. 5: %d\n",notes_5);
   printf("Rs. 2: %d\n",notes_2);
   printf("Rs. 1: %d\n",notes_1);

	return 0;
}
