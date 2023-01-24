#include<iostream>
using namespace std;
int * sort(int n,int arr[]){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=0;j<n-i-1;j++){
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
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
    	cin>>arr[i];
	}
	int *arr1=sort(n,arr);
	int m;
	cin>>m;
	int arr2[m];
	for(i=0;i<n;i++){
		cin>>arr2[i];
	}
	int flag=0;
	int *arr3=sort(m,arr2);
	for(i=0;i<n;i++){
		if(arr1[i]!=arr3[i]){
			cout<<"False";
			flag++;
			break;
		}
	}
	if(flag==0)
		cout<<"True";
	cout<<endl;
}