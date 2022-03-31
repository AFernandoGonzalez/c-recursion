#include <iostream>

using namespace std;

// int firstDigit(int n){
//   while(n > 10 ){
//     n = n/10;
//     return n;
//   }
// }

// Recursive
int firstDigit(int n){
  if(n <10) return n
  else return firsDigit(n/10)
}

int main() {
  int n = 19683;

  // firstDigit(n);
  cout << firstDigit(n) << endl;


  return 0;
  
}