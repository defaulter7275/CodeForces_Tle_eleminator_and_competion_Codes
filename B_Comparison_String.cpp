#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        int count = 1;
        int mx = 1;

        for(int i = 1; i < n; i++){
            if(s[i] == s[i-1]){
                count++;
            } else {
                count = 1;
            }
            mx = max(mx, count);
        }

        cout << mx+1 << endl;
    }
    return 0;
}
