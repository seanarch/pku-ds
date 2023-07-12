#include <iostream>
#include <iomanip> 
using namespace std;

int main() 
{
    int n; 
    cin >>  n;
    int array[n][n];  
    int abnnumber = 0;

    // enter element and convert to 1d array 
    for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cin >> array[i][j]; 
		}
	}

    // loop through the 2d array and compare with 4 elements
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(j == 0 || i == 0 || i == n - 1 || j == n - 1) {
                continue;
            }
            if(array[i+1][j] - array[i][j] >= 50 || array[i-1][j] - array[i][j] >= 50 || array[i][j + 1] - array[i][j] >= 50 || array[i][j - 1] - array[i][j] >= 50) {
                abnnumber++;
            } 
        }  
    }

    cout << abnnumber << endl;
    return 0; 
}