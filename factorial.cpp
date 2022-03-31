#include <iostream>

using namespace std;


// factorials
// n! = n(n-1)!

// its defined by positive integers 
// 0! = 1
// 1! = 1

// Base case - 
// 0! = 1
// 1! = 1
// Recursive call - 
// n! = n(n-1)!

// recursive
int factorial(int n){
  if(n <=1){
    return 1;
  }

  return factorial(n-1)*n;
}

// iterative
int fact(int m){
  int product = 1;
  for( int i = 1; i <= m; i++){
   product *= i; 
  }
  return product;
}



int main(){
  cout << factorial(4) << endl;
  cout << fact(4) << endl;
  return 0;
}