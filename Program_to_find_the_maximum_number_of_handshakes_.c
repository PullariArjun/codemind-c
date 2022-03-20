#include<stdio.h>
int main()
{
    int a,sh=0,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
        sh=sh+i;
    }
    printf("%d",sh);
}