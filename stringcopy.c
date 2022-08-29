//to copy string without builtin function
#include<stdio.h>
void main()
{
    char a[10] = "Brigosha",b[10];
    int i;
    for(i=0;i<9;i++)
        b[i]=a[i];
     b[i]='\0';              //since in certain compilers null value isn't copied we
    printf("a = %s,b = %s",a,b);
    /*for(i=1;b[i]!='\0';i++){}             to calculate size
    printf("\nsize = %d\n",i);*/

}
