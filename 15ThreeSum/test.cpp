#include <iostream>
using namespace std;

int main() {
  for (int i = 0; i < 10; i++) {
    if (i == 4) {
      break;
    }
    cout << i << "\n";
    for (int j = 0; j < 5; j++) {
      cout << "printed j " << j  << " times"<< "\n";
    }
  } 
  return 0;
}

