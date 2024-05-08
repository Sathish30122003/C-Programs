#include<stdio.h>
int main()
{
    int a[10],k,i,j,c,l,sum=0,m=0;
    printf("Enter the ten numbers");
    for(i=0;i<10;i++)
    {
        scanf("\n%d",&a[i]);
    }
    printf("Enter the k value");
    scanf("%d",&k);
    for(i=0;i<10;i++)
    {
        for(l=i+1;l<10;l++)
        {
           for(j=l+1;j<10;j++)
             {
                c=a[i]+a[j]+a[l];
                if(c==k)
                  {
                      sum=sum+m;
                      ++m;
                  }
              }
        }
     }
     printf("\n%d Triangles can be formed",sum);
}*/
