#include <iostream>

int increaseX(int &a) {
  return a = a + 1;
}

int main () {
  int x = 0;
  std::cout << "test1\n";
  increaseX(x);
  std::cout << "test2\n";
  std::cout << "test3\n";
  increaseX(x);
  std::cout << "test4\n";
  std::cout << "test5\n";
  increaseX(x);
  std::cout << "test6\n";
  std::cout << "x is now = " << x;
  std::cout << "test7\n";
  std::cout << "test8\n";
  std::cout << "test9\n";
  return 0;
}
