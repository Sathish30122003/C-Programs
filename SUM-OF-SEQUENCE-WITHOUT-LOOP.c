#include<stdio.h>
int add(int,int);
main()
{ int a,i=1;
    printf("Enter the number");
    scanf("%d",&a);

    add(a,i);
}
int add(int a,int i)
 {
    if(i<=a)
    {
      printf("\t %d",i);
      i++;
      return add(a,i);
    }
 }
