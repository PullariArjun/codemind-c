#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,f=0,r;
    scanf("%d",&n);
    d=(int)log10(n);
    while(n>0)
    {
        r=n/(int)pow(10,d);
        n=n%(int)pow(10,d);
        if(r==6&&f==0)
        {
            r=9;
            f=1;
        }
        printf("%d",r);
        d--;
    }
}