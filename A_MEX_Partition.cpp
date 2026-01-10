#include <iostream>
#include <vector>
#include <set>
#include <algorithm>

using namespace std;

void solve() {
    int n;

    cin >> n;

    set<int> distinct_elements;
    for (int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        distinct_elements.insert(val);
    }
    int min_score = 0;
    while (distinct_elements.count(min_score)) {
        min_score++;
    }
    cout << min_score << endl;
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