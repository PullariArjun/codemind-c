#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int arr[n],i=0;
    x:
    {
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    if(i<n-1)
    {
        i++;
        goto x;
    }
    printf("%d",sum);
}