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

const int MOD = 998244353;
const ll INF = 1e18;

ll zeros(ll n) {
    if(n<0)return 0;
    return 1+(n+1)/4;
}

ll ones(ll n) {
    if(n<0)return 0;
    return(n+3)/4;
}

void solve() {
    ll n,x;
    cin>>n>>x;
    ll lzeros=zeros(x-1)%MOD,lones=ones(x-1)%MOD;
    ll rzeros=(zeros(n)-zeros(x-1))%MOD,rones=(ones(n)-ones(x-1))%MOD;
    ll totalzeros=(lzeros*rzeros)%MOD;
    ll totalones=(lones*rones)%MOD;
    ll ans=(totalzeros+totalones)%MOD;
    cout<<ans<<endl;
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