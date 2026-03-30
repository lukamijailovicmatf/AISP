#include <iostream>
#include <algorithm>

using namespace std;

// izracunavanje najveceg zajednickog delioca brojeva a i b
int nzd(int a, int b) {

	// Euklidov algoritam sa oduzimanjem
	while (a != b) {
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}

	return a;
}

int nzd(int a, int b, int c) {
	return nzd(nzd(a,b),c);
}

int main(){

	int a;
	int b;
	int c;

	cin >> a;
	cin >> b;
	cin >> c;

	int rez = nzd(a,b,c);

	cout << rez << endl;

	return 0;
}