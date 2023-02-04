#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=n-i;j++)
            cout<<" ";
        for(j=0;j<(n*2)-(n-i)*2-1;j++)
            cout<<i;
        cout<<endl;
    }
}