#include<stdio.h>
void main()
{
	int n, i = 2,k;
	printf("Enter a no\n");
	scanf("%d",&n);

	for(i=2;i<n;i++)
	{
		
		if(n%i==0)
		{
			k = 1;
			//printf("%d is not prime",n);
		}
		else
		{
			k = 0;
			//printf("%d is prime",n);
		}
	}

	if(k==0)
	printf("%d is a prime",n);
	else if(n<=2)
	printf("%d is prime",n);
	else
	{
		printf("%d is not a prime",n);
	}
	
	
}
