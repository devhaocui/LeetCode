#include <cfloat>
#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<int> productExceptSelf(std::vector<int> &nums) {
    int n = nums.size();
    std::vector<int> result(n);

    // nums = {1,2,3,4}
    // expected prefix = {1, 1, 2, 6}
    // expected postfix = {24, 12, 4, 1}

    result[0] = 1;
    for (int i = 1; i < n; i++)
      result[i] = result[i-1] * nums[i-1];

    int postfix = 1;
    for (int i = n - 1; i >= 0; i--) {
      result[i] *= postfix;
      postfix *= nums[i];
      // the two lines above are equivalent to...
      // result[i] = result[i] * postfix;
      // postfix = postfix * nums[i];
    }
    return result;
  }
};

int main() {
  std::cout << "Running code\n";
  std::vector<int> v{1, 2, 3, 4};
  Solution obj;
  auto output = obj.productExceptSelf(v);
  for (auto i : output)
    std::cout << i << " ";
  return 0;
}
