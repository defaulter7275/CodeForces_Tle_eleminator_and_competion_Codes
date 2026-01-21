#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n + 1);
        for(int i = 1; i <=n; i++){
            cin >> a[i];
        }
        long long k = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] != i){
                k = gcd(k, abs(i - a[i]));
            }
        }

        cout << k << '\n';
    }
    return 0;
}
