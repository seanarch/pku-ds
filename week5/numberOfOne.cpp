#include <iostream>
using namespace std; 

// int main()
// {
//     int length;
//     cin>>length; 
//     int a[length]; 

//     for(int i=0; i<length; i++)
//     {
//         cin>>a[i];
//     }

//     for(int i=0; i<length; i++) 
//     {
//     int count1 = 0;
//     for(int j = 10000; j >= 0; j--){
//         if((a[i] - pow(2, j)) >= 0) {
//             count1++;
//             a[i] = a[i] - pow(2, j);
//         }  
//     }
//     cout<<count1<<endl;
//     }

//     return 0;
// }

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x, ans = 0;
        cin >> x;
        while (x > 0) {
            ans += x % 2;
            x /= 2;
        }
        cout << ans << endl;
    }
    return 0;
}