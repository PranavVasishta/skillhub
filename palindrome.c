#include<stdio.h> 
void main()
{
	int num,onum,rev;
	printf("enter a num\n");
	scanf("%d",&num);
	onum = num;
	while(num>0)
	{
		rev = rev*10 + num``%10;
		num = num/10;
	}
	if(onum==rev)
	{
		printf("Number = %d is a palindrome\n",onum);
	}
	else
	{
		printf("Number = %d is not a palindrome\n",onum);
	}
}
