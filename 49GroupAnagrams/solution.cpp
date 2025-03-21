#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Solution {
public:
  vector<vector<string>> groupAnagrams(vector<string>& strs) {
    unordered_map<string, vector<string>> uSolution;
    vector<vector<string>> answer;
    for (int i{0}; i < strs.size(); i++) {
      string sortedStr = strs[i];
      sort(sortedStr.begin(), sortedStr.end());
      uSolution[sortedStr].push_back(strs[i]);
    }

    //convert back to return type format
    for (auto i : uSolution) // i is a pair <key, vector<vector>>
      answer.push_back(i.second);
    return answer;
    }
};

int main() {
  cout << "Running code\n";
  vector<string> inputVector = {"cat", "bat", "ate", "we", "what"};
  Solution o1;
  auto solution = o1.groupAnagrams(inputVector);
  return 0;
}
