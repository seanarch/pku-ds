// #include <iostream>
// #include <iomanip>
// using namespace std;

// int main()
// {
//     int matrix[5][5];
//     int row1 = 0;
//     int row2 = 0; 
 
//     // enter matrix
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 5; j++) {
//             cin >> matrix[i][j];
//         }
//     }
    
//     // enter the rows that you want to swap
//     cin >> row1 >> row2;
 
//     // print matrix 
//     for (int i = 0; i < 5; i++) {
//         if(row1 > 4 || row1 < 0 || row2 > 4 || row2 < 0) {
//             cout << "error" <<endl; 
//             break;
//         } else if( row1 != row2) {

//         // swap rows
//         int temp = matrix[row1][i]; 
//         matrix[row1][i] = matrix[row2][i];
//         matrix[row2][i] = temp;
//         }
//     }
    
//     for (int i = 0; i < 5; i++) {
//         for (int j = 0; j < 5; j++) {
//             cout<< setw(4)<< matrix[i][j];
//         }
//         cout << endl; 
//     }

//     return 0;
// }

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int array[5][5];
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cin >> array[i][j];
		}
	}

	int n, m;
	cin >> n >> m;
	if (n < 0 || n > 4 || m < 0 || m > 4) {
		cout << "error" << endl;
		return 0;
	}
	else if (m != n) {
		// exchange row n and m:
		for (int i = 0; i < 5; i++) {
			int temp = array[n][i];
			array[n][i] = array[m][i];
			array[m][i] = temp;
		}
	}

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << setw(4) << array[i][j];
		}
		cout << endl;
	}

	return 0;
}