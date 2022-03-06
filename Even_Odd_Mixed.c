#include<stdio.h>
int main()
{
    int a,b,count1=0,count2=0;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        if(b%2==0)
        {
            count1++;
        }
        else
        {
            count2++;
        }
        a=a/10;
    }
    if(count1!=0&&count2!=0)
    {
        printf("Mixed");
    }
    else if(count1!=0&&count2==0)
    {
        printf("Even");
    }
    else
    {
        printf("Odd");
    }
}