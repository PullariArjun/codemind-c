using namespace std;
#include<iostream>
int main(){
    int n,count=0,i,max=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        if(arr[i]==1){
            count++;
        }
        if(arr[i]!=1 || i==n-1){
            if(count > max)
                max=count;
            count=0;
        }
    }
    cout<<max;
}