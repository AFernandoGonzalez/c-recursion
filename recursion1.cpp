#include <iostream>

using namespace std;

void rectangle(int n) {
  
  for (int i = 1; i <= n; i++) {
    // cout << "0";
      for (int j = 1; j <= n; j++) {
        // rectangle(n);
        cout << " *  * ";
      }
    cout << endl;
    }
}

  int main() {
    rectangle(5);

    return 0;
  }