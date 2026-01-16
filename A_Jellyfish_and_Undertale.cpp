#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,n;
        cin>>a>>b>>n;
        vector<int>z(n);
        for(int i=0;i<n;i++){
            cin>>z[i];
        }
    long long curr=b;
    for(int i=0;i<n;i++){
        curr=curr+min(z[i],a-1);
    }
cout<<curr<<endl;
    }
}