#include<stdio.h>
int main()
{
    int n,sum=0,c=0,j,i;
    float res;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {int count=1;
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
        if(arr[i]==count)
        {
            sum=sum+arr[i];
            c++;
        }
    }
    if(sum==0&&c==0)
    printf("-1");
    else
    {
    res=(float)sum/c;
    printf("%.2f",res);
    }
}