#include<stdio.h>
void main()
{
	int i,j,k;
	printf("Enter any 3 no's'\n");
	scanf("%d %d %d",&i,&j,&k);
	if(i>j&&i>k)
	{
		printf("i = %d is greater\n", i);
		
	}
	else if(j>i&&j>k)
	{
		printf("j = %d is greater\n",j);
		
	}
	else if(k>i&&k>j)
	{
		printf("k = %d is greater\n",k);
	}
	else
	{
		printf("all  i = %d and j = %d k = %d are equal\n",i,j,k);
	}
}
