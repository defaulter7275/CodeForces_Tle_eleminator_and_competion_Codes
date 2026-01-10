#include <bits/stdc++.h>
using namespace std;

// operation types:
// 1. Move Up and Right
// 2. Move Left

int main()
{
    int t;
    cin >> t; // Read the number of test cases
    while (t--)
    {
        int source_x, source_y, destination_x, destination_y;

        cin >> source_x >> source_y >> destination_x >> destination_y;


        if (destination_y < source_y) // Check if destination y is below source y
        {
            cout << -1 << endl;
            continue; 
        }

        int moves = destination_y - source_y; // Calculate moves needed to match y-coordinate

        
        source_x += moves; // Update source x after moving up and right

   
        if (source_x < destination_x) 
        {
            cout << -1 << endl; 
            continue; 
        }
        moves += (source_x - destination_x);
        cout << moves << endl; 
    }
    return 0;
}

// Time Complexity (TC): O(1)
// Space Complexity (SC): O(1)