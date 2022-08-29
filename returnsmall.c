#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values a and b\n");
    scanf("%d%d",&a,&b);
    return (a%5==b%5)?((a==b)?0:((a>b)?b:a)):1;
}
