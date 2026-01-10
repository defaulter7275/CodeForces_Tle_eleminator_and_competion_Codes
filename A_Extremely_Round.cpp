#include<bits/stdc++.h>
using namespace std;
bool check(int x){
    int count_zeroes=0;
    int count_digit=0;
    while(x){
        if(x%10==0){
            count_zeroes++;

        }
        count_digit++;
        x/=10;
    }
    return count_zeroes==count_digit-1;
}
int main(){
    vector<int> roundnumber;
    for(int i=0;i<=999999;i++){
        if(check(i)==true){
            roundnumber.push_back(i);
        }}
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            int answer=0;
            for(int i=0;i<roundnumber.size();i++){
                if(roundnumber[i]<=n)
                answer++;
                else
                break;
            }
            cout<<answer<<endl;
        }


  return 0;  }

