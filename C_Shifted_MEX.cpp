#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        int maxi = 1; 
        int curr = 1;
        for (int i = 1; i < n; i++) {
        int diff = a[i] - a[i-1];
        
        if (diff == 1) {
            curr++;
        } 
        else if (diff > 1) {
            curr = 1;
        }
        
        maxi = max(maxi, curr);
    }

    cout << maxi <<endl;
    }
}