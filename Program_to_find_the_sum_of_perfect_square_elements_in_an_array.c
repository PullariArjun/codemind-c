#include<stdio.h>
int main()
{
    int n,i,j,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]==1)
        sum=sum+arr[i];
        for(j=0;j<arr[i];j++)
        {
            if(j*j==arr[i])
            {
                sum=sum+arr[i];
            }
        }
    }
    printf("%d",sum);
}