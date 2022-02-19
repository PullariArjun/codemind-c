#include<stdio.h>
int main()
{
    int l,b,w,c,area;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    area=l*b-((l-w*2)*(b-w*2));
    if(b<=w*2||l<=w*2)
    {
        printf("Impossible");
    }
    else
    {
    printf("%d",area*c);
    }
}