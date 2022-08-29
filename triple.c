#include<stdio.h>
int triple(int);
void main()
{
    int a,b,sum,r1;
    printf("Enter an element\n");
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("sum=%d\n",sum);
    if(a==b)
    {
       r1 =  triple(a+b);
        printf("triple = %d\n",r1);
    }

}
int triple(int sum)
{   int tripl;
    tripl = 3*sum;
    return tripl;
}

