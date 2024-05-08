#include<stdio.h>
main()
{
    int a,b,i,n;
    printf("Enter the two number");
    scanf("%d",&a);
    scanf("%d",&b);
    for(i=a;i<=b;i++)
    {
        n=i%2;
        if(n==1)
            printf("\t%d",i);
        else
            continue;
    }
}
