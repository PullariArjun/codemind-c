#include<stdio.h>
int main()
{
    int a,b,s=0,c,d,e,ss=0;
    scanf("%d",&a);
    b=a*a;
    while(a>0)
    {
        c=a%10;
        s=s*10+c;
        a=a/10;
    }
    d=s*s;
    while(d>0)
    {
       e=d%10;
       ss=ss*10+e;
       d=d/10;
    }
    if(b==ss)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}