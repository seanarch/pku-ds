#include <iostream>
#include <iomanip> 
using namespace std;

int main() 
{
    int n;
    int median = 0;

    while(cin >> n && n != 0){
        
        int array[n]; 
        for (int i = 0; i < n; i++) {
            cin >> array[i]; 
        }

        for(int i = 0; i < n; i++) {
            for(int j = 0; j < n; j++) {
                if(array[i]<array[j]){
                    int temp; 
                    temp = array[j];
                    array[j] = array[i];
                    array[i] = temp;
                }
            }
        }

        if(n % 2 == 0) {
            median = (array[n/2] + array[n/2-1]) / 2;
        } else median = array[n/2];

        cout << median << endl;
        
    }
    return 0;
}