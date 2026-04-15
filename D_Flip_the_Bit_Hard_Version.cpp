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

void solve(){
int n, k;
    cin >> n >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    int p;
    cin >> p;
    int x = a[p];
    int ops = 0;
    for (int i = p - 1; i >= 1; i--) {
        if (a[i] != a[i+1]) {
            ops++;
        }
    }
    for (int i = p + 1; i <= n; i++) {
        if (a[i] != a[i-1]) {
            ops++;
        }
    }
    cout << ops << endl;}

int main() {
    fastio

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}