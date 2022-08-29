#include<stdio.h>
void add();
void sub();
void mul();
void div();
void mod();
long int a,b,op;
void main()
{
    printf("Enter the values of operands\n");
    scanf("%d%d",&a,&b);
    printf("Choose the operation\n");
    printf("Enter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\nEnter 5 for modulus\n");
    scanf("%d",&op);

    if(op==1)
        add();
    else if(op==2)
        sub();
    else if(op==3)
        mul();
    else if(op==4)
        div();
    else
        mod();
}
void add()
{
    printf("%ld+%ld=%ld",a,b,a+b);
}

void sub()
{
    printf("%ld-%ld=%ld",a,b,a-b);
}

void mul()
{
    printf("%ldx%ld=%ld",a,b,a*b);
}

void div()
{
    printf("%ld/%ld=%ld",a,b,a/b);
}

    void mod()
{
    printf("%ldmod%ld=%ld",a,b,a%b);
}
