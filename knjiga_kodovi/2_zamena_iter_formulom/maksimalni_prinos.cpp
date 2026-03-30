#include <iostream>
#include <algorithm>

using namespace std;

long long maksimalniPrinos(long long a, long long b, long long c) {

	long long maks = a * (b+c);

	for (long long i = 1; i <= c; i++) {
		maks = max(maks, (a+i) * (b+c-i));
	}

	return maks;
}

int main(){

	// 5 10 3 = (5+3)*10 = 80
	// 9 10 4 = (9+2)*(10+2) = 132
	// 14 17 5 = (14+4)*(17+1) = 324

	long long a;
	long long b;
	long long c;

	cin >> a;
	cin >> b;
	cin >> c;

	long long rez = maksimalniPrinos(a,b,c);

	cout << rez << endl;

	return 0;
}