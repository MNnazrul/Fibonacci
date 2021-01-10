#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int sm = 0;
  for (int i = 2; i <= n; i++) {
    sm += i + (i-1);
  }
  cout << sm << endl;
  return 0;
}
