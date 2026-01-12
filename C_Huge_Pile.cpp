#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;

    if(n==k){
        cout<<0<<"\n";
        return;
    }

    if(n<k){
        cout<<-1<<"\n";
        return;
    }

    vector<int> cu;
    cu.push_back(n);
    int steps=0;

    while(!cu.empty()){
        steps++;
        vector<int> next;

        for(int x:cu){
            int a=x/2;
            int b=(x+1)/2;

            if(a==k||b==k){
                cout<<steps<<"\n";
                return;
            }

            if(a>k) next.push_back(a);
            if(b>k) next.push_back(b);
        }

        sort(next.begin(),next.end());
        next.erase(unique(next.begin(),next.end()),next.end());
        cu.swap(next);
    }

    cout<<-1<<"\n";
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}