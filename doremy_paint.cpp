#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
         if (n == 2) {
            cout << "Yes"<<endl;
            continue;
        }
map<int,int>mp;
for(int x:a)mp[x]++;
if (mp.size() == 1) {
            cout << "Yes"<<endl;
        }
        else if (mp.size() == 2) {
            int c1 = begin(mp)->second;
            int c2 = rbegin(mp)->second;
             if (max(c1, c2) <= (n + 1) / 2) cout << "Yes"<<endl;
            else cout << "No"<<endl;
        }
        else {
            cout << "No"<<endl;
        }

    }
}