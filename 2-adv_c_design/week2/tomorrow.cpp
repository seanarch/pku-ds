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

// #include <iostream>
// #include <iomanip> 
// #include <stdio.h>  
// #include <stdlib.h>
// using namespace std;

// void getYMD(const std::string& date, int& year, int& month, int& day) {
//     year = std::stoi(date.substr(0, 4));
//     month = std::stoi(date.substr(5, 2));
//     day = std::stoi(date.substr(8, 2));
// }

// void leapYear(int year, bool& isLeap) {
//     if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
//         isLeap = true;
//     } else {
//         isLeap = false;
//     }
// }

// void addOneDay(bool isLeap, int& year, int& month, int& day) {
//     if (isLeap) {
//         if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day == 31) {
//             month++;
//             day = 1;
//         } else if (month == 12 || day == 31) {
//             year++;
//             month = 1;
//             day = 1;
//         } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 30) {
//             month++;
//             day = 1;
//         } else if (month == 2 && day == 29) {
//             month++;
//             day = 1;
//         } else {
//             day++;
//         }
//     } else {
//         if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10) && day == 31) {
//             month++;
//             day = 1;
//         } else if (month == 12 || day == 31) {
//             year++;
//             month = 1;
//             day = 1;
//         } else if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 30) {
//             month++;
//             day = 1;
//         } else if (month == 2 && day == 28) {
//             month++;
//             day = 1;
//         } else {
//             day++;
//         }
//     }
// }

// int main() {
 
//     std::string inputDate;
//     std::cin >> inputDate;

//     int year, month, day;
//     bool isLeap;

//     getYMD(inputDate, year, month, day);
//     leapYear(year, isLeap);
//     addOneDay(isLeap, year, month, day);

//     std::cout << year << "-" << std::setw(2) << std::setfill('0') << month << "-"
//               << std::setw(2) << std::setfill('0') << day;

//     return 0;
// }


#include <iostream>
#include <iomanip> 
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int omonth[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
int lmonth[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };

int year, month, day;
int m, d, y, l, num;
int onum, lnum;

int leap(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        l = 1;
    }
    else {
        l = 0;
    }
    return l;
}

int numdays(int month) {
    if (leap(year) == 0) {
        num = omonth[month - 1];
    }
    else {
        num = lmonth[month - 1];
    }
    return num;
}

int nday(int day) {
    if (day == numdays(month)) {
        d = 1;
    }
    else {
        d = day + 1;
    }
    return d;
}

int nmonth(int month) {
    if (month == 12 && day == numdays(month)) {
        m = 1;
    }
    else if (day == numdays(month)) {
        m = month + 1;
    }
    else {
        m = month;
    }
    return m;
}

int nyear(int year) {
    if (month == 12 && day == numdays(month)) {
        y = year + 1;
    }
    else {
        y = year;
    }
    return y;
}

int main() {
    scanf("%i-%i-%i", &year, &month, &day);

    d = nday(day);
    m = nmonth(month);
    y = nyear(year);

    printf("%04d-%02d-%02d", y, m, d);

    return 0;
}
