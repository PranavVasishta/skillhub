#include<stdio.h>
int swap(int*,int*);
int a,b,r;
int main(){
    printf("enter the numbers\n");
    scanf("%d%d",&a,&b);
printf("before swapping %d %d\n",a,b);
 r=swap(&a,&b);
}
int swap(int*a,int*b)
{
    *a=*a-*b;
    *b=*b+*a;
    *a=*b-*a;
    printf("after swapping %d %d\n",*a,*b);
}
