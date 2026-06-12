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
        ll sum=0;
        ll min_allowed = INT_MAX;
        for (int i = 1; i <= n; i++) {
        long long a;
        cin >> a;
        sum += a;
        
        ll ans = sum / i;
        min_allowed = min(ans, min_allowed);
        
        cout << min_allowed << " ";    
    }
    cout << endl;
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