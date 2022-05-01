#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    int arr1[a],arr2[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(j=0;j<a;j++)
    {
        scanf("%d",&arr2[j]);
    }
    for(i=0;i<a;i++)
    {
        for(j=0;j<a;j++)
        {
            if(i==j)
            {
                printf("%d ",arr1[i]+arr2[j]);
            }
        }
    }
}