#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n; 
    cin >> n;
    int arr[n];
   

    for(int i = 0; i < n; i++) {
        cin >> arr[n] ;

        if(float(arr[n]) / 1.2 < (27+23) + float(arr[n]) / 3.0 ) cout<<"Walk"<<endl;
        else if(float(arr[n]) / 1.2 > (27+23) + float(arr[n]) / 3.0 ) cout<<"Bike"<<endl;
        else cout<<"All"<<endl;
    }


    return 0;
}