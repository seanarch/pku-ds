#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double n, k;
  double price = 200;

  while(cin>>n>>k)
  {
    for(int m= 1; m <= 20; m++) {
       
      if(price <= n*m ) {
        cout << m << endl; 
        m = 1;
        break;
      } else if(n * m < price && m == 20){
        cout<<"Impossible"<<endl; 
      }
      price += price * k/100;
    } 
    price = 200;
  }
  
  return 0;
}