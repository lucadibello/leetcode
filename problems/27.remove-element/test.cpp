#include "27-remove-element.h"
#include <iostream>
#include <vector>

using namespace std;

int main() {
  // NOTE: Problem instance settings
  vector<int> nums = {0, 1, 2, 2, 3, 0, 4, 2};
  int target = 2;
  // Execute the solver
  Solution sol;
  int out = sol.removeElement(nums, target);
  // Print out the solution
  cout << "Total number of occurences: " << out << endl;
  for (int i = 0; i < nums.size(); i++) {
    cout << nums[i] << endl;
  }
}
