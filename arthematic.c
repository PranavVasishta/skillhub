#include<stdio.h>
int sum (int,int);
int sub (int,int);
int multi (int,int);
int div (int,int);
int a, b;
int main(){
printf("enter the number\n");
scanf("%d%d" ,&a ,&b);
sum(a,b);
sub(a,b);
multi(a,b);
div(a,b);
}
int sum (int a,int b){
printf("%d\n" ,a+b);
}
int sub (int a, int b){
printf("%d\n" ,a-b);
}
int multi (int a, int b){
printf("%d\n" ,a*b);
}
int div (int a, int b){
printf("%d\n" ,a/b);
}
