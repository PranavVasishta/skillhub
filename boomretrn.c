#include<stdio.h>
int ret(int,int);
int a,b,r,sum;
void main()
{
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    r = ret(a,b);
    printf("%d",r);
}
int ret(int a, int b)
{
if (10<sum && sum<20)

        return 30;
    else
        return sum;

}
