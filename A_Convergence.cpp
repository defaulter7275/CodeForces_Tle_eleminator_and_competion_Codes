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
    int n;
    cin>>n;
    vi v(n);
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    int sixseven = 1e9;
    for(int i = 0; i < n; i++) {
        int c = 0, d = 0;
        for(int j = 0; j < n; j++) {
            if(v[j] < v[i]) c++;
            if(v[j] > v[i]) d++;
        }
        int m = (c > d) ? c : d;
        sixseven = (sixseven < m) ? sixseven : m;
    }
    cout<<sixseven<<endl;
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