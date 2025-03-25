#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  string encode(vector<string> &strs) {
    string solution;

    for (string i : strs) {
      int count = i.size();
      solution += to_string(count) + "#" + i;
    }
    return solution;
  }

  // NOTE: DRAW THIS OUT IN THE IPAD TO UNDERSTAND IT BETTER
  vector<string> decode(string s) {
    vector<string> solution;
    int i{0};
    while (i < s.size()) {
      int j = i;
      while (s[j] != '#')
        j++;
      int lengthOfSubStr = stoi(s.substr(i, j - i));
      solution.push_back(s.substr(j + 1, lengthOfSubStr));
      i = j + lengthOfSubStr + 1;
    }
    return solution;
  }
};

int main() {
  std::cout << "Running code\n";

  std::vector<string> inputVector = {"neet", "code", "loves", "you"};
  // encoded is: 4#neet4#code5#loves3#you
  Solution o1;
  auto outputVector = o1.encode(inputVector);
  auto solution = o1.decode(outputVector);
  for (auto i : solution)
    cout << i << " ";
  return 0;
}
