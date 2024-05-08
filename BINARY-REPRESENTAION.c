#include<stdio.h>
main()
{
    int i=0,a[10],c=0,d,e,sum=0,z=1;
    float b,f,o;
    printf("Enter the number");
    scanf("%f",&b);
    c=b;

    f=b-c;

   do
    {
        d=c%2;
        a[i]=d;
        c=c/2;
        i=i+1;
        sum=sum+z;
        if(c<1)
        {
            break;
        }
    }while(c<b);
    sum=sum-1;
    printf("BINARY NUMBERS");
    printf("(");
    for(i=sum;i>=0;i--)
        printf("%d",a[i]);
    if(f!=0)
    {
    printf(".");
    for(i=1;i<=5;i++)
    {
        e=f*2;
        o=f*2;
        printf("%d",e);
        if(o<1)
        {
            f=o;
        }
        else
        {
            f=o-1;
        }
    }
    }
    printf(")2");

}
