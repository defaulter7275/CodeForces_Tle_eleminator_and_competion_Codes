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
int a1, a2, a4, a5;
    cin >> a1 >> a2 >> a4 >> a5;
    int c1 = a1 + a2;
    int c2 = a4 - a2;
    int c3 = a5 - a4;
    if (c1 == c2 && c2 == c3) {
        cout << 3 << "\n";
    } else if (c1 == c2 || c2 == c3 || c1 == c3) {
        cout << 2 << "\n";
    } else {
        cout << 1 << "\n";
    }
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