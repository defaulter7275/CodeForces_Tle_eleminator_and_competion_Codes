#include <iostream>
#include <vector>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int count = 0, maximum = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 0) {
                count++;
                maximum = max(maximum, count); 
            } else {
                count = 0; 
            }
        }

        cout << maximum << endl;  
    }
    return 0;
}
