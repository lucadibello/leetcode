#include "solution.h"
#include <vector>

int main() {
  Solution s;
  vector<int> seats = {3, 1, 5};
  vector<int> students = {2, 4, 7};
  int total_moves = s.minMovesToSeat(seats, students);
  cout << "Total moves: " << total_moves << endl;
}
