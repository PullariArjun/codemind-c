#include<stdio.h>
int main()
{
    int n,i,num=0,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {int count=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==9)
        {
            printf("%d ",i);
            num++;
        }
    }
    printf("
Total=%d",num);
}