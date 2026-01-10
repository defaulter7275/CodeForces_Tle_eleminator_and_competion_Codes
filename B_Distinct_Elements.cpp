#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <list>
#include <cmath>

using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<long long> b(n + 1);
    for (int i = 1; i <= n; ++i) {
        cin >> b[i];
    }

    vector<int> a(n + 1);

    vector<list<int>> buckets(n + 1);

    for (int x = 1; x <= n; ++x) {
        buckets[0].push_back(x);
    }

    for (int i = 1; i <= n; ++i) {
        long long D_i;
        int L_i; 

        if (i == 1) {
            L_i = 0; 
        } else {
            D_i = (b[i] - b[i-1]) - 1;
            L_i = (i - 1) - (int)D_i;
        }

        int x = buckets[L_i].front();
        buckets[L_i].pop_front();
        
        a[i] = x;

        buckets[i].push_back(x);
    }

    for (int i = 1; i <= n; ++i) {
        cout << a[i] << (i == n ? "" : " ");
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}