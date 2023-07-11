#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    char sentence[80];
    int charA = 0;
    int charE = 0;
    int charI = 0;
    int charO = 0;
    int charU = 0; 
    cin.getline(sentence, 80);  
    for(int i = 0; i < 80; i++) {
        if(sentence[i] == 'a') {
            charA++;
        } else if (sentence[i] == 'e'){
            charE++;
        } else if (sentence[i] == 'i'){
            charI++;
        } else if (sentence[i] == 'o'){
            charO++;
        } else if(sentence[i] == 'u'){
            charU++;
        }
    }
    cout << charA <<" " << charE <<" " << charI <<" " << charO <<" " << charU <<endl;
    return 0;
}

