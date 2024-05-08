#include<stdio.h>
int main()
{
    int i=0,b,a[10],c=0,d,sum=0,z=1;
    printf("Enter the number");
    scanf("%d",&b);
    c=b;
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

    for(i=sum;i>=0;i--)
        printf("\t%d",a[i]);
}
