#include<iostream>
using namespace std;
int * sort(int n,int arr[]){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    return arr;
}
int main(){
    int n,x,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>x;
        arr[i]=x*x;
    }
    int *arr1=sort(n,arr);
    for(i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
}