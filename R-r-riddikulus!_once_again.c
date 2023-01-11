#include<iostream>
using namespace std;
int main(){
    int n,k,i;
    cin>>n>>k;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=k;i<n;i++)
        cout<<arr[i]<<" ";
    for(i=0;i<k;i++)
        cout<<arr[i]<<" ";
}