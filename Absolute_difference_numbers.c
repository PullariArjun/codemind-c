#include<stdio.h>
#include<math.h>
int main()
{
    int n,x,i=0,sum1=0,r;
    scanf("%d%d",&n,&x);
    int temp1=n,sum2=0;
    int temp2=0;
    while(i<x)
    {
        r=n%10;
        sum1=sum1+r*pow(10,i);
        n=n/10;
        i++;
    }
    while(temp1>0)
    {
        r=temp1%10;
        temp2=temp2*10+r;
        temp1=temp1/10;
    }
    i=0;
    while(i<x)
    {
        r=temp2%10;
        sum2=sum2*10+r;
        temp2=temp2/10;
        i++;
    }
    if(sum1>=sum2)
    printf("%d",sum1-sum2);
    else
    printf("%d",sum2-sum1);
}