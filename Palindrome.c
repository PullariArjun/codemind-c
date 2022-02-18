#include<stdio.h>
int main()
{
    int a,b,s=0,d;
    scanf("%d",&a);
    d=a;
    while(a>0)
    {
        b=a%10;
        s=s*10+b;
        a=a/10;
    }
    if(d==s)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}