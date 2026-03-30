#include <iostream>
#include <algorithm>

using namespace std;

// nzd(a, b) = nzd(b, a % b)
int nzd(int a, int b) {

	while (b > 0) {
		int tmp = b;
		b = a % b;
		a = tmp;
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