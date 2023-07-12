#include <iostream>
#include <iomanip> 
using namespace std;

void move(int arr[], int n, int m) {
    for (int i = 0; i < m; i++) {
        int temp = arr[n - 1];
        for (int j = n - 1; j > 0; j--)
            arr[j] = arr[j - 1];
        arr[0] = temp;
    }
}

int main() {
    int n, m;
     
    cin >> n >> m;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
     
     
    move(arr, n, m);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}