//special or not
#include<stdio.h>
void main()
{
    int no;
    printf("Enter a num\n");
    scanf("%d",&no);
    ((no%11==0)||(no%11==1))?
    printf("SPECIAL"):
        printf("Number is not special");
}
