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
    ll a, b, x;
    cin>>a>>b>>x; 
    vll main1;
    ll curr_a=a;
    while(true) {
        main1.push_back(curr_a);
        if (curr_a==0)break;
        curr_a/=x;
    }
    vll main2;
    ll curr_b=b;
    while(true) {
        main2.push_back(curr_b);
        if (curr_b==0)break;
        curr_b/=x;
    }
    ll ans=INT_MAX;
    for (int i=0;i<main1.size();++i) {
        for (int j=0;j<main2.size();++j) {
            ll moves=i+j+abs(main1[i]-main2[j]);
            ans =min(ans,moves);
        }
    }
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