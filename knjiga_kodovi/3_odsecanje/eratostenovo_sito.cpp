#include <iostream>
#include <algorithm>

using namespace std;

bool prost(int n) {

	if (n == 1)
		return false;

	if (n == 2)
		return true;

	if (n % 2 == 0)
		return false;

	for (int i = 3; i*i <= n; i += 2)
		if (n % i == 0)
			return false;

	return true;
}

void prostiUIntervalu(int a, int b, int& broj, int& zbir) {

	broj = 0;
	zbir = 0;

	for (int i = a; i <= b; i++) {
		if (prost(i)) {
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
	cout <<zbir << endl;

	return 0;
}