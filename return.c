//return 1 if either
#include<stdio.h>
int main()
{
    int a,b,sum,ret;
    printf("Enter the values\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    return (a==30||b==30||sum==30)?1:0;
    /*(ret==1)?
    printf("True\n"):
        printf("False\n");*/
}

