#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n/2;i++)
    {
        printf("%d ",arr[i]);
        printf("%d ",arr[n/2+i]);
    }
}