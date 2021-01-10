#include <iostream>

using namespace std;
/* if you want to implement recursive fibo then just uncomment the comment lines below */

// int fib (int n) {
//   return fibo(n-1) + fibo (n-2);
// }


int main() {
  
  int n; cin >> n; // don't comment this line in any situation... keep that free from comment ..
  
  int sm = 0;
  for (int i = 2; i <= n; i++) {
    sm += i + (i-1);
  }
  cout << sm << endl;
  
  /* If you want recusice fibo then just comment the upper codes and uncomment the below codes */
//   cout << fibo(n) << endl; 
  return 0;
}
