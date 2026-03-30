#include <iostream>
#include <algorithm>

using namespace std;

int obrni(int n) {

	int r = 0;

	while (n > 0) {
		r = r * 10 + n % 10;
		n = n / 10;
	}

	return r;
}

int main(){

	// 123000
	// 0 -> 0 -> 0 -> 30 -> 32 -> 321 

	int n;
	cin >> n;

	int rez = obrni(n);

	cout << rez << endl;

	return 0;
}