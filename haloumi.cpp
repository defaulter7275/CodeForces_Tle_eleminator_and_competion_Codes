// # include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int t,k;
        cin>>t>>k;
        vector<int> a(t);
        for(int i = 0; i < t; i++) cin >> a[i];
        if(k==1){
            if(is_sorted(a.begin(),a.end()))cout<<"YES"<<endl;
        
        else{
            cout<<"NO"<<endl;

        }}
        else{cout<<"YES"<<endl;}


    }
}