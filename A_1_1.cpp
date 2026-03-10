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
    string s;
    cin >> s;

    vector<bool> is_fixed_zero(n, false);
    for (int i = 0; i < n; i++) {
        if (s[i] == '0') {
            if (i == 0 || i == n - 1) {
                is_fixed_zero[i] = true;
            } else {
                if (s[i - 1] == '0' || s[i + 1] == '0') {
                    is_fixed_zero[i] = true;
                }
            }
        }
    }

    int min_ones = 0;
    int max_ones = 0;
    int current_len = 0;

    for (int i = 0; i < n; i++) {
        if (is_fixed_zero[i]) {
            if (current_len > 0) {
                max_ones += current_len;
                min_ones += current_len - (current_len - 1) / 2;
                current_len = 0;
            }
        } else {
            current_len++;
        }
    }
    if (current_len > 0) {
        max_ones += current_len;
        min_ones += current_len - (current_len - 1) / 2;
    }

    cout << min_ones << " " << max_ones << endl;
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