//return 1 if either i/p values,sum or difference is 5 without if else or ternary operator
#include<stdio.h>
int main()
{
    int a,b,r;
    printf("Enter the values\n");
    scanf("%d%d",&a,&b);
    r = a==5||b==5||(a+b)==5||(a-b)==5;
    printf("%d",r);
    return r;
}

