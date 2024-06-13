#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  int minMovesToSeat(vector<int> &seats, vector<int> &students) {
    // sort both arrays
    sort(seats.begin(), seats.end());
    sort(students.begin(), students.end());

    // cycle through all elements of the array
    unsigned short tot_steps = 0;
    for (int i = 0; i < seats.size(); i++) {
      // compute the distance between the minimum element of both arrays
      // and sum the delta to the global counter
      tot_steps += abs(seats[i] - students[i]);
    }
    // print the entire array
    return tot_steps;
  };
};
