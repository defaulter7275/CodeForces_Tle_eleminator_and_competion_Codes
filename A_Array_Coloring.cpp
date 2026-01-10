#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        int count_odd=0;
        for(int i=0;i<n;i++){
            if(a[i]%2!=0)count_odd++;

        }
        if(count_odd%2!=0){cout<<"NO"<<endl;}
        else {cout<<"YES"<<endl;}
        
    }
}