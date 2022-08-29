//with argument and return type
#include<stdio.h>
int swap(int,int);
int a,b,temp,r1;
int main()
{
     printf("Enter values of a and b\n");
    scanf("%d%d",&a,&b);
r1=swap(a,b);
printf("%d %d",r1);
}
int swap (int a, int b)
{
temp=a;
a=b;
b=temp;
return a;
return b;
}
