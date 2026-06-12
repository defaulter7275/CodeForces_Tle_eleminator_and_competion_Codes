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
    ll x,y;
    cin>>x>>y;
    if(x>y&&y%x!=0)cout<<"NO"<<endl;
    // for (ll i = x; i <= y; i++) {
    //     if (i > x && i < y && i % x == 0 && y % i != 0) {
    //         cout << "YES" << endl;
    //         return;
    //     }
    // }
    // cout << "NO" << endl;

    // tle aaraha tha

    
    if(y==2LL*x) {
        cout<<"NO"<<endl;
    } else{
        cout<<"YES"<<endl;
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