#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin>>n;
        if(n<4||n%2==1) cout << -1 << endl;
        else{
            long long min=ceil(n/6.0);// integer ceil of n/6
            long long max=n/4;
            cout << min << " " << max << endl;
        }
    }
    return 0;
}


// (n + divisor - 1)/divisor