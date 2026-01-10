#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        int total_two = 0;
        int current_two=0;
        for(int i=0;i<n;i++){
            if(a[i]==2){
                total_two++;
            }
        }
        int ans=-1;
        for(int i=0;i<n;i++){
            if(a[i]==2){
                current_two++;

            }
            if(current_two==(total_two-current_two)){
                ans=i+1;
                break;
            }
        }
        cout<<ans<<endl;
    }
}