#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        int count=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(n/2<count){
            cout<<arr[i];
            break;
        }
    }
}