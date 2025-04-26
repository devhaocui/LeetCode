#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

class Solution {
public:
  // [5,1,2,3,5,1,1,222,333,1,2,3]
  int longestConsecutive(vector<int> &nums) {
    int maxValue = 0;
    std::unordered_set<int> seen(nums.begin(), nums.end());
    for (int item : seen) {
      if (seen.find(item - 1) == seen.end()) {
        int length = 1;
        while(seen.find(item + length) != seen.end())
          length++;
        if (length > maxValue)
          maxValue = length;
      }
    }
    return maxValue;
  }
};

int main() {
  std::cout << "Running code\n";
  std::vector<int> inputVector = {1, 2, 2, 3, 4};
  Solution obj;
  auto result = obj.longestConsecutive(inputVector);
  std::cout << result << "\n";
  return 0;
}
