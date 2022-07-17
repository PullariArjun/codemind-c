#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,count,temp,f,r;
    scanf("%d%d",&a,&b);
    if(a==0)
    a=1;
    for(i=a;i<=b;i++)
    {
        f=(int)log10(i)+1;
        temp=i,count=0;
        while(temp!=0)
        {
            r=temp%10;
            if(r==0)
            {
                temp=temp/10;
                continue;
            }
            if(i%r==0)
            {
                count++;
            }
            temp=temp/10;
        }
        if(f==count)
        printf("%d ",i);
    }
}