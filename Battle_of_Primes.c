#include<stdio.h>
int main()
{
    int a,b,i,j;
    scanf("%d%d",&a,&b);
    /*loop starts from a+b+1*/
    for(i=(a+b+1);i<1000;i++)
    {
        int count=0;
        /*cheking the next number is prime or not*/
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        /*if the next number is prime printing 
         (next number-a-b)*/
        if(count==0)
        {
            printf("%d",i-a-b);
            break;
        }
    }
}