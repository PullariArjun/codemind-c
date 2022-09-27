#include<stdio.h>
int main()
{
    int n,k,i,z=0,a;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            z++;
            a=i;
            break;
        }
    }
    if(z==0)
    printf("-1 ");
    else
    printf("%d ",a);
    z=0;
    for(i=n-1;i>=0;i--)
    {
        if(arr[i]==k)
        {
            z++;
            a=i;
            break;
        }
    }
    if(z==0)
    printf("-1");
    else
    printf("%d",a);
}