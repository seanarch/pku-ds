#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n; 
  cin >> n;
  
  int grade = 0; 

  if(n >= 95) grade = 1;
  else if(n >= 90) grade = 2; 
  else if(n >= 85) grade = 3;
  else if(n >= 80) grade = 4;
  else if(n >= 70) grade = 5;
  else if(n >= 60) grade = 6;
  else grade = 7;

  cout << grade << endl; 
  return 0;
}