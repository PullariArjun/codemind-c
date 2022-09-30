#include<stdio.h>
int main()
{
    int n,i,j,p=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        int count=1;
        if(arr[i]==-1)
        continue;
        for(j=0;j<n;j++)
        {
            if(arr[i]==arr[j]&&i!=j)
            {
                count++;
                arr[j]=-1;
            }
        }
        p=p+count/2;
    }
    printf("%d",p);
}