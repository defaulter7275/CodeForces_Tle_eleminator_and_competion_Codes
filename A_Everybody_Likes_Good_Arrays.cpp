#include<bits/stdc++.h>
using namespace std;
int countoperation(vector<int> &a,int n){
    int count=0;
    for(int i=0;i<n-1;i++){
        if((a[i]%2)==(a[i+1]%2)){
            count++;

        }
    }
    return count;

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++)cin>>a[i];
        cout<<countoperation(a,n)<<endl;
        
    }
}