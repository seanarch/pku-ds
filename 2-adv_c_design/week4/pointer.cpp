#include <iostream>
#include <iomanip> 
using namespace std;

int main() {    
    // use & to show address 
    // 0x16fadaefc
    int c = 76; 

    // variable to save address of c
    int *pointer; 
    pointer = &c;     
    // to access c via address pointer 


    cout << &c << endl;
    // sizeof 
    // 4/8...
    cout << sizeof(&c) << endl;
    // *&c
    // 76 
    cout << *&c << endl; 
    pointer++;
    cout << pointer<< endl; 

    // example  

    // int iCount = 18;
    // int *iPtr = &iCount; 
    // *iPtr = 58; 

    // cout << iCount << endl;
    // cout << iPtr << endl;
    // cout << &iCount << endl;
    // cout << *iPtr << endl;
    // cout << iPtr++ << endl; 
    // cout << &iPtr << endl;
    // cout << sizeof(&iPtr) << endl;

    // int a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23}; 
    // int *p;
    // for(p = &a[0][0]; p<&a[0][0]; p++) {
    //     cout << p << " " << *p << endl;
    // }

    int a[3][4] = {1,3,5,7,9,11,13,15,17,19,21,23}; 
    int(*p)[4], i, j; 
    p = a;
    cin >> i >> j; 
    cout << setw(4) << p[i][j];


    return 0;

}