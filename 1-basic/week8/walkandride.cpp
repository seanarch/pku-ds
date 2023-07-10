#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int distance; 
    cin >> distance; 

    if(float(distance) / 1.2 < (27+23) + float(distance) / 3.0 ) cout<<"Walk"<<endl;
    else if(float(distance) / 1.2 > (27+23) + float(distance) / 3.0 ) cout<<"Bike"<<endl;
    else cout<<"All"<<endl;

    return 0;
}