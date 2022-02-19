#include<stdio.h>
int main()
{
    int l,b,w,c,area;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    area=(l+w*2)*(b+w*2)-(l*b);
    printf("%d",area*c);
}