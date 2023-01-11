#include<iostream>
using namespace std;
int main(){
    int n,m,i,k,count=0;
    cin>>n;
    int arr1[n];
    for(i=0;i<n;i++){
        cin>>arr1[i];
    }
    cin>>m;
    int arr2[m];
    for(i=0;i<m;i++){
        cin>>arr2[i];
    }
    cin>>k;
    for(i=0;i<n;i++){
        if(arr1[i]<=k and k<=arr2[i])
            count++;
    }
    cout<<count;
}