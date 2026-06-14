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
    string s;
    cin>>s;
    int count1=-1,count0=-1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='0'){
            count0++;
        }
        else{
            count1++;
        }
    }
    int minx=min(count0,count1);
    if(minx%2==0){
        cout<<"DA"<<endl;
    }
    else{
        cout<<"NET"<<endl;
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