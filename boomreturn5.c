#include<stdio.h>
int main()
{
    int a,r1,r2,b;
    printf("Enter the values a and b\n");
    scanf("%d%d",&a,&b);
    r1=a%5;
    r2=b%5;
    return (r1==r2)?((a>b)?b:(b>a)?a:0):1;
}
