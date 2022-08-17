#include<stdio.h>
void main()
{
	int a=2,b=3,c;
	printf("Roll number that are seated incorrectly are = %d and %d\n",a,b);
	printf("Before swapping a = %d, b = %d\n",a,b);
	c=a;
	a=b;
	b=c;
	printf("after swapping a = %d,b = %d\n",a,b);
	
}

