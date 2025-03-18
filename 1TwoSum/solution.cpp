#include <iostream>
#include <vector>
#include <unordered_map>
class Solution {
public:
  std::vector<int> twoSum(std::vector<int>& nums, int target) {
    int diff = 0;
    std::unordered_map<int, int> sumMap;
    for (int i{0}; i < nums.size(); i++) {
      diff = target - nums[i];
        //if is not empty then it means we found the two values that equal to target
      if (sumMap.find(diff) != sumMap.end())
        return {i, sumMap[diff]};
      else //if it is empty
        sumMap[nums[i]] = i;
    }
    return {"\0","\0"};
  }
};

int main() {
  std::cout << "Running code\n";

  std::vector<int> inputVector = {2,7,11,15};
  Solution o1;
  std::vector<int> ouputVector = o1.twoSum(inputVector, 9);
  for (int i : ouputVector) {
    std::cout << i << "\t";
  }
  return 0;
}
