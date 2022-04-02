#include<stdio.h>
int main()
{
    int a,b,sum=0;
    scanf("%d",&a);
    if(a<0)
    {
        a=(-1)*a;
        while(a>0)
        {
        b=a%10;
        sum=sum*10+b;
        a=a/10;
        }
        printf("%d",(-1)*sum);
    }
    else if(a>0)
    {
        while(a>0)
        {
        b=a%10;
        sum=sum*10+b;
        a=a/10;
        }
        printf("%d",sum);
    }
}