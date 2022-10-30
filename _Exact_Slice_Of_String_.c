#include<stdio.h>
int main()
{
    char ch[100000];
    fgets(ch,100000,stdin);
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=a;i<=b;i++)
    printf("%c",ch[i]);
}