#include<string.h>
#include<stdio.h>
void main()
{
    char a[10] = "Brigosha",b[10]="Brigosha";
    int i,count=0;
    for(i=0;i<strlen(a);i++)
     if(b[i]==a[i])
        count++;
    //printf("%d\n",count);
    if(count==strlen(a))
        printf("%s is same as %s",a,b);
    else
        printf("They are not similar");
     }

