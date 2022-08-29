#include<stdio.h>
#include<string.h>

void main()
{
    char a[15] = "andrewtate";
    int count=0,countc=0,*c,*v;
    v = &count;
    c = &countc;
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]== 'u')
            (*v)++;
        else
            (*c)++;
    }

    printf("No of vowels = %d, no of consonants = %d",*v,*c);
}
