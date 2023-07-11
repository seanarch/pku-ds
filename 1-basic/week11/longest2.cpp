#include <iostream>
#include <string>
using namespace std;

int main()
{
    char sentence[500];
    cin.getline(sentence, 500); 
    char separator = ' ';
    string word = "";
    string longest = "";
    int i = 0;
    int wordlength = 0;

    while(sentence[i] != '.') {
        if (sentence[i] != separator) {
            word += sentence[i];
            } else {
                if (wordlength < word.length()){
                    wordlength = word.length();
                    longest = word;  
                }
                word.clear();
            }
        i++;
    }

    if (wordlength < word.length()){
        wordlength = word.length();
        longest = word;  
    }
    
    cout << longest << endl;
    
    return 0;
}
 