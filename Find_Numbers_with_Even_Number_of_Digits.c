#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int even_dig_count=0;
    for(i=0;i<n;i++)
    {
       int count=0;
        for(;arr[i]>0;)
        {
           arr[i]=arr[i]/10;
            count++;
        }
        if(count%2==0)
        {
            even_dig_count++;
        }
    }
    printf("%d",even_dig_count);
}