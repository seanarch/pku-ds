
#include <iostream>
using namespace std;

int main() {
  int n;
   
  cin >> n;
  int arr[n]; 
  int highest = 0;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if(highest < arr[i]) highest = arr[i];
  }
 
  cout << highest;

  return 0;
}