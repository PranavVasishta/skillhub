#include<string.h>
#include<stdio.h>
int main()
{
    char a[50] = "Jai shree Ram",b[20];
    printf("String length = %d\n",strlen(a));
    strcpy(b,a);
    printf("b = %s\n",b);
}
