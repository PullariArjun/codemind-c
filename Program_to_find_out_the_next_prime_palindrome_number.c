#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=n+1;i<100000;i++)
    {int count=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            int temp=i,r,sum=0;
            while(temp>0)
            {
                r=temp%10;
                sum=sum*10+r;
                temp=temp/10;
            }
            if(sum==i)
            {
                printf("%d",i);
                break;
            }
        }
    }
}