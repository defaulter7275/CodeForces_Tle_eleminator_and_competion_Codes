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
    map<int, int> freq;
    for (int i = 0; i < n * n; i++) {
        int color;
        cin >> color;
        freq[color]++;
    }
    if (n == 1) {
        cout << "NO" << endl;
        return;
    }

    bool possible = true;
    for (auto const& [color, count] : freq) {
        if (count > (n * n - n)) {
    
            possible = false;
            break;
        }
    }

    if (possible) cout << "YES" << endl;
    else cout << "NO" << endl;
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