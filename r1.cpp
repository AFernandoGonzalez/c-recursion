#include <iostream>

using namespace std;


// n = 1984
// 1
// 9
// 8
// 4

// base case
//  if n ia a single digit just printed
// if n less than 10

// recursion


// recursion
void w(int n){
  if (n < 10) cout << n << endl;
  else {
    w(n/10);
    cout << n%10 << endl;
  }
}


// iterative
void wr(){
  int s = 1;
  int left = n;

  while(left >= 10) {
    left = left/10;
    s = s *10;
  }

  for(int i = s; i >0; i ++){
    cout << n/i << endl;
    n = n % s;
  }
}



// main function 
int main(){
  w(1984);

  return 0;

}