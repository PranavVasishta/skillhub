#include<stdio.h>
void main()
{
    char a[20] = "Forrest Gump";
    int i,*j;
    j = &i;
    for(*j=0;a[*j]!='\0';(*j)++){}
    printf("%d",*j);
}

