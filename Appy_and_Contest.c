using namespace std;
#include<iostream>
int main(){
    int t,tc;
    cin>>t;
    for(tc=0;tc<t;tc++){
        int n,a,b,k,count=0,f=0;
        cin>>n>>a>>b>>k;
        for(int i=1;i<=n;i++){
            if(i%a==0 && i%b==0)
                continue;
            if(i%a==0 || i%b==0)
                count++;
            if(count>=k){
                cout<<"Win
";
                f=1;
                break;
            }
        }
        if(f==0)
            cout<<"Lose
";
    }
}