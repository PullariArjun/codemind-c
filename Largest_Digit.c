#include<stdio.h>
int main()
{
    int a,b,big=0;
    scanf("%d",&a);
    while(a>0)
    {
        b=a%10;
        if(big<b)
        {
            big=b;
        }
        a=a/10;
    }
    printf("%d",big);
}