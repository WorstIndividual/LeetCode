#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
  int maximumWealth(vector<vector<int>>& accounts) {
    int maxWealth = 0 ;
    for (int i=0; i<accounts.size(); i++){
            int wealth = 0 ;
            for (int j=0; j<accounts[i].size(); j++){
                wealth += accounts[i][j] ;
              }
            maxWealth = max(wealth, maxWealth) ;
        }
        return maxWealth ;
    }
};
int main(){
  int m, n;
    cin >> m >> n; // m = number of customers, n = number of banks

    vector<vector<int>> accounts(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> accounts[i][j];
        }
    }

    Solution sol;
    cout << sol.maximumWealth(accounts) << "\n";

    return 0;
}
