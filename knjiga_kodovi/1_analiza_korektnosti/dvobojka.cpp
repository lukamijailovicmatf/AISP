#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	// odrzavamo uslov
	// [0, l) - parni
	// (d, n) - neparni
	// [l, d] - nepoznati

	// u pocetku su svi nepoznati
	int l = 0;
	int d = n-1;

	// dok jos ima nepoznatih elemenata
	while (l < d) {
		// ako je na mestu l paran, ostavljamo ga na svom mestu i pomeramo
		// se na naredni element
		if (a[l] % 2 == 0) {
			l++;
		} else if (a[d] % 2 != 0) {
		// ako je na mestu d neparan, ostavljamo ga na svom mestu i
		// pomeramo se na prethodni element
			d--;
		} else {
		// na mestu l je neparan, a na mestu d je paran broj, pa ih
		// razmenjujemo i pomeramo se po oba kraja
			swap(a[l], a[d]);
			l++;
			d--;
		}
	}

	for (int e : a)
		cout << e << ' ';

	cout << endl;

	return 0;
}