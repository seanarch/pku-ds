#include <iostream>
using namespace std;

int main() {
  int h, r;
  cin >> h >> r;

  float pi = 3.14159;

  int waterneeded = 20;

  int numberofcontainer = (waterneeded * 1000) / (pi * r * r * h) + 1;

  cout << numberofcontainer << endl;

  return 0;
}
