#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=n;j++)
        {
            if(i==j||i==n-j+1)
            printf("%d",i);
            printf(" ");
        }
        printf("
");
    }
}