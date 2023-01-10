#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sqn=2;
    while(sqn<n){
        sqn=sqn*2;
    }
    if((sqn-n)>=(n-(sqn/2)))
        cout<<n-(sqn/2);
    else
        cout<<sqn-n;
}