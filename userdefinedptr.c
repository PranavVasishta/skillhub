#include<stdio.h>
void main()
{
    int *p,*k,a,b;
    printf("Enter values of 2 pointers\n");
    scanf("%d%d",&a,&b);
    p = &a;
    k = &b;

    printf("*p = %d,*k = %d",*p,*k);
    //printf("sum = %d",*p+*k);
}


