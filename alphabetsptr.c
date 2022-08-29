#include<stdio.h>
void main()
{
    char i,*j;
    printf("Alphabets are :\n");
    j = &i;
    for(*j='a';*j<='z';(*j)++)
        printf("%c  ",*j);
    for(*j='A';*j<='Z';(*j)++)
        printf("%c  ",*j);
}

