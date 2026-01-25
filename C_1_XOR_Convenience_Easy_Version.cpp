#include <bits/stdc++.h>
using namespace std;

#define quick_io ios::sync_with_stdio(false); cin.tie(nullptr);

void process_case() {
    int size;
    cin >> size;

    vector<int> arr(size + 1);

    arr[size] = 1;

    for (int k = 2; k <= size - 1; k++) {
        arr[k] = k ^ 1;
    }

    if (size % 2 == 0)
        arr[1] = size;
    else
        arr[1] = size - 1;

    for (int idx = 1; idx <= size; idx++) {
        cout << arr[idx] << (idx == size ? '\n' : ' ');
    }
}

int main() {
    quick_io;

    int total_tasks;
    cin >> total_tasks;

    while (total_tasks--) {
        process_case();
    }

    return 0;
}