#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
cin.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin>>n;
        // Take the maximum of four quantities: the difference between the last and first element, 
        // the largest difference between some element and the first element, 
        // the largest difference between the last element and some element, 
        // and the largest difference between consecutive elements.
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
    //    sort(a.begin(),a.end());
        int sub=a[n-1]-a[0];
        for (int i = 1; i < n; i++)
			sub = max(sub, a[i] - a[0]);
        for (int i = 0; i < n - 1; i++)
			sub = max(sub, a[n - 1] - a[i]);
        for (int i = 0; i < n - 1; i++)
			sub = max(sub, a[i] - a[i + 1]);
        cout<<sub<<endl;
    }
    return 0;
}