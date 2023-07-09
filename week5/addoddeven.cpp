#include <iostream>
using namespace std; 

int main() 
{
    int m;
    int n;
    cin>>m>>n; 

    bool mIsOdd = m % 2 == 1;
    bool nIsOdd = n % 2 == 1; 
    int total = 0;
    if(mIsOdd && nIsOdd) {
        
        for(int i = m; i <= n; i+=2) {
             total += i;
        }
        cout<< total << endl;
    } else if (mIsOdd && !nIsOdd){
        for(int i = m; i <= n - 1; i+=2) {
             total += i;
        }
        cout<< total << endl;
    } else if (!mIsOdd && nIsOdd) {
        for(int i = m + 1; i <= n; i+=2) {
             total += i;
        }
        cout<< total << endl;
    } else {
        for(int i = m + 1; i <= n - 1; i+=2) {
             total += i;
        }
        cout<< total << endl;
    }
    return 0;
}