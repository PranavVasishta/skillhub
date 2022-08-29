#include<stdio.h>
void main()
{
    char i,b[9];
    printf("enter the string\n");
    for(i=0;i<9 ;i++)
    {
    scanf("%c",&b[i]);
    }
    for(i=0;i<9;i++)
        printf("%c",b[i]);
}
