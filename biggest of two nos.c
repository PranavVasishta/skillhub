#include<stdio.h>
void main()
{
	int i,j;
	printf("Enter any twwo 2 no's'\n");
	scanf("%d %d",&i,&j);
	if(i>j)
	{
		printf("i = %d is greater\n", i);
		
	}
	else if(j>i)
	{
		printf("j = %d is greater\n",j);
		
	}
	else
	{
		printf("both i = %d and j = %d are equal\n",i,j);
	}
}
