#include<bits/stdc++.h>
using namespace std;

int maximumWealth(vector<vector<int>>& accounts);

int main(){
  // input: accounts = [[1, 2, 3], [3, 2, 1]]
  vector<vector<int>> accounts = {{1, 2, 3}, {3, 2, 1}};
  
  cout << maximumWealth(accounts) << endl;
  return 0;
}

int maximumWealth(vector<vector<int>>& accounts) {
  int maxWealth = 0;
  for (int i = 0; i < accounts.size(); i++) {
      int wealth = 0;
      for (int j = 0; j < accounts[i].size(); j++) {
          wealth += accounts[i][j];
      }
      maxWealth = max(wealth, maxWealth);
  }
  return maxWealth;
}