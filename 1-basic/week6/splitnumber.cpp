#include <iostream>
using namespace std;

int main() 
{
    int number; 
    cin>>number; 

    int h = (number/100);
    int t = ((number - (h * 100))/10); 
    int g = ((number - h * 100 - t * 10)); 

    cout<<h<<endl;
    cout<<t<<endl;
    cout<<g<<endl;

    return 0;
}