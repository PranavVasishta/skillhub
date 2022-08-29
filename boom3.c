#include<stdio.h>
int triple();

 int a,b,add,tri,p,k;
void main()
{
    printf("Enter an element\n");
    scanf("%d%d",&a,&b);
  add = a+b;

   printf("%d\n",add);
   p = triple ();
    if(a==b){

    printf("triple=%d",p);
   }
}
int triple()
{
tri=3*add;
return tri;
}
