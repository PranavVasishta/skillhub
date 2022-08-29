#include<stdio.h>
int a,r1;
int oddoreven();
void main()
{
    printf("Enter a no\n");
    scanf("%d",&a);
    r1 = oddoreven();
    if(r1==1)
        printf("even\n");
    else
        printf("odd\n");
}
int oddoreven()
{
    if(a%2==0)
        return 1;
    else{
        return 0;
    }
}
