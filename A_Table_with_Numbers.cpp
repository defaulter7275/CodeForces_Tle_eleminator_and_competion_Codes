#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    if (cin >> t) {
        while (t--) {
                int n, h, l;
    cin >> n >> h >> l;
    int cntB = 0; 
    int cntR = 0; 
    int cntC = 0; 

    for (int i = 0; i < n; ++i) {
        int v;
        cin >> v;
        bool fitRow = (v <= h);
        bool fitCol = (v <= l);

        if (fitRow && fitCol) {
            cntB++;
        } else if (fitRow) {
            cntR++;
        } else if (fitCol) {
            cntC++;
        }
    }
int ans = min(cntR, cntC);
    int remSpecific = (cntR + cntC) - (2 * ans);
    int useBoth = min(remSpecific, cntB);
    ans += useBoth;
    cntB -= useBoth;
    ans += cntB / 2;
    cout << ans << endl;
        }
    }
    return 0;
}