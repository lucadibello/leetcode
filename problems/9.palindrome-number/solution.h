class Solution {
public:
  bool isPalindrome(int x) {
    // If the number is negative, then it will for sure not be a valid
    // palindrome
    if (x < 0)
      return false;
    else {
      int original = x;
      long reversed = 0;
      while (x != 0) {
        // Extract the least significant digit from number
        int digit = x % 10;
        // Now, update reversed by adding the digit
        reversed = reversed * 10 + digit;
        // Now, proceed to next value
        // NOTE: as we are working using integers, we do not need to mind the
        // floating point
        x /= 10;
      }
      return original == reversed;
    }
  }
};
