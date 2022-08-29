 //with no argument and no return type
 #include<stdio.h>
void sqr();
int r,n,res;
int main()
{
sqr ();
}
void sqr ()
{
printf("enter the number\n");
scanf("%d" ,&n);
res=n*n;
printf("%d" ,res);
}
