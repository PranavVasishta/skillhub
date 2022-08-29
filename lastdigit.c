#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter 2 values\n");
    scanf("%u%u",&a,&b);
    (a%10==b%10)?
    printf("Last 2 digits are equal\n"):
        printf("Last 2 digits are not equal\n");
}
