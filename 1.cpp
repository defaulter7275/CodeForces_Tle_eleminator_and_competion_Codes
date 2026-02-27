// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n = 6; // controls the size of the heart

//     // Upper part of heart
//     for (int i = n/2; i <= n; i += 2) {
//         // Left spaces
//         for (int j = 1; j < n - i; j += 2) {
//             cout << " ";
//         }
//         // Left stars
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         // Middle spaces
//         for (int j = 1; j <= n - i; j++) {
//             cout << " ";
//         }
//         // Right stars
//         for (int j = 1; j <= i; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     // Lower part of heart
//     for (int i = n; i >= 1; i--) {
//         // Leading spaces
//         for (int j = i; j < n; j++) {
//             cout << " ";
//         }
//         // Stars
//         for (int j = 1; j <= (i * 2) - 1; j++) {
//             cout << "*";
//         }
//         cout << endl;
//     }

//     return 0;
// }



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
bool adj(int x, int y) {
    if (x == y) return false;
    if (x + y == 7) return false; 
    return true;
}
void solve() {
     int n;
        cin >> n;

        vi a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        vll prev(7, INF), cur(7, INF);
        for (int x = 1; x <= 6; x++) {
            prev[x] = (a[0] == x ? 0 : 1);
        }

        for (int i = 1; i < n; i++) {
            for (int x = 1; x <= 6; x++) cur[x] = INF;

            for (int y = 1; y <= 6; y++) {
                if (prev[y] == INF) continue;
                for (int x = 1; x <= 6; x++) {
                    if (!adj(y, x)) continue;
                    long long cost = prev[y] + (a[i] == x ? 0 : 1);
                    cur[x] = min(cur[x], cost);
                }
            }
            prev = cur;
        }

        ll ans = INF;
        for (int x = 1; x <= 6; x++) {
            ans = min(ans, prev[x]);
        }

        cout << ans << '\n';
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