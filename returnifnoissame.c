#include<stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter 2 no's\n");
    scanf("%d%d",&a,&b);
    c=a%10;
    d=b%10;
    //printf("\n%d\n",(a-c));
    if(c==d||d==a/10||c==b/10||(a/10)==(b/10))
        return 1;
    return 0;
}
