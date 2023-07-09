#include <iostream>
using namespace std; 

int main()
{
    int length;
    cin>>length; 
    int a[length]; 

    for(int i=0; i<length; i++)
    {
        cin>>a[i];
    }

    int count1 = 0;
    int count5 = 0;
    int count10 = 0;
    for(int i=0; i<length; i++)
    {
        if(a[i] == 1 ) {
            count1++;
        } else if(a[i] == 5) {
            count5++;
        } else if(a[i] == 10){
            count10++;
        }
    }
    cout<<count1<<endl<<count5<<endl<<count10;

    return 0;
}