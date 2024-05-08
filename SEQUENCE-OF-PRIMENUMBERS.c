#include<stdio.h>
main()
{
    int a,n,i,flag,j;
    printf("Enter the number");
    scanf("%d",&a);
    for(i=1;i<=a;i++)
    {
        for(j=2;j<i;j++)
        {
        n=i%j;
        if(n==0)
        {
            flag=1;
            break;

        }
        else
            flag=0;
        }
        if(flag==0)
        printf("\t%d",i);


    }

}
