// #include <iostream>
// #include <iomanip> 
// using namespace std;

// void getYMD(string& date, int& year, int& month, int& day) {
//     year = stoi(date.substr(0, 4)); 
//     month = stoi(date.substr(5,2));
//     day = stoi(date.substr(8, 2));
// }

// void leapyear(int& year, bool& isLeap) {
//     if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ) {
//         isLeap = true; 
//     } else {
//         isLeap = false;  
//     }
// }

// void addOneDay(bool& isLeap, int& year, int& month, int& day) {
//     if (isLeap) { 
//         if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day == 31) {
//             month++;
//             day=1;
//         } else if(month == 12 || day==31) {
//             year++;
//             month=1;
//             day=1;
//         } else if((month == 4 || month == 6 || month == 9 || month == 11) && day == 30) {
//             month++;
//             day=1;
//         } else if(month == 2 && day == 29) {
//             month++;
//             day=1;
//         } else day++; 
//     } else {
//         if((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day == 31) {
//             month++;
//             day=1;
//         } else if(month == 12 || day==31) {
//             year++;
//             month=1;
//             day=1;
//         } else if((month == 4 || month == 6 || month == 9 || month == 11) && day == 30) {
//             month++;
//             day=1;
//         } else if(month == 2 && day == 28) {
//             month++;
//             day=1;
//         } else day++; 
//     } 
// }
  
// int main(){
//     string inputdate; 
//     cin >> inputdate; 

//     int year, month, day;  
//     bool isLeap; 

//     getYMD(inputdate, year, month, day); 
//     leapyear(year, isLeap);  
//     addOneDay(isLeap, year, month, day); 
 
    
//     cout << year << "-" << setw(2) << setfill('0') << month << "-" << setw(2) << setfill('0') << day;
    
//     return 0;
// }

#include <iostream>
#include <iomanip> 
#include <stdio.h>  
#include <stdlib.h>
using namespace std;

int year, month, day;
 
void leapYear(int year, bool& isLeap) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        isLeap = true;
    } else {
        isLeap = false;
    }
}

void addOneDay(bool isLeap, int& year, int& month, int& day) {
    if (isLeap) { 
        switch (month) {

            case 1: 
                if(day == 31) {month++; day = 1;}
                break;
            case 2:
                if(day == 29) {month++; day = 1;} 
                break;
            case 3: 
                if(day == 31) {month++; day = 1;} 
            case 4:
                if(day == 30) {month++; day = 1;}
                break;
            case 5:
                if(day == 31) {month++; day = 1;}
                break;
            case 6:
                if(day == 30) {month++; day = 1;}
                break;
            case 7:
                if(day == 31) {month++; day = 1;}
                break;
            case 8:
                if(day == 31) {month++; day = 1;}
                break;
            case 9:
                if(day == 30) {month++; day = 1;}
                break;
            case 10: 
                if(day == 31) {month++; day = 1;}
                break;
            case 11:
                if(day == 30) {month++; day = 1;}
                break;
            case 12:
                if(day == 31) {month++; day = 1;}
                break;
            default: 
                day++; 
        }

    } else {
        switch (month) {

            case 1: 
                if(day == 31) {month++; day = 1;}
                break;
            case 2:
                if(day == 28) {month++; day = 1;} 
                break;
            case 3: 
                if(day == 31) {month++; day = 1;} 
            case 4:
                if(day == 30) {month++; day = 1;}
                break;
            case 5:
                if(day == 31) {month++; day = 1;}
                break;
            case 6:
                if(day == 30) {month++; day = 1;}
                break;
            case 7:
                if(day == 31) {month++; day = 1;}
                break;
            case 8:
                if(day == 31) {month++; day = 1;}
                break;
            case 9:
                if(day == 30) {month++; day = 1;}
                break;
            case 10: 
                if(day == 31) {month++; day = 1;}
                break;
            case 11:
                if(day == 30) {month++; day = 1;}
                break;
            case 12:
                if(day == 31) {month++; day = 1;}
                break;
            default: 
                day++; 
        }
    }
}

int main() {
    
    scanf("%i-%i-%i", &year, &month, &day);
 
    bool isLeap;
 
    leapYear(year, isLeap);
    addOneDay(isLeap, year, month, day);

    printf("%04d-%02d-%02d", year, month, day);

    return 0;
}

 