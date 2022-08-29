#include<stdio.h>
void odd();
void even();
int a=55;
int main(){
odd();
even();
}
void even()
{
 if(a%2==0){
    printf("even");
 }
}
 void odd()
{
 if(a%2!=0){
    printf("odd");
 }
}

