#include<iostream>
using namespace std;
int main(){
    int t,tc;
    cin>>t;
    for(tc=0;tc<t;tc++){
        int n,k,i;
        cin>>n>>k;
        k=k%n;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        for(i=n-k;i<n;i++)
            cout<<arr[i]<<" ";
        for(i=0;i<n-k-1;i++)
            cout<<arr[i]<<" ";
        cout<<arr[n-k-1];
        cout<<endl;
    }
}