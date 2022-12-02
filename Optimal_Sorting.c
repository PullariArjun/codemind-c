#include<stdio.h>
int main(){
    int t,x;
    scanf("%d",&t);
    for(x=0;x<t;x++){
        int n,i,min=9999999,max=0;
        scanf("%d",&n);
        int arr[n];
        for(i=0;i<n;i++){
            scanf("%d",&arr[i]);
            if(min>arr[i])
            min=arr[i];
            if(max<arr[i])
            max=arr[i];
        }
        int c=0;
        for(i=0;i<n-1;i++){
            if(arr[i]<arr[i+1])
            c=c+1;
        }
        if(c==n-1)
        printf("0");
        else
        printf("%d
",max-min);
        
    }
}