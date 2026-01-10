#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        long long total = 0;
        for (int i = 0; i < n - 1; i++) {
            total += abs(a[i] - a[i + 1]);
        }
        long long maxSaving = 0;
        for (int i = 1; i < n - 1; i++) {
            long long saving =
                abs(a[i] - a[i - 1]) +
                abs(a[i] - a[i + 1]) -
                abs(a[i - 1] - a[i + 1]);

            maxSaving = max(maxSaving, saving);
        }
        maxSaving = max(maxSaving, (long long)abs(a[0] - a[1]));
        maxSaving = max(maxSaving, (long long)abs(a[n - 2] - a[n - 1]));

        cout << total - maxSaving << "\n";
    }
    return 0;


    }