#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int cifra;
	int n = 0;

	while (cin >> cifra) {
		n = n * 10 + cifra;
	}

	cout << n << endl;

	return 0;
}