#include<stdio.h>
int a;
void oddoreven();
void main()
{
    printf("Enter a no\n");
    scanf("%d",&a);
    oddoreven();
}
void oddoreven()
{
    if(a%2==0)
        printf("It is even\n");
    else{
        printf("odd\n");
    }
}
