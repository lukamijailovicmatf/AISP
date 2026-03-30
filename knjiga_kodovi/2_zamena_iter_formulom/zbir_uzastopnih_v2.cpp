#include <iostream>
#include <algorithm>

using namespace std;

// m - broj sabiraka
// a0 - pocetni sabirak
int brojNacina(int n) {

	int nacini = 0;

	for (int m = 2; m + m*(m-1)/2 <= n; m++) {

		int a0 = 1;
		int zbir = a0*m + m*(m-1)/2;

		while (zbir < n) {
			a0++;
			zbir = a0*m + m*(m-1)/2;
		}

		if (zbir == n)
			nacini++;
	}

	return nacini;
}

int main(){

	int n;
	cin >> n;

	int rez = brojNacina(n);

	cout << rez << endl;

	return 0;
}