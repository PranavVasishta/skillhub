#include<stdio.h>
void main()
{
    int a=5,*p;
    p = &a;
    printf("%d\n", a);
    printf("size of a pointer = %d",sizeof(p));
}
