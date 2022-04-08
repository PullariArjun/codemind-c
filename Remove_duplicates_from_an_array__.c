#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],f,j,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        f=0;
        for(j=0;j<i;j++)
        {
            if(arr[i]==arr[j])
            {
                f=1;
            }
        }
        if(f==0)
        {
            printf("%d ",arr[i]);
        }
    }
}