#include<stdio.h>
void main()
{
    int a,b,r;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    return (10<=(a+b)&&(a+b)<=20)?30:a+b;
}
