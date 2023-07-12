#include <iostream> 
using namespace std;

int main()
{
    int a, b; 
    char c; 
    int result; 

    while(cin >> a >> b >> c ){ 
        switch(c) 
        {
            case '+':
                result = a + b;
                cout << result << endl;
                break; 
            case '-':
                result = a - b;
                cout << result << endl;
                break;
            case '*':
                result = a * b;
                cout << result << endl;
                break;
            case '/':
                if(b == 0) { cout << "Divided by zero!" << endl;} 
                break;
            default: 
                cout << "Invalid operator!" << endl;
        }
    }

    return 0;
}