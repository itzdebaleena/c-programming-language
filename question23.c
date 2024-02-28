#include<stdio.h>
    void main()
       {
       	int length,breath,area,perimeter;
       	printf("Enter the length & breath:-");
       	scanf("%d%d",&length,&breath);
       	area= length*breath;
       	perimeter=2*(length+breath);
       	printf("The area of the rectangle is %d\n",area);
       	printf("The perimeter of the rectangle is %d",perimeter);
	   }