#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n; 
  cin >> n;
  
  int h1 = 0;
  int t50 = 0; 
  int t20 = 0;
  int t10 = 0;
  int g5 = 0;
  int g1 = 0; 

  while (n >= 100) {
    n -= 100; 
    h1++; 
  }

  while (n >= 50) {
    n -= 50;
    t50++; 
  }

  while (n >= 20) {
    n -= 20;
    t20++;
  }

  while (n >= 10) {
    n -= 10;
    t10++; 
  }

  while (n >= 5) {
    n -= 5;
    g5++;
  }

  while (n > 0) {
    n -= 1;
    g1++;
  } 

  cout<< h1 <<endl;
  cout<< t50 <<endl;
  cout<< t20 <<endl;
  cout<< t10 <<endl;
  cout<< g5 <<endl;
  cout<< g1 <<endl;

  return 0;
}