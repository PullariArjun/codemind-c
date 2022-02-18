#include<stdio.h>
int main()
{
    int a,b,p=1,c,s=0,d,e;
    scanf("%d",&a);
    e=a;
    while(a>0)
    {
       b=a%10;
       p=p*b;
       a=a/10;
    }
    while(e>0)
    {
      c=e%10;
      s=s+c;
      e=e/10;
    }
    d=p-s;
    printf("%d",d);
}