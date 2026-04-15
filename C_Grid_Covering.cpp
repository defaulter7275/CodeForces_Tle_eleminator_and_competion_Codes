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

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}
void solve() {
    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    if (gcd(n,a)==1&&gcd(m,b)==1&&gcd(n,m)<=2) {
        cout<<"YES"<<endl;
    } else {
        cout << "NO" << endl;
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