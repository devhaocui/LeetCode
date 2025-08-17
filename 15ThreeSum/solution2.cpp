#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>

//using namespace std;

class Solution {
public:
  std::vector<std::vector<int>> threeSum(std::vector<int> &nums) {
    std::vector<std::vector<int>> result;
    std::unordered_map<std::string, int> tempMap;
    for (int first {0}; first < nums.size(); first++) {
      int second = first + 1;
      int third = second + 1;
      if (nums[first] == nums[second])
        continue;
      while (second < third && third < nums.size()) {
        int sum = nums[first] + nums[second] + nums[third];
        if (nums[second] == nums[third]) {
          second++;
          third++;
        }
        if (sum == 0) {
          std::vector<int> temp {nums[first], nums[second],nums[third]};
          std::sort(temp.begin(), temp.end());
          std::string tempString = std::to_string(temp[0]) + std::to_string(temp[1]) + std::to_string(temp[2]);
          if (tempMap.find(tempString) == tempMap.end()) {
            result.push_back(temp);
            tempMap[tempString]++;
          }
          third++;
          continue;
        }
        if (second + 1 < third) {
          second++;
          continue;
        }
        else {
          third++;
          continue;
        }
      }
    }
    return result;
  }
};

int main() {
  std::cout << "Running code\n";

  std::vector<int> inputVector = {-1, 0, 1, 2, -1, -4};
  Solution obj;
  auto output = obj.threeSum(inputVector);
  for (auto triplet : output) {
    for (auto value : triplet)
      std::cout << value << " ";
    std::cout << "\n";
  }

  return 0;
}
