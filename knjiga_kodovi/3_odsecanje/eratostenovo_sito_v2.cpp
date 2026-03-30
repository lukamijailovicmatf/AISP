#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// funkcija koja popunjava logicki niz podacima o prostim brojevima iz intervala [0,n]
void eratosten(vector<bool>& prost, int n) {

	// [true true true true true true true true true]
	//    0    1    2    3    4    5    6    7   8
	prost.resize(n + 1, true);

	// [false false true true true true true true true]
	//    0     1     2    3    4    5    6    7    8
	prost[0] = prost[1] = false;

	for (int i = 2; i*i <= n; i++) {
		if (prost[i]) {
			for (int j = i*i; j <= n; j += i)
				prost[j] = false;
		}
	}
}

void prostiUIntervalu(int a, int b, int& broj, int& zbir) {

	// odredjujemo proste brojeve u intervalu [0,b]
	vector<bool> prost;
	eratosten(prost,b);

	broj = 0;
	zbir = 0;

	for (int i = a; i <= b; i++) {
		if (prost[i]) {
			zbir = (zbir + i) % 1000000;
			broj++;
		}
	}
}

int main(){

	int a;
	int b;

	cin >> a;
	cin >> b;

	int broj;
	int zbir;

	prostiUIntervalu(a,b,broj,zbir);

	cout << broj << endl;
	cout << zbir << endl;

	return 0;
}