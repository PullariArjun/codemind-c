#include<stdio.h>
int main()
{
    int a,b,i,sum=0,fact=1,n;
    scanf("%d",&a);
    n=a;
    while(a>0)
    {fact=1;
        b=a%10;
        for(i=b;i>=1;i--)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        a=a/10;
    }
    if(n==sum)
    {
     printf("The number %d is a strong number",n);   
    }
    else
    {
        printf("The number %d is not a strong number",n);
    }
}