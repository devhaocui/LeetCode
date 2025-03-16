#include <iostream>

class Solution {
public:
  bool isAnagram(std::string s, std::string t) {
    if (s.size() != t.size()) return false;

    std::array<int,26> stringS;
    //std::array<int,26> stringT;
    std::array<int,26> stringT;

    std::fill(std::begin(stringS), std::end(stringS), 0);
    std::fill(std::begin(stringT), std::end(stringT), 0);
    for (int i = 0; i < s.size(); i++)
      stringS[s[i] - 'a']++;

    for (int i = 0; i < t.size(); i++)
      stringT[t[i] - 'a']++;

    for (int i = 0; i < 26; i++) {
      std::cout << stringS[i] << " <=> " << stringT[i] << "\n";
      if (stringS[i] != stringT[i]) {
        return false;
      }
    }

    return true;
  }
};

int main() {
  std::cout << "Running code\n";
//  std::cout << 'b' - 97;

  std::string s = "ggii";
  std::string t = "eekk";
  Solution o1;
  std::cout << o1.isAnagram(s, t);
  return 0;
}
