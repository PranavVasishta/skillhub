 #include<stdio.h>
 int sum();
 int sub();//fun declaration
int a=4,b=2,add,r1,r2;
 int main()
 {
   r1= sum();//fun call
    r2= sub();
    printf("add = %d\tsub = %d\t",r1,r2);

 }

 int sum()//fun definition
 {
    // printf("enter the values of a, b\n");
     //scanf("%d %d" ,&a,&b);


     return a+b;
 }
 int sub()
 {


     return a-b;
 }

