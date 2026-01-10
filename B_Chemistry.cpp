#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;

    while (tc--) {
        int n, k;
        cin >> n >> k;

        string s;
        cin >> s;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        int cnt=0;
        for(auto it:mp){
            if(it.second%2==1){
                cnt++;
            }

        }
        if(cnt>k+1){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"Yes"<<endl;
        }
    }

    return 0;
}
