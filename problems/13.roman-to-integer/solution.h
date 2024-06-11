#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

class Solution {
public:
  int romanToInt(string s) {
    unsigned short total = 0;
    unordered_map<char, unsigned short> romanToInt{
        {'I', 1},   {'V', 5},   {'X', 10},  {'L', 50},
        {'C', 100}, {'D', 500}, {'M', 1000}};

    // We cycle through each letter of the string
    // If we find a smaller value X, followed by a bigger value Y --> Y - C
    for (int i = 0; i < s.length(); i++) {
      // Get the value of the first letter
      unsigned short first = romanToInt.at(s[i]);
      // Now, if there is another letter check also its value
      if (i + 1 < s.length() && romanToInt.at(s[i + 1]) > first) {
        total += romanToInt.at(s[i + 1]) - first;
        // Skip next letter
        i++;
      } else {
        total += first;
      }
    }
    return total;
  }
};
