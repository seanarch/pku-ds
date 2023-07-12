#include <iostream>
using namespace std;
int main() {
	char a[14] = { 0 }, b[4] = { 0 };

	while (cin >> a >> b){
		int i = 0, index = 0, na = 0, nb = 0, j = 0;
		char temp = 0;
		 
		for (i = 0; a[i] != 0; ++i){
			++na;
			if (a[i] > temp){
				temp = a[i];
				index = i + 1;
			}
		}
		
		 
		for (i = 0; b[i] != 0;++i)
			++nb;
	 
		for (i = na + nb - 1; i > index + nb - 1; --i)
			a[i] = a[i - nb];

 
		for (i = index, j = 0; j < nb; ++i, ++j)
			a[i] = b[j];

		cout << a << endl;
	 
		for (int i = 0; i < 14; ++i)
			a[i] = 0;
		for (int i = 0; i < 4; ++i)
			b[i] = 0;
	}

	return 0;
}