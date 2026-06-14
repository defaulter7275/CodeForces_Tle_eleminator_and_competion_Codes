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
    vi a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    if(n<3){
        cout<<"NO"<<endl;
    }
    else{
        int flag=0;
        for(int j=1;j<n-1;j++){
            int i=-1;
            int k=-1;
            for(int left=0;left<j;left++){
                if(a[left]<a[j]){
                    i=left;
                    break;
                }
            }
            for(int right=n-1;right>j;right--){
                if(a[right]<a[j]){
                    k=right;
                    break;
                }
            }
            if(i!=-1 && k!=-1){
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"NO"<<endl;
        }
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