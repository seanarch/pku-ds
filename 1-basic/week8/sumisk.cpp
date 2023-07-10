#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n; 
  int k;
  int arr[n]; 
  bool equals = false;
  cin>>k>>n;

  for (int i = 0; i < n; i++) 
  {
    cin >> arr[i];  
  }

  for(int i = 0; i < n - 1; i++)
  {
    for(int j = 1; j< n; j++ )
    {
        if(arr[i] + arr[j] != k) continue; 
        else{equals=true; break;}
    }
  }

  if(!equals) cout<<"no"<<endl; 
  else cout<<"yes"<<endl;
  return 0;
}