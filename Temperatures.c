using namespace std;
#include<iostream>
int main(){
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
        cin>>arr[i];
    for(i=0;i<n;i++){
        int count=1,flag=0;
        for(j=i+1;j<n;j++){
            if(arr[j]<=arr[i]){
                count++;
            }
            else{
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<"0 ";
        else
            cout<<count<<" ";
    }
}