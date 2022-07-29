#include<stdio.h>
#include<math.h>
int main()
{
    int n,r,i=0,c=0;
    scanf("%d",&n);
    int d=log10(n)+1;
    int arr[d],j;
    while(n>0)
    {
        r=n%10;
        arr[i]=r;
        i++;
        n=n/10;
    }
    for(i=0;i<d;i++)
    {int count=0;
        for(j=0;j<d;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
        if(count==1)
        {
            c++;
        }
    }
    if(c==d)
        printf("Unique Number");
    else
        printf("Not Unique Number");
}