#include<stdio.h>
int main()
{
    int i,n,is_perfect=1;
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        if(n!=i*i)
        {
            is_perfect=0;
        }
        else
        {
            is_perfect=1;
            break;
        }
    }
        if(is_perfect==1)
        {
            printf("True");
        }
    else
    {
        printf("False");
    }
    
}