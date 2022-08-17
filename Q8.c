#include<stdio.h>
void main()
{
	int a = 4097, k = 11;
	((1<<(k-1)&a)==1)?
	printf("11th bit is set"):
		printf("11 th bit is clear");
		
	
	
}
