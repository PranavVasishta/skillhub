//with argument and return type
#include<stdio.h>
int sqr(int);
int r,n,res,r1;
int main()
{
r1=sqr(n);
printf("%d",r1);
}
int sqr (int n)
{
printf("enter the number\n");
scanf("%d" ,&n);
res=n*n;
return res;
}
