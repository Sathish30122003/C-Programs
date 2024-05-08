#include<stdio.h>
main()
{
    int a[20],i,j,temp,sum;
    float b;
    printf("Enter the 10 numbers");
    for(i=1;i<=10;i++)
    {
        scanf("%d",&a[i]);
    }
    for (i=1;i<=10;i++)
    {
        for(j=i+1;j<=10;j++)
        {
            if (a[i]> a[j])

            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("The maximum value is %d",a[10]);
    for (i=1;i<=10;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum is %d",sum);
    b=sum/10;
    printf("The average is %.2f",b);
}
