#include<stdio.h>
int main()
{
    int i=0,a[30],c=0,d,e,sum=0,z=1;
    float b,f,o;
    printf("enter the number");
    scanf("%f",&b);
    c=b;

    f=b-c;

   do
    {
        d=c%8;
        a[i]=d;
        c=c/8;
        i=i+1;
        sum=sum+z;
        if(c<1)
        {
            break;
        }
    }while(c<b);
    sum=sum-1;
    printf("OCTAL  NUMBERS");
    printf("(");
    for(i=sum;i>=0;i--)
        printf("%d",a[i]);
    if(f!=0)
    {
    printf(".");
    for(i=1;i<=2;i++)
    {
        e=f*8;
        o=f*8;
        printf("%d",e);
        if(o<1)
        {
            f=o;
        }
        else
        {
            f=o-e;
        }
    }
    }
    printf(")8");

}
