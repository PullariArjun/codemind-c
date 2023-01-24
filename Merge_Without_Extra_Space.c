#include<iostream>
using namespace std;
int * sort(int n,int arr[]){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-1-i;j++){
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
    int t,tc;
    cin>>t;
    for(tc=0;tc<t;tc++){
        int n,m,i;
        cin>>n>>m;
        n+=m;
        int arr[n];
        for(i=0;i<n;i++){
            cin>>arr[i];
        }
        int *arr1=sort(n,arr);
        for(i=0;i<n-1;i++){
            cout<<arr1[i]<<" ";
        }
        cout<<arr1[n-1]<<endl;
    }
}