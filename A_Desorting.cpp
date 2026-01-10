#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int ans = INT_MAX;
        bool notSorted = false;

        for (int i = 0; i < n - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                notSorted = true;
                break;
            }
            int diff = abs(a[i] - a[i + 1]);
            ans = min(ans, diff / 2 + 1);
        }
        if (notSorted)
            cout << 0 << endl;
        else
            cout << ans << endl;
    }
}