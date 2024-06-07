#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int removeElement(vector<int> &nums, int val) {
    // Quit right away if the vector is empty
    if (nums.size() == 0)
      return 0;

    int total = 0;
    int last = nums.size() - 1;
    // Cycle through the entire vector and look for val
    for (int i = 0; i < nums.size(); i++) {
      // check if we got val
      if (nums[i] == val) {
        // Yes. Now we need to find a valid index
        while (nums[last] == val && last > i) {
          last--;
        }
        // Now, ensure it is a valid index
        if (last == i)
          break;
        else {
          total++;
        }
        // Perform the swap
        nums[i] = nums[last];
        nums[last] = val;
      } else {
        total++;
      }
    }
    return total;
  };
};
