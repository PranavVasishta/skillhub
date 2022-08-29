#include<stdio.h>
void swap();
int a,b;
int main()
{
    printf("Enter values of a and b\n");
    scanf("%d%d",&a,&b);
    swap();
}
void swap()
{
    printf("Before swapping\na=%d\tb=%d",a,b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("\nAfter swapping\na=%d\tb=%d",a,b);
}
