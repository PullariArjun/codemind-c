#include<stdio.h>
int main()
{
    int l,n,i,j;
    scanf("%d%d",&l,&n);
    int arr[n][2];
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
        if(arr[i][0]<l||arr[i][1]<l)
        printf("UPLOAD ANOTHER
");
        else if(arr[i][0]==arr[i][1])
        printf("ACCEPTED
");
        else
        printf("CROP IT
");
    }
}