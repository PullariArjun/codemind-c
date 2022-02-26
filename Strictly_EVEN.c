#include<stdio.h>
int main()
{
    int n,i,ec=0,count=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            ec++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0 && i%2==0)
        {
            count++;
        }
    }
    if(ec==count)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}