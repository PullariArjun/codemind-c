using namespace std;
#include<iostream>
int main(){
    int t;
    cin>>t;
    for(int x=0;x<t;x++){
        int n,sum,i,j,k,flag=0;
        cin>>n>>sum;
        int arr[n];
        for(i=0;i<n;i++)
            cin>>arr[i];
        for(i=0;i<n;i++){
            for(j=i;j<n;j++){
                int s=0;
                for(k=i;k<=j;k++){
                    s+=arr[k];
                }
                if(s==sum){
                    cout<<i+1<<" "<<j+1<<endl;
                    flag=1;
                    break;
                }
            }
            if(flag==1)
                break;
            if(i==n-1 && flag==0)
                cout<<"-1"<<endl;
        }
    }
}