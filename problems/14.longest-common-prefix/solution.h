#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Solution {
public:
  string longestCommonPrefix(vector<string> &strs) {
    // Check for empty array
    if (strs.size() == 0)
      return "";

    // Look for longest common prefix among all items of
    // the passed array
    string commonPrefix = "";
    const int length = strs[0].size();
    for (int idx = 0; idx < length; idx++) {
      bool allEqual = true;
      // Get the current letter
      char &currLetter = strs[0].at(idx);
      // Check if all other strings have the same letter
      for (int i = 1; i < strs.size(); i++) {
        // Quit when: 1) index out of bounds 2) letter different
        if (idx >= strs[i].size() || strs[i].at(idx) != currLetter) {
          allEqual = false;
        }
      }

      // If we have found a different character, abort
      if (!allEqual) {
        break;
      }

      // If all the letters are equal, we proceed to tht next letter
      commonPrefix.push_back(currLetter);
    }
    // Return the longest common prefix found
    return commonPrefix;
  };
};
