//with argument and no return type
#include<stdio.h>
int sqr(int);
int n;
int main()
    {
    printf("enter the number\n");
    scanf("%d" ,&n);
    sqr(n);
    }
int sqr (int n)
    {
    int r1;
    printf("%d",n*n);
    }
