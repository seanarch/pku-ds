#include<iostream>
#include <iomanip>
using namespace std;

// input: id, invoice number, type 
int main(){
    int id; 
    int invoicenumber; 
    int row = 0;
    char type; 
    double amount; 
    double id1total; 
    double id2total; 
    double id3total; 
    double typeAtotal;
    double typeBtotal;
    double typeCtotal; 

    while(row < 3) {
        cin >> id; 
        cin >> invoicenumber; 

        for(int i = 0; i < invoicenumber; i++) {
            cin >> type >> amount; 

            if(id == 1) id1total += amount;
            if(id == 2) id2total += amount;
            if(id == 3) id3total += amount; 
            if(type == 'A') typeAtotal += amount; 
            if(type == 'B') typeBtotal += amount; 
            if(type == 'C') typeCtotal += amount; 
        }

        row++; 
    }
 
    cout << 1 << " " << fixed << setprecision(2) << id1total << endl; 
    cout << 2 << " " <<  id2total << endl; 
    cout << 3 << " " << id3total << endl; 
    cout << 'A' << " " <<  typeAtotal << endl;
    cout << 'B' << " " << typeBtotal << endl;
    cout << 'C' << " " << typeCtotal << endl;    

    return 0;
}
 