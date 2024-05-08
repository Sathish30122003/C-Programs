#include<stdio.h>
 main()
 {
     int a,n,b=0,t;
     printf("Enter the number ");
     scanf("%d",&a);
     t=a;
     while(a>0)
     {
         n=a%10;
         b=b+(n*n*n);
         a=a/10;

     }
     if(t==b)
        printf("The number is a amstrong");
     else
        printf("The number is not a amstrong");
 }
