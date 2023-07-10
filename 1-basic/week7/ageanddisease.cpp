#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int n; 
  cin >> n;
  int arr[n]; 

  int ageBelow18 = 0;
  int ageBelow35 = 0;
  int ageBelow60 = 0;
  int ageOver60 = 0;
 
  for (int i = 0; i < n; i++) {
    cin >> arr[i]; 

    if(arr[i] <= 18) ageBelow18++;
    else if (arr[i]>= 19 && arr[i] <= 35) ageBelow35++;
    else if (arr[i]>= 36 && arr[i] <= 60) ageBelow60++;
    else ageOver60++; 

  }

  cout << fixed<<setprecision(2);
  cout << "1-18: " << (float(ageBelow18) / n) *100 <<"%" << endl; 
  cout << "19-35: " << (float(ageBelow35)  / n )*100 <<"%"<<endl ; 
  cout << "36-60: " << (float(ageBelow60) / n)*100 <<"%" <<endl; 
  cout << "60-: " << (float(ageOver60) / n)*100 <<"%" <<endl; 

  return 0;
}