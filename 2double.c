#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values a and b\n");
    scanf("%d%d",&a,&b);
    return (a%10==b%10||(a-a%10)==(b-b%10)||(a-a%10==b-b%10)||(b%10==a%10))?1:0;
}
