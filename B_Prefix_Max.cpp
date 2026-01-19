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
        int max = *max_element(a.begin(), a.end());
        long long result = (long long)max * n;

        cout << result << endl;
    }
    return 0;
}