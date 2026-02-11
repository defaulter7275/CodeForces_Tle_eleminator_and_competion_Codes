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
cin >> n;

vi p(n);
for (int i = 0; i < n; i++) {
    cin >> p[i];
}

vi a_prime;
for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (a_prime.empty() || a_prime.back() != x) {
        a_prime.pb(x);
    }
}

int j = 0;
for (int i = 0; i < n; i++) {
    if (j < (int)a_prime.size() && p[i] == a_prime[j]) {
        j++;
    }
}

if (j == (int)a_prime.size()) {
    cout << "YES\n";
} else {
    cout << "NO\n";
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