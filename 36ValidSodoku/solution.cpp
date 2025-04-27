#include <iostream>
#include <vector>
#include <unordered_set>
#include <string>

using namespace std;

class Solution {
public:
  // TODO:
  // 1. double for loop to iterate through each column
  // 2. double for loop to iterate through each row.
  // 3. triple for loop to iterate each 3x3 box.
  bool isValidSudoku(vector<vector<char>> &board) {
    std::unordered_set<int> mySet;
    return true;
  }
};

int main() {
  std::cout << "Running code\n";
  std::vector<std::vector<char>> board = {
      {'5', '3', '.', '.', '7', '.', '.', '.', '.'},
      {'6', '.', '.', '1', '9', '5', '.', '.', '.'},
      {'.', '9', '8', '.', '.', '.', '.', '6', '.'},
      {'8', '.', '.', '.', '6', '.', '.', '.', '3'},
      {'4', '.', '.', '8', '.', '3', '.', '.', '1'},
      {'7', '.', '.', '.', '2', '.', '.', '.', '6'},
      {'.', '6', '.', '.', '.', '.', '2', '8', '.'},
      {'.', '.', '.', '4', '1', '9', '.', '.', '5'},
      {'.', '.', '.', '.', '8', '.', '.', '7', '9'}};
  Solution obj1;
  std::string result = obj1.isValidSudoku(board) ? "true" : "false";
  std::cout << result << "\n";
  return 0;
}
