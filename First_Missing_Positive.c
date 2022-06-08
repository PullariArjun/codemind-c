#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=1;j<1000;j++)
    {int count=0;
        for(i=0;i<n;i++)
        {
           if(arr[i]==j)
           {
               count++;
           }
        }
        if(count==0)
        {
            printf("%d",j);
            break;
        }
    }
}