#include<stdio.h>
int main()
{
    int n,c=1,i=0,j=1,sum=0,flag=0;
    scanf("%d",&n);
    //printf("%d %d ",i,j);
    while(sum<n)
    {
        sum=i+j;
        i=j;
        j=sum;
        if(sum==n)
        flag++;
    }
    if(flag!=0)
    printf("True");
    else
    printf("False");
}