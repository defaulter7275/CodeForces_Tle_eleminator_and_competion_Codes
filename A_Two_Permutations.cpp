#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
      int n,a,b;
      cin>>n>>a>>b;
if (a + b + 2 <= n || (a == b && a == n)) // 1
            cout << "Yes" << endl; // Output "Yes" if the permutations can be formed
        else
            cout << "No" << endl; // Output "No" if the permutations cannot be formed
    }
    return 0;
}

