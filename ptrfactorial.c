#include<stdio.h>
void main()
{
    int n,fact = 1, *f;
    printf("Enter the num\n");
    f = &fact;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
        *f = *f * i;
    printf("%d",*f);
}
