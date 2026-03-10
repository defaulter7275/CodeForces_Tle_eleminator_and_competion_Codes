#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

// Optimization pragmas for speed
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

// Type definitions for convenience
using ll = long long;
using ld = long double;
using pii = pair<int, int>;
using pll = pair<ll, ll>;
using vi = vector<int>;
using vll = vector<ll>;

// Policy Based Data Structure (Ordered Set)
// order_of_key(k): number of elements strictly smaller than k
// find_by_order(k): iterator to the k-th element (0-indexed)
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

// Macros for common operations
#define fast_io ios_base::sync_with_stdio(false); cin.tie(nullptr);
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) ((int)(x).size())
#define pb push_back
#define eb emplace_back
#define fi first
#define se second
#define rep(i, a, b) for (int i = (a); i < (b); ++i)
#define per(i, a, b) for (int i = (b) - 1; i >= (a); --i)
#define endl '\n'

// Constants
const int MOD = 1e9 + 7;
const ll INF = 1e18;
const ld PI = acos(-1.0);

void solve() {
    // Your solution code here
    
}

int main() {
    fast_io;
    // Precision for floating point output
    cout << fixed << setprecision(10);
    
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}