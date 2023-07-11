#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char str1[80];
    char str2[80];
    cin.getline(str1, 80);   
    cin.getline(str2, 80);  

    int i = 0;
    char result;
    while (tolower(str1[i]) != '\0' && (tolower(str1[i]) == tolower(str2[i]))){
        i++;
    }
    if (tolower(str1[i]) > tolower(str2[i])) {
        result = '>';
    } else if (tolower(str1[i]) < tolower(str2[i])) {
        result = '<';
    } else{
        result = '=';
    } 

    cout << result <<  endl;
    return 0;
}