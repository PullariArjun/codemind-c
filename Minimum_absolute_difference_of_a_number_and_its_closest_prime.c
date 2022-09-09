#include<stdio.h>
int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    return count;
}
int main()
{
    int n,sp,fp,i;
    scanf("%d",&n);
    for(i=n;i<=99999;i++)
    {
        if(prime(i)==2)
        {
            fp=i;
            break;
        }
    }
    for(i=n;i>=1;i--)
    {
        if(prime(i)==2)
        {
            sp=i;
            break;
        }
    }
    if((fp-n)>(n-sp))
    printf("%d",n-sp);
    else
    printf("%d",fp-n);
}