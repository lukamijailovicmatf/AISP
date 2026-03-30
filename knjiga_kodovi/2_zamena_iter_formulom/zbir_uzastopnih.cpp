#include <iostream>
#include <algorithm>

using namespace std;

int brojNacina(int n) {

	int nacini = 0;

	for (int a0 = 1; a0 + (a0 + 1) <= n; a0++) {

		int zbir = a0 + (a0 + 1);

		for (int ai = a0 + 2; zbir < n; ai++)
			zbir = zbir + ai;
		
		if (zbir == n)
			nacini++;
	}

	return nacini;
}

int main(){

	// 15 = 1 + 2 + 3 + 4 + 5 
	//    = 4 + 5 + 6 
	//    = 7 + 8

	int n;
	cin >> n;

	int rez = brojNacina(n);

	cout << rez << endl;

	return 0;
}