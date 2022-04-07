#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    for(j=min;j>=1;j--)
    {
        int count=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]%j==0)
            {
                count++;
            }
        }
        if(count==n)
        {
            printf("%d",j);
            break;
        }
    }
}