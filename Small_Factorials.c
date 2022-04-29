#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    int arr[a],i;
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {int fac=1,j;
        for(j=1;j<=arr[i];j++)
        {
            fac=fac*j;
        }
        printf("%d
",fac);
    }
}