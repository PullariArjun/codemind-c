#include<stdio.h>
int main()
{
    int a,b,sum=0;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        sum=sum+b;
        a=a/10;
        if(sum>9&&a==0)
        {
            a=sum;
            sum=0;
        }
    }
    printf("%d",sum);
}