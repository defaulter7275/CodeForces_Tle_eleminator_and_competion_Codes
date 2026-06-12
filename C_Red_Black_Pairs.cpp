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
    int n;
    cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int rw=0,rb=0;
    for (int i=0;i<n;i++) {
        if (s1[i]=='R') {
            if (i%2==0) rw++;
            else rb++;
        }
        if (s2[i]=='R') {
            if (i%2==1) rw++;
            else rb++;
        }
    }
    cout<<abs(rw-rb)<<endl;
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