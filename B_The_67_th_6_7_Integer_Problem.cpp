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
    vi a(7);
    for (int i = 0; i < 7; i++) {
        cin >> a[i];
    }
    sort(all(a));
    int sum = 0;
    for (int i = 0; i < 6; i++) {
        sum += a[i];
    }
    ll last = a[6];
    ll result = last - sum;
    cout << result << endl;
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