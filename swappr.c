#include<stdio.h>
int swap(int,int);
int a,b,temp,r1,r21010;
int main()
{
     printf("Enter values of a and b\n");
    scanf("%d%d",&a,&b);
r1=swap(a,b);
r2 = swap(b,a);

printf("%d %d",r1,r2);
}
int swap (int a, int b)
{
temp=a;
a=b;
b=temp;
//printf("\nAfter swapping\na=%d\tb=%d",a,b);
if(a)
return a;
else
return b;

}
