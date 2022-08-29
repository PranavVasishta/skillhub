#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter the values a and b\n");
    scanf("%d%d",&a,&b);
    if(a%5==b%5)
    {
        if(a>b)
            return b;
        else if(b>a)
            return a;
        else
            return 0;
    }
    else
        return 1;
}
