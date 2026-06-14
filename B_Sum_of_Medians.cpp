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
    int n,k;
    cin>>n>>k;
    int z=n*k;
    vi a(z);
    for(int i=0;i<z;i++){
        cin>>a[i];
    }
    ll i=z;
    ll sum=0;
    while(k--){
        i-=(n/2+1);
        sum+=a[i];
    }
    cout<<sum<<endl;
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