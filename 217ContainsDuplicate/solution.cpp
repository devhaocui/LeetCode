#include <iostream>
#include <vector>
#include <unordered_map>

class Solution {
public:
  bool containsDuplicate(std::vector<int> &nums) {
    // <key, value>
    std::unordered_map<int, int> duplicateMap;
    for (int i : nums) {
      if (duplicateMap.find(i) != duplicateMap.end())
        return true;
      else
        duplicateMap[i++];
    }
    return false;
  }
};

int main() {
  std::vector<int> inputVector = {1, 2, 2, 3, 4};
  Solution o1;
  std::cout << o1.containsDuplicate(inputVector);
  return 0;
}
