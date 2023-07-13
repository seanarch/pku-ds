// #include <iostream>
// #include <iomanip> 
// using namespace std;

// int main() 
// {
//     int n;
//     while(cin >> n ) {
//             int* array = new int[n];
//             bool equals = false; 
//             int element; 

//             for(int i = 0; i < n; i++){
//                 cin>> array[i];

//                 if(array[i] == i) {
//                     cout << i << endl;
//                     equals = true;
//                     break;
//                 }  
//             }

//             delete[] array;

//             if (!equals) cout << "N" << endl; 
//     }
  
//     return 0;
// }

#include <iostream>
#include <iomanip> 
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int* array = new int[n];
    bool equals = false; 
    int element; 

    for(int i = 0; i < n; i++){
        cin >> array[i];

        if(array[i] == i) {
            cout << i << endl;
            equals = true;
            break;
        }  
    }

    delete[] array;

    if (!equals) cout << "N" << endl; 
 
  
    return 0;
}