#include<stdio.h>
void main()
{
	int a,b,c;
	printf("Enter three number:");
	scanf("%d%d%d",&a,&b,&c);
	if((a<=b)&&(a<=c))
	{
	  printf("%d is the minimum no",a);
    }
    else if((b<=a)&&(b<=c))
	{
	  printf("%d is the minimum no",b);
    }
    else
    {
      printf("%d is the minimum no",c);
	}
}