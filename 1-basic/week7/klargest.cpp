#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n; 
  int k;
  cin >> n;
  cin >> k;
  int arr[n]; 

  for (int i = 0; i < n; i++) 
  {
    cin >> arr[i];  
  }  


  for (int i = 0; i < n - 1; ++i) 
  {
        for (int j = i + 1; j < n; ++j) 
        {
            if (arr[i] > arr[j]) 
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
  }

  cout << arr[n-k] << endl;



  return 0;
}