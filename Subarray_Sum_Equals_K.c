#include<stdio.h>
int main()
{
    int n,k,i,j,x;
    scanf("%d%d",&n,&k);
    int arr[n],count=0;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            int sum=0;
            for(x=i;x<=j;x++)
            {
                sum+=arr[x];
            }
            if(sum==k)
            count++;
        }
    }
    printf("%d",count);
}