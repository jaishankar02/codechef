#include<bits/stdc++.h>
#define int long long int
using namespace std;
signed main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        map<int,int>m;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n<=2){
            cout<<0<<endl;
        }
        else{
        for(int i=0;i<n;i++){
            m[a[i]]++;
        }
        int temp =0;
        for(auto i:m){
            if(temp<i.second){
                temp=i.second;
            }
        }
        if(temp>1){
            cout<<(n-temp)<<endl;
        }
        else if(temp==1){
            cout<<n-(temp+1)<<endl;
        }
        
        }
    }
}