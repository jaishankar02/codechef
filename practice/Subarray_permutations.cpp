#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(k==1){
            if(n!=1){
                cout<<-1<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
        else if(k>n){
            cout<<-1<<endl;
        }
        else{
            k=k-1;
            int i;
            for(i=1;i<=k;i++){
                cout<<i<<" ";
            }
            if(i<=n){
                for(int j=n;j>=i;j--){
                    cout<<j<<" ";
                }
            }
            cout<<endl;
        }
    }
}