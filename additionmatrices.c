#include<stdio.h>
void main()
{
int a[2][2]={1,2,3,4},i,j,b[2][2] = {1,2,3,4},sum;
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        sum = a[i][j]+b[i][j];
        //printf("a[2][2]+a[2][2]\n");
        //printf("\t");
        printf("%d
               \t",sum);

    }
}

}
