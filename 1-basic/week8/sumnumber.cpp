#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int arr[6]; 
    int sum = 0;
    for (int i = 0; i < 6; i++) 
    {
        cin >> arr[i];  
        
        if(i>0 && arr[i] < arr[0]) sum+=arr[i];
    }  
    
    cout<<sum<<endl;

    return 0;
}