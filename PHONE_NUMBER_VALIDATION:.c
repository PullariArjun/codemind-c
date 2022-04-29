#include<stdio.h>
int main()
{
    char str[11];
    int i,count=0;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        count++;
    }
    if(str[0]==0||count!=10)
    {
        printf("Invalid");
    }
    else
    {
        printf("Valid");
    }
}