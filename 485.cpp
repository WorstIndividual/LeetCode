#include <iostream>
#include <vector>
using namespace std;

int findMaxConsecutiveOnes(vector<int>& nums) {
    int count = 0;
    int maxCount = 0;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] == 1) {
            count += 1;
        } else {
            count = 0;
        }
        if (maxCount < count) {
            maxCount = count;
        }
    }
    return maxCount;
}

int main() {
    vector<int> nums = {1, 1, 0, 1, 1, 1};
    cout << findMaxConsecutiveOnes(nums) << endl;
    return 0;
}