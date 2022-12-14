#include<stdio.h>
int rev(int n){
    int r,s=0;
    while(n>0){
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    return s;
}
int main(){
    int n;
    scanf("%d",&n);
    n+=rev(n);
    while(n!=rev(n))
        n+=rev(n);
    printf("%d",n);
}