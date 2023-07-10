#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int num; 
    while (cin >> num) {
    if(num % (105) == 0) {
        cout<<3<<" "<<5<<" "<<7<<endl;
    } else if( num % 15 == 0) {
        cout<<3<<" "<<5<<endl;
    } else if( num % 21 == 0) {
        cout<<3<<" "<<7<<endl;
    } else if( num % 35 == 0) {
        cout<<5<<" "<<7<<endl;
    } else if(num % 3 == 0) {
        cout<<3<<endl;
    } else if(num % 5 == 0) {
        cout<<5<<endl;
    } else if(num % 7 == 0) {
        cout<<7<<endl;
    } else {
        cout<<'n'<<endl;
    }
        }


    return 0;
}