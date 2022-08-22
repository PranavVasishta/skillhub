#include<stdio.h>
void main()
{
    int m,n,i,j,equal;
    printf("Enter number of rows and columns\n");
    scanf("%d%d",&m,&n);
    int a[m][n],b[m][n];
    printf("Enter the elements of 1st array\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
         scanf("%d",&a[i][j]);
        }
    }
printf("Enter the elements of 2nd array\n");
   for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
         scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++)
        for(j=0;j<n;j++)
    {
        if(a[i][j]==b[i][j])
            equal++;
    }
    if(equal==m*n)
        printf("Both are equal\n");
    else
        printf("not equal\n");
}
