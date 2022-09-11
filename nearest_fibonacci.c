#include<stdio.h>
int fib(int n)
{
    int i=0,j=1,sum=0,count=0;
    while(sum<=n)
    {
        sum=i+j;
        i=j;
        j=sum;
        if(sum==n)
        count=1;
    }
    return count;
}
int main()
{
    int n,i,ff,sf;
    scanf("%d",&n);
    for(i=n;i<=9999;i++)
    {
        if(fib(i)==1)
        {
            ff=i;
            break;
        }
    }
    for(i=n;i>=1;i--)
    {
        if(fib(i)==1)
        {
            sf=i;
            break;
        }
    }
    if((ff-n)>(n-sf))
    printf("%d",sf);
    else if((ff-n)<(n-sf))
    printf("%d",ff);
    else
    printf("%d %d",sf,ff);
}