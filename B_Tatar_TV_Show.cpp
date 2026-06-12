#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using si = set<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)(x).size())
#define F first
#define S second
#define endl '\n'  
#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    int rng=n-k;
    for(int i=0;i<rng;i++){
        if(s[i]=='1'){
            s[i]='0';
        s[i + k] = (s[i + k] == '1') ? '0' : '1';
        }
    }
    for (int i = n - k; i < n; i++) {
        if (s[i] == '1') {
            cout << "NO"<<endl;
            return;
        }
    }
    cout << "YES"<<endl;
}

int main() {
    fastio

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}