#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> topKFrequent(vector<int> &nums, int k) {
    unordered_map<int,int> frequency;
    priority_queue<pair<int, int>> maxHeap;
    vector<int> solution;

    for (int i : nums)
      frequency[i]++;

    for (auto i : frequency)
      maxHeap.push({i.second, i.first});

    // a priority_queue (maxHeap) will order the first element first.
    // then second element and everything after that. (lexicographically)
    for (size_t i{0}; i < k; i++) {
      solution.push_back(maxHeap.top().second);
      maxHeap.pop();
    }
    return solution;
  }
};

int main() {
  std::cout << "Running code\n";

  std::vector<int> inputVector = {1,2,2,3,3,3,4,4,4,4};
  Solution o1;
  auto output = o1.topKFrequent(inputVector, 2);
  return 0;
}
