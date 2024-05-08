#include<stdio.h>
main()
{
 int a,i,sum=0;
 printf("Enter the number:");
 scanf("%d",&a);
 for(i=1;i<=a;i++)
   sum=sum+(i*i);
printf("sum is %d",sum);
}
