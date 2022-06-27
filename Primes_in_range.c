#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,count=0,i,j;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {int c=0;
        if(i==1)
        continue;
        for(j=2;j<=sqrt(i);j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==0)
        count++;
    }
    printf("%d",count);
}