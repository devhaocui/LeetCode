#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> twoSum(vector<int> &numbers, int target) {
    int left = 0;
    int right = numbers.size() - 1;
    while (left < right) {
      if (numbers[left] + numbers[right] > target) {
        right--;
        continue;
      }
      else if (numbers[left] + numbers[right] < target) {
        left++;
        continue;
      }
      else
        return {left+1, right+1};
    }
    return {0};
  }
};

int main() {
  std::cout << "Running code\n";

  std::vector<int> inputVector = {2,7,11,15};
  int target = 9;
  Solution obj;
  std::vector<int> outputVector = obj.twoSum(inputVector, target);
  for (int i : outputVector)
    std::cout << i << " ";
  return 0;
}
