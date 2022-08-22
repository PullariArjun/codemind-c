#include<stdio.h>
int main()
{
    int n,i,j,k;
    scanf("%d",&n);
    int arr[n][2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        int count=0;
        for(k=arr[i][0];k<=arr[i][1];k++)
        {
            if(k%10==2||k%10==3||k%10==9)
            count++;
        }
        printf("%d
",count);
    }
}