#include<stdio.h>
int main()
{
    int n,count=0,i;
    scanf("%d",&n);
    /*cheking wether the number is prime or not*/
    for(i=2;i<n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }
    /*if the number is prime the cheking for other
    coditions*/
    if(count==0)
    {
        int temp=n,count1=0;
        int count2=0;
        //cheking how many number that number have
        while(temp>0)
        {
            temp=temp/10;
            count1++;
        }
        /*cheking is every number in that number
        is prime or not*/
        while(n>0)
        {
           int c=0;
           int r=n%10;
           /*since 1 is not a prime 
           but from the condition the system
           will treatd as a prime*/
           if(r==1)
           {
               n=n/10;
               continue;
           }
           /*cheking the numbers are primes or not*/
            for(i=2;i<r;i++)
            {
                if(r%i==0)
                {
                    c++;
                }
            }
            if(c==0)
            {
                count2++;
            }
            n=n/10;
        }
        /*if the number of numbers that number have
        is eqal to the prime numbers that number have*/
        if(count1==count2)
        printf("Mega Prime");
        else
        printf("Not Mega Prime");
    }
    //if the given number is not a pime
    else
    printf("Not Mega Prime");
}