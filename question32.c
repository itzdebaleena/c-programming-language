#include<stdio.h>
void main()
   {
   	int n;
   	printf("Enter the percentage:");
   	scanf("%d",&n);
   	if(n>=91)
   	 {
		printf("Excellent");
     }
    else if(n>=81)
     {
     	printf("Very Good");
	 }
	 else if(n>=71)
	 {
     	printf("Good");
	 }
	 else if(n>=61)
	 {
	 	printf("Can do better");
	 }
	 else if(n>51)
	 {
	 	printf("Average");
	 }
	 else if(n>=41)
	 {
     	printf("Below Average");
	 }
	 else
	 {
	 	printf("Fail");
	 }
   }