#include<stdio.h>
void main()
{
    int a,*p,*k,b;
    a=10;
    b=12;
    p = &a;
    k = &b;
    printf("%d\n",p-k);
    printf("size of a pointer = %d",sizeof(p));
}
