#include<stdio.h>
int main()
{
    int a,b,c,d,s=0,p=1;
    a=b;
    scanf("%d",&a);
    while(a>0)
    {
        c=a%10;
        s=s+c;
        p=p*c;
        a=a/10;
    }
    if(s==p)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}