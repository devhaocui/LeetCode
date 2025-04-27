#include <cctype>
#include <iostream>
#include <string>

using namespace std;

class Solution {
public:
  bool isPalindrome(string s) {
    string newString = "";
    for (int i = 0; i < s.size(); i++) {
      if (!isalnum(s[i]))
        continue;
      else
        newString += tolower(s[i]);
    }

    int begin = 0;
    int end = newString.size() - 1;
    std::cout << "newstring = " << newString << "\n";
    while (begin < end) {
      std::cout << "comparing: " << newString[begin] << " = " << newString[end] << "\n";
      if (newString[begin] == newString[end]) {
        begin++;
        end--;
      }
      else
        return false;
    }
    return true;
  }
};

int main() {
  std::cout << "Running code\n";

  string input = {"A man, a plan, a canal: Panama"};
  Solution obj;
  std::cout << ((obj.isPalindrome(input) == 1) ? "true" : "false");
  return 0;
}
