#include<stdio.h>
void main()
{
    int *p,*k;
    int a=36,b=33;
    p = &a;
    k = &b;
    printf("sum = %d",*p+*k);
}

