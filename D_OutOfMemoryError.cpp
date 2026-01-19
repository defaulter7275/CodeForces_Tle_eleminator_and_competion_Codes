#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        long long n,m,h;
        cin>>n>>m>>h;
        vector<long long>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }

        vector<long long> sum(n, 0);
        vector<int> last_update(n, -1); 
        int last_crash = -1;           

        for(int i=0; i<m; i++){
            long long bi,ci;
            cin>>bi>>ci;
            bi--;

            if(last_update[bi] < last_crash){
                sum[bi] = 0;
            }

            if(a[bi] + sum[bi] + ci > h){
                last_crash = i; 
            } else {
                sum[bi] += ci;
                last_update[bi] = i;
            }
        }
        
        for(int i=0; i<n; i++){
            if(last_update[i] > last_crash){
                cout << a[i] + sum[i] << (i == n-1 ? "" : " ");
            } else {
                cout << a[i] << (i == n-1 ? "" : " ");
            }
        }
        cout << "\n";
    }
    return 0;
}