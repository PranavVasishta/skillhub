//return 1 if either i/p values,sum or difference is 5
#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values\n");
    scanf("%d%d",&a,&b);
    return (a==5||b==5||(a+b)==5||(a-b)==5)?1:0;
}
