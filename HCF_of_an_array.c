#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=arr[0];j>=1;j--)
    {int count=0;
        for(i=0;i<a;i++)
        {
            if(arr[i]%j==0)
            {
                count++;
            }
        }
        if(count==a)
        {
            printf("%d",j);
            break;
        }
    }
}