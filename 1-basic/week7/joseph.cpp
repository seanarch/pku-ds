#include<iostream>
using namespace std;

int succedent[300];
int precendent[300];

int main()
{
    int n, m;
    while(true) 
    {
        cin >> n >> m; 
        if(n == 0 && m ==0) break;
        for(int i = 0; i<n-1; i++) 
        {
            succedent[i] = i + 1; 
            precendent[i + 1] = i; 
        }
        succedent[n-1] = 0;
        precendent[0] = n - 1;

        int current = 0;
        while(true) 
        {
            for(int count = 0; count < m - 1; count++) current = succedent[current]; 
 
            int pre = precendent[current];
            int suc = succedent[current];

            succedent[pre] = suc; 
            precendent[suc] = pre; 

            if(pre == suc) {
                cout<< pre+1<< endl;
                break;
            }
            current = suc; 
            
        }
    }
    return 0;
} // namespace std;
