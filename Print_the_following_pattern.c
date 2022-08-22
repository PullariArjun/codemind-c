#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int k=1;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<k)
            {
                continue;
            }
            printf("%d",j);
            printf(" ");
        }
        k++;
        printf("
");
    }
}