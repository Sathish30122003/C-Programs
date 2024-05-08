#include<stdio.h>
int main()
{
    int a[10],k,i,j,c;
    printf("Enter the ten numbers");
    scanf("%d",&k);
    for(i=1;i<=10;i++)
    {
        scanf("\n%d",&a[i]);
    }
    printf("enter the k value");
     scanf("%d",&k);
    for(i=1;i<=10;i++)
    {
        for(j=i+1;j<+10;j++)
        {
            c=a[i]+a[j];
            if(c==k)
            {
                printf("\nSum of two numbers are %d and %d is equal to %d",a[i],a[j],k);
            }
        }
    }
}
