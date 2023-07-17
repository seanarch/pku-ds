#include <iostream>
using namespace std;
int n;
int infect(int& days, char (&array)[n]) {
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(array[i][j] == '@') {

            }
        }
    }
}


int main() {
    int infectedNumber; 
    cin >> n; 
    char array[n][n]; 

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> array[i][j]; 
        }
    }

    int days; 
    cin >> days; 

    infectedNumber = infect(days, array); 

    cout << infectedNumber;
    return 0;
}