#include<stdio.h>
int main()
{
    int n,big=0,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {int count=0;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            if(big<arr[i])
            {
                big=arr[i];
            }
        }
    }
    if(big!=0)
    {
        printf("%d",big);
    }
    else
    {
        printf("-1");
    }
}