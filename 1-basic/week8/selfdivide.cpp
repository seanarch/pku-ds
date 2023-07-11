#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n = 0;
    cin >> n; 

    for(int i = 10; i <= n; i++) 
    {
        int t = i / 10;
        int g = i % 10; 
        if(i % (t + g) == 0) cout<<i<<endl; 
    }
}