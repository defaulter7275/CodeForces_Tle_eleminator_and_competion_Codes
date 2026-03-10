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

int minops(string n,string x){
    int ops=0;
    int check=x.size()-1;
    for(int i=n.size()-1;i>=0;i--){
        if(n[i]==x[check]){
            check--;
            if(check<0)break;
        }
        else
            ops++;
    }
    if(check>=0){
            ops=INT_MAX;
        }
        return ops;
}

void solve() {
    string n;
    cin >> n;
    vector<string> possible={"00","25","50","75"};
    int ans=INT_MAX;
    for(auto x:possible){
        ans=min(ans,minops(n,x));
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