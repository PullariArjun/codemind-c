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
    int n,i,f=0;
    scanf("%d",&n);
    for(i=2;i<n/2;i++)
    {
        if(n%i==0&& prime(i)==2&&prime(n/i)==2)
        {
            printf("%d %d",i,n/i);
            f++;
            break;
        }
    }
    if(f==0)
    printf("-1");
}