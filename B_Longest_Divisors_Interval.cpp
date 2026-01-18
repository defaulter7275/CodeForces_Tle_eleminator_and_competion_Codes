#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        long long i=1;
        while(true){
            if(n%i==0){
                i++;
            }
            else{
                break;
            }
        }
    cout<<i-1<<endl;}
    return 0;
}