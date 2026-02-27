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
    int n, x, y;
    cin >> n >> x >> y;

    vi p(n);
    for(int i = 0; i < n; i++)
        cin >> p[i];
    vi AC, B;
    for(int i = 0; i < x; i++) AC.pb(p[i]);
    for(int i = x; i < y; i++) B.pb(p[i]);
    for(int i = y; i < n; i++) AC.pb(p[i]);
    int min_idx = 0;
    for(int i = 1; i < sz(B); i++) {
        if(B[i] < B[min_idx]) {
            min_idx = i;
        }
    }
    vi B_opt;
    for(int i = min_idx; i < sz(B); i++) B_opt.pb(B[i]);
    for(int i = 0; i < min_idx; i++) B_opt.pb(B[i]);
    int insert_idx = sz(AC);
    for(int i = 0; i < sz(AC); i++) {
        if(AC[i] > B_opt[0]) {
            insert_idx = i;
            break;
        }
    }
    for(int i = 0; i < insert_idx; i++) cout << AC[i] << " ";
    for(int val : B_opt) cout << val << " ";
    for(int i = insert_idx; i < sz(AC); i++) cout << AC[i] << " ";
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