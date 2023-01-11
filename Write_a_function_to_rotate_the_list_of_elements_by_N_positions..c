#include<iostream>
using namespace std;
int main(){
    int n,k,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    k=k%n;
    k=n-k;
    for(i=k;i<n;i++)
        cout<<arr[i]<<" ";
    for(i=0;i<k;i++)
        cout<<arr[i]<<" ";
}