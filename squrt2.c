 //with no argument and with return type
 #include<stdio.h>
int sqr();
int r,n,res,r1;
int main()
{
r1=sqr();
printf("%d",r1);
}
int sqr ()
{
printf("enter the number\n");
scanf("%d" ,&n);
res=n*n;
return res;
}
