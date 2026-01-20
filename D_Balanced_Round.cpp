#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        sort(a.begin(),a.end());
        long long count=1;
        long long ans=1;
        for(int i=0;i<n-1;i++){
            if(a[i+1]-a[i]<=k){
                count++;
            }
            else{
                count=1;
            }
               ans=max(ans,count);
 }
        cout<<n-ans<<endl;

    }
}