#include "solution.h"

using namespace std;

int main() {
  // NOTE: Problem instance settings
  vector<string> strings = {"flower", "flow", "flight"};
  /* vector<string> strings = {""}; */
  int target = 2;
  // Execute the solver
  Solution sol;
  string lcp = sol.longestCommonPrefix(strings);
  // Print the result
  cout << "Longest common prefix: " << lcp << endl;
}
