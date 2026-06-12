// // # include <bits/stdc++.h>
// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     while(n--){
//         int t,k;
//         cin>>t>>k;
//         vector<int> a(t);
//         for(int i = 0; i < t; i++) cin >> a[i];
//         if(k==1){
//             if(is_sorted(a.begin(),a.end()))cout<<"YES"<<endl;
        
//         else{
//             cout<<"NO"<<endl;

//         }}
//         else{cout<<"YES"<<endl;}


//    } return 0;}
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
    cin >> n >> k;
    vi a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    vi a_copy=a;
    sort(all(a_copy));
    if(a==a_copy||k>1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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