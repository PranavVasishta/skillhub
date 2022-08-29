#include<stdio.h>
int near(int,int);
int a,b,r2,r1,r,n=100;
void main()
{
    printf("Enter two no's\n");
    scanf("%d%d",&a,&b);
    r = near(a,b);
    (r==0)?
        printf("Both are equal\n"):
        printf("%d is nearer to 100\n",r);
}
int near(int a,int b)
{
    (a<=100)?(r1=n-a):(r1=a-n);
   (b<=100)?(r2=n-b):(r2=b-n);
   // printf("r1=%d,r2=%d",r1,r2);
    return (r1==r2)?0:(r1<r2?a:b);
}
