#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int x=0;x<t;x++){
        int i,n,count=0;
        cin>>n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]%2==1)
                count++;
        }
        cout<<count/2<<endl;
    }
}