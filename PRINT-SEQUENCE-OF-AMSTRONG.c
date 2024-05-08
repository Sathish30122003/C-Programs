#include<stdio.h>
 int main()
 {
     int a,n,b=0,i,j,t;
     printf("Enter the number ");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
        t=i;
        for(j=i;j>0;j=i/10)
        {
            a=j%10;
            b=b+(a*a*a);

        }
        if(t==b)
            printf("%d",b);

     }

 }
