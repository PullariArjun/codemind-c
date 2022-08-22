#include<stdio.h>
int main()
{
    int n,i,flag=0;
    scanf("%d",&n);
    for(i=0;i<n/2;i++)
    {
        if(i*i==n)
        flag++;
    }
    if(flag==0)
    printf("False");
    else
    printf("True");
}