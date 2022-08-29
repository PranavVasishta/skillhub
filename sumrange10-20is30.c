#include<stdio.h>
int ret(int,int);
void main()
{
    int a,b,r;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    r = ret(a,b);
    printf("%d",r);
}
int ret(int a, int b)
{
  return (10<=(a+b)&&(a+b)<=20)?30:a+b;
}
