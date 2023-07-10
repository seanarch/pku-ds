#include <iostream>
using namespace std;

int main() {
  int n, x, y;
  cin >> n >> x >> y;

  int temp = (y + x - 1) / x;

  int remaining = n - temp;
  if (remaining < 0) remaining = 0;
  cout << remaining << endl;

  return 0;
}
