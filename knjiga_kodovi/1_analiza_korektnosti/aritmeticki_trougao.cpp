#include <iostream>
#include <algorithm>

using namespace std;

long long zbirNaNivouK(long long k) {

	long long pocetak = 1;
	long long brojElemenata = 1;

	for (long long i = 1; i < k; i++) {
		pocetak += brojElemenata;
		brojElemenata += 2;
	}

	long long zbir = 0;
	for (long long i = pocetak; i < pocetak + brojElemenata; i++) {
		zbir += i;
	}

	return zbir;
}

int main(){

	int k;
	cin >> k;

	int zbir = zbirNaNivouK(k);

	cout << zbir << endl;

	return 0;
}