#include<stdio.h>
void main()
{
int a[5]={0,1,2,3,4},i,unique,j;
i=0;
/*while(i<=4)
 {
 j=i+1;
 while(j<=5)
 {
     if(a[i]!=a[j])
     {
        unique = a[i];

     }

    j++;

     }
 i++;*/
printf("%d\t",unique);
     for(i=0,j=i+1;i<=5,j<=5;i++,j++)
     {
         if(a[i]!=a[j])
            printf("%d\t",a[i]);

     }

 }
//}

