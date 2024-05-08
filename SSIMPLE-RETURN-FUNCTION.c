#include<stdio.h>
int main()
{
    int add();
    int c;
    c=add();
    printf("%d",c);
}
int add()
{
    int a=6,b=1,c;
    c=a+b;
    return c;
}
