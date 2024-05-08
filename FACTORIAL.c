#include<stdio.h>
int main()
{
    int a,b=0,c=0,i,d=1;
    printf("Enter the number");
    scanf("%d",&a);
    printf("FACTORIAL NUMBERS ARE:");
    for(i=1;i<a;i++)
    {
        c=d+b;
        d=b;
        b=c;
        if(c<a)
        printf("\t%d",c);

    }
}
