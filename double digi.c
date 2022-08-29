#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values a and b\n");
    scanf("%d%d",&a,&b);
    printf("1st digit of a = %d\n",a/10);
    printf("last digit of a = %d\n",a%10);
    printf("1st digit of b = %d\n",b%10);
    printf("last digit of b= %d\n",b/10);
    return (a%10==b%10)||((a/10)==(b/10))||((a/10)==(b%10))||((b/10)==(a%10))?1:0;
}
