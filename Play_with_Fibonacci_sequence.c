#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int i=0,j=1,k=2;
    printf("%d %d ",i,j);
    while(k<n)
    {
        sum=i+j;
        i=j;
        j=sum;
        printf("%d ",sum);
        k++;
    }
}