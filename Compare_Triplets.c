#include<stdio.h>
int main()
{
    int a[3],b[3],i,j;
    int bob=0,alice=0;
    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<3;j++)
    {
        scanf("%d",&b[j]);
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
                if(a[i]>b[j])
                {
                    alice++;
                }
                else if(a[i]<b[j])
                {
                    bob++;
                }
            }
        }
    }
    printf("%d %d",alice,bob);
}