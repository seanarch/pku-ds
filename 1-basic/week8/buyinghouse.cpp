#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n; 
  int k;
  cin>>n>>k;

  int year = 0;
  float remaining = 200 * (1 + float(k/100)) - n; 

  

  if(year > 20) cout << "impossible" << endl; 
  else cout << year << endl;

  return 0;
}