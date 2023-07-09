#include <iostream>
using namespace std;

int main() {
  int n = 6;
  int arr[n];
  int tempodd = 0;
  int tempeven = 100;

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] % 2 == 0 && arr[i] < tempeven) tempeven = arr[i];
    if (arr[i] % 2 == 1 && arr[i] > tempodd) tempodd = arr[i];
  }

  int diff = tempodd - tempeven;
  if (diff < 0) diff *= -1;

  cout << diff;

  return 0;
}
