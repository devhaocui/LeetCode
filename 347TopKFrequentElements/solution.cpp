#include <iostream>
#include <map>
#include <unordered_map>
#include <vector>

using namespace std;

class Solution {
public:
  vector<int> topKFrequent(vector<int> &nums, int k) {
    unordered_map<int, int> frequency;
    multimap<int, int> solutionSet;
    vector<int> solution;
    for (int numbers : nums)
      frequency[numbers]++;


    for (auto mpair : frequency) {
      auto key = mpair.first;
      auto value = mpair.second;
      solutionSet.insert({value, key});
    }

    // reverse iterators are pointers, so (i.second) won't work here because i is an pointer to something
    // but i->second works because it is accesing the thing that i points to, which i is pointing to a pair<int, int>
    int j{0};
    for (auto i = solutionSet.rbegin(); i != solutionSet.rend() && j < k; i++) {
      solution.push_back(i->second);
      j++;
    }
    return {solution};
  }
};

int main() {
  std::cout << "Running code\n";

  std::vector<int> inputVector = {1,2,2,3,3,3,4,4,4,4};
  Solution o1;
  auto output = o1.topKFrequent(inputVector, 2);
  for (auto i : output) {
    cout << i << " ";
  }
  return 0;
}
