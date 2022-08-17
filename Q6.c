//logic gates
#include<stdio.h>
void main()
{
	int a=0,b=1;
	//AND
	printf("and for 0 and 0 =%d\n",a&&a);
	printf("and for 0 and 1 =%d\n",a&&b);
	printf("and for 1 and 0 =%d\n",b&&a);
	printf("and for 1 and 1 =%d\n\n\n",b&&b);
	
	//OR
	printf("or for 0 and 0 =%d\n",a||a);
	printf("or for 0 and 1 =%d\n",a||b);
	printf("or for 1 and 0 =%d\n",b||a);
	printf("or for 1 and 1 =%d\n\n",b||b);
	// not
	printf("not for 0  =%d\n",!a);
	printf("not for 1  =%d\n\n",!b);
	
		
}
