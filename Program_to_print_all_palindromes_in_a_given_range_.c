#include<stdio.h>
int rev(int n)
{
    int r,sum=0;
    while(n>0)
    {
        r=n%10;
        sum=sum*10+r;
        n=n/10;
    }
    return sum;
}
int main()
{
    int m,i,n;
    scanf("%d%d",&m,&n);
    for(i=m;i<=n;i++)
    {
        if(i==rev(i))
        printf("%d ",i);
    }
}