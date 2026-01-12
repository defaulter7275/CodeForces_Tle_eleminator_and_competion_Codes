#include<bits/stdc++.h>
using namespace std;        
int main(){
    int t;
    cin>>t;
    while(t--){
        int s,k,m;
        cin>>s>>k>>m;
        long long r= m%k;
    if (s<=k) {
        if (s >= r) {
            cout<<s-r<<endl;
        }else{
            cout<< 0 <<endl;
        }
    } else{
        long long  i = m/k;
        if (i%2 == 0) {
            cout<< s-r <<endl;
        } else {
            cout<<k - r<<endl;
        }
    }
    }
}