#include<stdio.h>
#include<math.h>
main()
{
    int b,c,d,x=0,sum=0,e,i,g,h,p;
    float k,sums=0,s;
    double a,y=0.5,f;
    printf("Enter the number");
    scanf("%lf",&a);
    printf("Enter the number of digits and decimal digits");
    scanf("%d%d",&c,&g);
    b=a;
    p=a;
    f=a-p;
    printf("%d the val",p);
    for(i=1;i<=c;i++)
    {
        d=b%10;
        e=d*pow(2,x);
        b=b/10;
        sum=sum+e;
        x=x+1;
    }
    for(i=1;i<=g;i++)
    {

 printf("(%f f)",f);
        h=(f*10);
printf("(%d h) ",h);

        k=h*y;
        f=f*10;
        f=f-h;
        y=y*0.5;
        sums=sums+k;
    }
   s=sum+sums;
printf("THE DECIMAL NUMBERS (%f)",s);


}



