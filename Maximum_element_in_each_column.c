#include<stdio.h>
int main()
{
    int m,n,i,j;
    scanf("%d%d",&m,&n);
    int arr[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(j=0;j<n;j++)
    {
        int big=0;
        for(i=0;i<m;i++)
        {
           if(big<arr[i][j])
           {
               big=arr[i][j];
           }
        }
        printf("%d
",big);
    }
}