#include<stdio.h>
int main()
{
    int n,count=1,i,j;
    //count=1 becz of 1 is not a prime 
    //it divedes all numbers
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {int c=0;
            for(j=2;j<i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c!=0)
            {
                count++;
            }
        }
    }
    printf("%d",count);
}