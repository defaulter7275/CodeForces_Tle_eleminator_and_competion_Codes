#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using pii = pair<int, int>;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
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

    vector<long long> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    long long ops = 0;

    for (int i = n - 2; i >= 0; i--) {
        if (a[i] < a[i + 1]) continue;

        while (a[i] >= a[i + 1] && a[i] > 0) {
            a[i] >>= 1;   // divide by 2 (faster)
            ops++;
        }

        if (a[i] >= a[i + 1]) {
            cout << -1 << '\n';
            return;
        }
    }

    cout << ops << '\n';
}


void solve1() {
    
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

