#include<stdio.h>
void main()
{
	
	int a1,a2,a3,a4,a5,a6,a7,a8,a9,a10,a11,a12;
	printf("Enter 6 digit number without 0 with spaces\n");
	scanf("%d%d%d%d%d%d",&a1,&a2,&a3,&a4,&a5,&a6);
	if(a1==0|a2==0|a3==0|a4==0|a5==0|a6==0)
	{
		printf("do not enter 0!\n");
	}
	else
	{
		printf("Before reversing %d%d%d%d%d%d",a1,a2,a3,a4,a5,a6);
		a7 = ~a1;
		a8 = ~a2;
		a9 = ~a3;
		a10 = ~a4;
		a11 = ~a5;
		a12 = ~a6;
		
		a6 = ~a7;
		a5 = ~a8;
		a4 = ~a9;
		a3 = ~a10;
		a2 = ~a11;
		a1 = ~a12;
		printf("After reversing %d%d%d%d%d%d",a1,a2,a3,a4,a5,a6);
		
		
	}
    
}
