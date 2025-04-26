#include <iostream>
#include <vector>

class Solution {
public:
  std::vector<int> productExceptSelf(std::vector<int> &nums) {
    int n = nums.size();
    std::vector<int> result(n);
    std::vector<int> prefix(n);
    std::vector<int> postfix(n);

    // nums = {1,2,3,4}
    // expected prefix = {1, 1, 2, 6}
    // expected postfix = {24, 12, 4, 1}

    prefix[0] = 1;
    postfix[n - 1] = 1;

    for (int i = 1; i < n; i++)
      prefix[i] = prefix[i - 1] * nums[i - 1];
    for (int i = n - 2; i >= 0; i--) {
      postfix[i] = postfix[i + 1] * nums[i + 1];
    }

    for (int i = 0; i < n; i++) {
      result[i] = postfix[i] * prefix[i];
    }
    // NOTE: DISPLAYING ALL VECTORS
    // do not use these lines below to submit the code.
    // The print statements will slow down the speed.
    for (auto i : prefix)
      std::cout << i << " ";

    std::cout << "\n\n";

    for (auto i : postfix)
      std::cout << i << " ";

    std::cout << "\n\n";

    for (auto i : result)
      std::cout << i << " ";
    return result;
  }
};

int main() {
  std::cout << "Running code\n";
  std::vector<int> v{1, 2, 3, 4};
  Solution obj;
  obj.productExceptSelf(v);
  return 0;
}
