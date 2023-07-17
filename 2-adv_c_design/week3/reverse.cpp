// #include <iostream>
// using namespace std;

// int reverse() {

//     char c;
//     c = cin.get();
//     if(c !='\n') reverse();

//     cout << c;
//     return 0;
// }


// int main() {
//     reverse(); 
//     return 0; 
// }

// #include <iostream>
// #include <string>
// using namespace std;

// void reverseWord(string& sentence, int start, int end) {
//     // Base case: If start and end indices meet or cross, return
//     if (start >= end) {
//         return;
//     }
    
//     // Swap characters at start and end indices
//     swap(sentence[start], sentence[end]);
    
//     // Recursively reverse the remaining characters
//     reverseWord(sentence, start + 1, end - 1);
// }

// void reverseInOrder(string& sentence, int start, int end) {
//     // Base case: If start index reaches the end, return
//     if (start >= end) {
//         return;
//     }
    
//     // Find the next space character
//     int space = sentence.find(' ', start);
    
//     // If no space is found, set space to the end index
//     if (space == string::npos) {
//         space = end;
//     }
    
//     // Reverse the current word within the sentence
//     reverseWord(sentence, start, space - 1);
    
//     // Recursively reverse the remaining words
//     reverseInOrder(sentence, space + 1, end);
// }

// int main() {
//     string sentence;
//     cout << "Enter a sentence: ";
//     getline(cin, sentence);
    
//     // Reverse the words in order recursively
//     reverseInOrder(sentence, 0, sentence.length() - 1);
    
//     cout << "Reversed sentence: " << sentence << endl;
    
//     return 0;
// }