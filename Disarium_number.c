#include<stdio.h>
#include<math.h>
int main()
{
    int n,temp1,temp2,r,sum=0,count=0;
    scanf("%d",&n);
    temp1=n;
    temp2=n;
    while(temp1>0)
    {
        temp1=temp1/10;
        count++;
    }
    while(temp2>0)
    {
        r=temp2%10;
        sum=sum+pow(r,count);
        temp2=temp2/10;
        count--;
    }
    if(n==sum)
    printf("True");
    else
    printf("False");
}