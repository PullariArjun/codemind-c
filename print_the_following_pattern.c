#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int k=n+64;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c",k);
            printf(" ");
        }
        k--;
        printf("
");
    }
}