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
    string s(n, '0');
    cin>>s;
    if(n % 2 != 0) {
        cout << "NO"<<endl;
        return;
    }
    // vector<int> freq(26, 0);

    // for(char c : s)
    //     freq[c - 'a']++;

    // for(int i = 0; i < 26; i++) {
    //     if(freq[i] % 2 != 0) {
    //         cout << "NO"<<endl;
    //         return;
    //     }
    // }

    // cout << "YES"<<endl;

     stack<char> st;

    for(char c : s) {
        if(!st.empty() && st.top() == c)
            st.pop();
        else
            st.push(c);
    }

    if(st.empty())
        cout << "YES"<<endl;
    else
        cout << "NO"<<endl;
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