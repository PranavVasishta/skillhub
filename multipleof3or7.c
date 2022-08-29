//to return true or false if it is multiple of 3 or 7
#include<stdio.h>
int multiple(int);
int n,r;
void main()
{
    printf("Enter a value\n");
    scanf("%d",&n);
    r = multiple(n);
    printf("%d",r);
}
int multiple(int n)
{
   if(n%3==0||n%7==0)
        return 1;
    else
        return 0;
        //(n%3==0||n%7==0)?1:0;
}
