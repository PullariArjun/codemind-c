#include<stdio.h>
int main()
{
    int n,sum,temp,f_p,s_p,r,i;
    scanf("%d",&n);
    for(i=n+1;i<10000;i++)
    {
        sum=0;
        temp=i;
        while(temp>0)
        {
            r=temp%10;
            sum=sum*10+r;
            temp=temp/10;
        }
        if(sum==i)
        {
            f_p=i;
            break;
        }
    }
    for(i=n-1;i>1;i--)
    {
        sum=0;
        temp=i;
        while(temp>0)
        {
            r=temp%10;
            sum=sum*10+r;
            temp=temp/10;
        }
        if(sum==i)
        {
            s_p=i;
            break;
        }
    }
    if((f_p-n)>(n-s_p))
    printf("%d",s_p);
    else if((f_p-n)<(n-s_p))
    printf("%d",f_p);
    else
    printf("%d %d",s_p,f_p);
}