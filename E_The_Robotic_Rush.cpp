#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;
    while (testCases--) {
        int numElements, numBarriers, codeLength;
        cin >> numElements >> numBarriers >> codeLength;

        vector<long long> elements(numElements), barriers(numBarriers);
        for (int i = 0; i < numElements; i++) cin >> elements[i];
        for (int i = 0; i < numBarriers; i++) cin >> barriers[i];
        
        sort(barriers.begin(), barriers.end());

        string movementCode;
        cin >> movementCode;

        vector<int> timeToReachRight(codeLength + 2, 0);
        vector<int> timeToReachLeft(codeLength + 2, 0);
        
        int currentPos = 0, maxRight = 0, maxLeft = 0;
        for (int i = 1; i <= codeLength; i++) {
            currentPos += (movementCode[i - 1] == 'R') ? 1 : -1;
            
            if (currentPos > maxRight) {
                maxRight = currentPos;
                timeToReachRight[maxRight] = i;
            }
            if (currentPos < maxLeft) {
                maxLeft = currentPos;
                timeToReachLeft[-maxLeft] = i;
            }
        }

        vector<int> deathCountAtTime(codeLength + 2, 0);
        const int INF = 1e9;

        for (int i = 0; i < numElements; i++) {
            long long pos = elements[i];
            int earliestDeath = INF;

            auto upperBarrier = lower_bound(barriers.begin(), barriers.end(), pos);

            if (upperBarrier != barriers.end()) {
                long long dist = *upperBarrier - pos;
                if (dist > 0 && dist <= maxRight) {
                    earliestDeath = min(earliestDeath, timeToReachRight[(int)dist]);
                }
            }
            
            if (upperBarrier != barriers.begin()) {
                auto lowerBarrier = prev(upperBarrier);
                long long dist = pos - *lowerBarrier;
                if (dist > 0 && dist <= -maxLeft) {
                    earliestDeath = min(earliestDeath, timeToReachLeft[(int)dist]);
                }
            }

            if (earliestDeath != INF) {
                deathCountAtTime[earliestDeath]++;
            }
        }

        int totalDead = 0;
        for (int i = 1; i <= codeLength; i++) {
            totalDead += deathCountAtTime[i];
            cout << (numElements - totalDead) << (i == codeLength ? '\n' : ' ');
        }
    }
    return 0;
}