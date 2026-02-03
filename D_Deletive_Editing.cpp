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
    string s, t;
    cin >> s >> t;

    vi sa(26, 0), ta(26, 0);

    for (char c : s) sa[c - 'A']++;
    for (char c : t) ta[c - 'A']++;
    vi del(26, 0);
    for (int i = 0; i < 26; i++) {
        if (sa[i] < ta[i]) {
            cout << "NO\n";
            return;
        }
        del[i] = sa[i] - ta[i];
    }
    string res;
    for (char c : s) {
        if (del[c - 'A'] > 0) {
            del[c - 'A']--;
        } else {
            res.pb(c);
        }
    }
    cout << (res == t ? "YES\n" : "NO\n");
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