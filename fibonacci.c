#include<stdio.h>
int main()
{
    int n,c=1,i=0,j=1,sum=0;
    scanf("%d",&n);
    printf("%d %d ",i,j);
    while(c<=n-2)
    {
        sum=i+j;
        i=j;
        j=sum;
        printf("%d ",sum);
        c++;
    }
}