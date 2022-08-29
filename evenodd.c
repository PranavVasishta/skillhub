#include<stdio.h>
int a,r1;
int oddoreven(int);
void main()
{
    printf("Enter a no\n");
    scanf("%d",&a);
    r1 = oddoreven(a);
    if(r1==1)
        printf("even\n");
    else
        printf("odd\n");
}
int oddoreven(int a)
{
    if(a%2==0)
        return 1;
    else{
        return 0;
    }
}
