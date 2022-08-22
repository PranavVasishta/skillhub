#include<stdio.h>
void main()
{
int a[5]={1,2,3,4,5},even = 0,odd = 0,i;
for(i=0;i<5;i++)
{
    if(a[i]%2==0)
    {
        printf("even=%d\n",a[i]);
    }
    else
        printf("odd = %d\n",a[i]);
}
}
