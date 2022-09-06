#include<stdio.h>
int prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        count++;
    }
    return count;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        int j,fp,sp;
        for(j=arr[i];j<=9999999;j++)
        {
            if(prime(j)==2)
            {
                fp=j;
                break;
            }
        }
        for(j=arr[i];j>=1;j--)
        {
            if(prime(j)==2)
            {
                sp=j;
                break;
            }
        }
        if(arr[i]-sp<=fp-arr[i])
        printf("%d
",sp);
        else
        printf("%d
",fp);
    }
}