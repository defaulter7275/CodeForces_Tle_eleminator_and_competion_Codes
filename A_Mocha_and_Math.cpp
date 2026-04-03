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
#define entry_array(a, n) for (int i = 0; i < n; i++) cin >> a[i];

const int MOD = 1e9 + 7;
const ll INF = 1e18;

void solve() {
    int n;
    cin >> n;
    vll a(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> a[i];
    // }
    entry_array(a, n);
    int x=a[0];
    for(int i=0;i<n;i++){
        x&=a[i];
    }
    cout<<x<<endl;

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