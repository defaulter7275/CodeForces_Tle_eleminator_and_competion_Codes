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

int t1;

void solve() {
    int x, y;
    cin >> x >> y;
    if (t1 == 2) {
        x++;
    }
    int n = x + y;
    if (n % 2 == 0) {
        if (x > y || x == 0) {
            cout << "NO\n";
            return;
        }
        cout << "YES\n";
        int path_len = 2 * x;
        for (int i = 1; i < path_len; i++) cout << i << " " << i + 1 << "\n";
        for (int i = path_len + 1; i <= n; i++) cout << path_len << " " << i << "\n";
    } else {
        if (x > y) {
            cout << "NO\n";
            return;
        }
        cout << "YES\n";
        int path_len = 2 * x + 1;
        for (int i = 1; i < path_len; i++) cout << i << " " << i + 1 << "\n";
        for (int i = path_len + 1; i <= n; i++) cout << path_len << " " << i << "\n";
    }
}

int main() {
    fastio

    int t = 1;
    cin >> t;
    t1=t;
    while (t--) {
        solve();
    }
    return 0;
}