#include <bits/stdc++.h>
using namespace std;

struct MatchNode {
    int xorSum;
    int winnerSide;
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int testCases;
    cin >> testCases;
    while (testCases--) {
        int power, totalQueries;
        cin >> power >> totalQueries;
        int numPlayers = 1 << power;

        vector<int> ratings(numPlayers);
        for (int i = 0; i < numPlayers; i++) cin >> ratings[i];

        vector<MatchNode> tournamentTree(2 * numPlayers);
        for (int i = 0; i < numPlayers; i++) {
            tournamentTree[numPlayers + i] = {ratings[i], 0};
        }

        for (int i = numPlayers - 1; i >= 1; i--) {
            int leftChild = i << 1;
            int rightChild = i << 1 | 1;
            tournamentTree[i].xorSum = tournamentTree[leftChild].xorSum ^ tournamentTree[rightChild].xorSum;
            tournamentTree[i].winnerSide = (tournamentTree[leftChild].xorSum >= tournamentTree[rightChild].xorSum ? 0 : 1);
        }

        while (totalQueries--) {
            int playerIdx, newRating;
            cin >> playerIdx >> newRating;
            --playerIdx;

            int nodeIdx = numPlayers + playerIdx;
            int currentXor = newRating;
            long long finalRank = 0;
            long long groupSize = 1;

            int tempIdx = nodeIdx;
            while (tempIdx > 1) {
                int siblingIdx = tempIdx ^ 1;
                int parentIdx = tempIdx >> 1;
                
                int leftXor, rightXor;
                int mySide = tempIdx & 1;

                if (mySide == 0) { 
                    leftXor = currentXor;
                    rightXor = tournamentTree[siblingIdx].xorSum;
                } else { 
                    leftXor = tournamentTree[siblingIdx].xorSum;
                    rightXor = currentXor;
                }

                int predictedWinner = (leftXor >= rightXor ? 0 : 1);
                
                if (predictedWinner == mySide) {
                    finalRank += groupSize;
                }

                currentXor = leftXor ^ rightXor;
                tempIdx = parentIdx;
                groupSize <<= 1;
            }

            cout << (numPlayers - 1 - finalRank) << "\n";
        }
    }
    return 0;
}