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
    ll n;
    cin>>n;
    vll a(n);
    for(int i=0;i<n;i++) {
        cin>>a[i];
    }

        map<ll, int> freq;
    int max_f = 0;
    for (int i = 0; i < n; i++) {
        freq[a[i]]++;
        max_f = max(max_f, freq[a[i]]);
    }

    ll ans = 0;
    while (max_f < n) {
        ans++;
        int can_add = min((ll)max_f, n - max_f);
        ans += can_add;
        max_f += can_add;
    }

    cout << ans << endl;

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
