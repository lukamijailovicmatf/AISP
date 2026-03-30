#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	unsigned long n;
	cin >> n;

	// niz binarnih cifara, redom, od cifre najmanje do cifre najvece
	// tezine
	bool binarneCifre[32] = {false};

	for (int i = 0; n > 0; i++) {
		binarneCifre[i] = n % 2;
		n /= 2;
	}

	// nakon petlje dobijamo ovo za broj 38
	// 011001 -> a treba ispisati 100110 (obrnut redosled), zato narednu petlju idemo od nazad

	// ispisujemo rezultat (od cifre najvece tezine tj. od kraja niza krecemo)
	for (int i = 31; i >= 0; i--) {
		cout << (binarneCifre[i] ? '1' : '0');
	}

	cout << endl; 

	return 0;
}