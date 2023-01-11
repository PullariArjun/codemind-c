#include<iostream>
using namespace std;
int main(){
    int n,max=0,ele,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++){
        int count=0;
        for(j=0;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>max){
            ele=arr[i];
            max=count;
        }
        else if(count==max && ele>arr[i]){
            ele=arr[i];
        }
    }
    cout<<ele;
}