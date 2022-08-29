#include<stdio.h>
float near(float,float);
float a,b,diffa,diffb,r;
void main()
{
    printf("Enter two no's\n");
    scanf("%f%f",&a,&b);
    r = near(a,b);
    if(r==0)
        printf("Both are equal\n");
    else if(r==1)
        printf("Difference is equal\n");
    else
        printf("%f is nearer to 100\n",r);
}
float near(float a,float b)
{
    if(a==b)
        return 0;
    else
    {
        if(a>=100)
            diffa = a-100;
        else
            diffa = 100-a;
        if(b>=100)
            diffb = b-100;
        else
            diffb = 100-b;

        //n printf("diffa = %d,diffb = %d \n",diffa,diffb);

        if(diffa>diffb)
            return b;
        else if(diffb>diffa)
            return a;
        else
            return 1;

    }

}
