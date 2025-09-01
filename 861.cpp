#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;  // size of the matrix
    vector<vector<int>> grid(n, vector<int>(m));

    // Read matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }
    }

    Solution sol;
    int ans = sol.matrixScore(grid);

    cout << ans << "\n";

    return 0;
}

class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {

    }
};