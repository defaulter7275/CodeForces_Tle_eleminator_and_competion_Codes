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

const int MAX = 300000;
bool is_prime[MAX + 1];
vll primes;

void sieve() {
    memset(is_prime, true, sizeof(is_prime));
    is_prime[0] = is_prime[1] = false;
    for (int p = 2; p * p <= MAX; p++) {
        if (is_prime[p]) {
            for (int i = p * p; i <= MAX; i += p)
                is_prime[i] = false;
        }
    }
    for (int p = 2; p <= MAX; p++) {
        if (is_prime[p]) {
            primes.pb(p);
        }
    }
}

void solve() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cout << primes[i] * primes[i + 1] << " ";
    }
    cout << endl;
}

int main() {
    fastio

    sieve();

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}