#include<stdio.h>
int main()
{
    int a,i,j;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<a;i++)
    {int count=0;
        for(j=1;j<arr[i];j++)
        {
            if(j*j==arr[i])
            {
                count++;
            }
        }
        if(count==1)
        {
            printf("True");
        }
        else
        {
            printf("False");
        }
        printf("
");
    }
}