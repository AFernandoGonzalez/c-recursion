#include <iostream>

using namespace std;

void rectangle(int n) {
  
  for (int i = 1; i <= n; i++) {
      for (int j = i; j <= n; j--) {
        rectangle(i - 1);
        cout << " * ";
      }
    }
    cout << endl;
  }
}

  int main() {
    rectangle(5);

    return 0;
  }