// #include <iostream>
// #include <iomanip>
// #include <math.h> 
// using namespace std;

// int main() {
//     int n = 0;
//     cin >> n;
//     double longest = 0;
//     vector<vector<double> > arr(n, vector<double>(2));

//     for(int i = 0; i < n; i++) {
//         cin >> arr[i][0] >> arr[i][1];
//     }

//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//            double distance = sqrt(pow(arr[j][0] - arr[i][0] , 2) + pow((arr[j][1] - arr[i][1]), 2)); 
//            if (distance > longest) longest = distance; 
//         }
//     }

//     cout << fixed << setprecision(4) << longest << endl;
    
//     return 0;
// }

#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    double longest = 0;
    double** arr = new double*[n];
    for (int i = 0; i < n; i++) {
        arr[i] = new double[2];
    }

    for(int i = 0; i < n; i++) {
        cin >> arr[i][0] >> arr[i][1];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
           double distance = sqrt(pow(arr[j][0] - arr[i][0], 2) + pow(arr[j][1] - arr[i][1], 2)); 
           if (distance > longest)
               longest = distance; 
        }
    }

    cout << fixed << setprecision(4) << longest << endl;

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }
    delete[] arr;

    return 0;
}