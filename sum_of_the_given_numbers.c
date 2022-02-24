#include<stdio.h>
int main()
{
    int n,i,j,sum;
    scanf("%d",&n);
    int arr[n][2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {sum=0;
        for(j=0;j<2;j++)
        {
            sum=sum+arr[i][j];
        }
        printf("%d
",sum);
    }
}