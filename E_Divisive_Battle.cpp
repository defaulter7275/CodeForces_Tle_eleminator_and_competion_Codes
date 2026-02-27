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
const int MAXA = 1000005;
int spf[MAXA];

void precompute() {
    iota(spf, spf + MAXA, 0);
    for (int i = 2; i * i < MAXA; i++) {
        if (spf[i] == i) {
            for (int j = i * i; j < MAXA; j += i)
                if (spf[j] == j)
                    spf[j] = i;
        }
    }
}

int get_base(int n) {
    if (n == 1) return 1;
    int p = spf[n];
    while (n % p == 0) n /= p;
    if (n == 1) return p;
    return -1;
}

void solve() {
        int n;
    cin >> n;
    vi a(n);
    for(int i=0; i<n; i++) cin >> a[i];

    bool sorted = true;
    for(int i=0; i<n-1; i++) {
        if(a[i] > a[i + 1]) {
            sorted = false;
            break;
        }
    }

    if(sorted) {
        cout << "Bob" << endl;
        return;
    }

    vi bases;
    for(int x : a) {
        int b = get_base(x);
        if(b == -1) {
            cout << "Alice" << endl;
            return;
        }
        bases.pb(b);
    }

    bool bases_sorted = true;
    for(int i=0; i<n-1; i++) {
        if(bases[i] > bases[i+1]) {
            bases_sorted = false;
            break;
        }
    }

    if(bases_sorted) cout << "Bob" << endl;
    else cout << "Alice" << endl;
}

int main() {
    fastio
    precompute();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}