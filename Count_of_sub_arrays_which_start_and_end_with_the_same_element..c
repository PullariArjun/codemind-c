#include<stdio.h>
int main()
{
    int n,i,j,k,count=0;
    scanf("%d",&n);
    int arr[n],f=0,s=0;
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            for(k=i;k<=j;k++)
            {
                f=arr[i];
                s=arr[j];
            }
            if(f==s)
            count++;
        }
    }
    printf("%d",count);
}