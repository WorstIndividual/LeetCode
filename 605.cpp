#include <bits/stdc++.h>
using namespace std;

bool canPlaceFlowers(vector<int>& flowerbed, int n);

int main () {
  // input: flowerbed = [1, 0, 0, 0, 1], n = 1
  vector<int> flowerbed = {1, 0, 0, 0, 1};
  int n = 1;

  cout << canPlaceFlowers(flowerbed, n) << endl;
  return 0;
}

bool canPlaceFlowers(vector<int>& flowerbed, int n) {
  if (n == 0) return true;
  for (int i = 0; i < flowerbed.size(); i++) {
    if (flowerbed[i] == 0) {
      bool emptyLeft = (i == 0) || (flowerbed[i - 1] == 0);
      bool emptyRight = (i == flowerbed.size() - 1) || (flowerbed[i + 1] == 0);
      if (emptyLeft && emptyRight) {
        flowerbed[i] = 1;
        n -= 1;
        if (n <= 0) {
          return true;
        }
      }
    }
  }
  return false;
}