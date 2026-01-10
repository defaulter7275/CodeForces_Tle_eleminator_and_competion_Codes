#include <bits/stdc++.h>
using namespace std;
long long simulate(const string &s, long long x) {
    long long steps = 0;
    int n = s.size();
    int i = 0;
    while (x > 0) {
        if (s[i] == 'A') x -= 1;
        else x /= 2;
        i = (i + 1) % n;
        steps++;
    }
    return steps;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;
        string s;
        cin >> s;
   vector<long long> a(q);
        for (int i = 0; i < q; i++) cin >> a[i];
        
        for (long long x : a) {
            cout << simulate(s, x) << endl;
        }
    }
    return 0;
}
