#include<stdio.h>
main()
{
    int a,i,fab,fab1=0,fab2=1;
    printf("Enter the number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        fab=fab1+fab2;
        fab1=fab2;
        fab2=fab;
        printf("\n%d",fab);
    }

}
