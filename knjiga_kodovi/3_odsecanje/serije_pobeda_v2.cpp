#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int najduzaSerijaPobeda(const vector<int>& a) {

	int n = a.size();

	int maxDuzina = 0;

	for (int i = 0; i < n; i++) {

		int duzina = 0;

		for (int j = i; j < n && a[j] == 1; j++)
			duzina++;

		if (duzina > maxDuzina)
			maxDuzina = duzina;
	}

	return maxDuzina;
}

int main(){

	// 1 1 -1 1 1 1 -1 -1
	//   i      j

	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int rez = najduzaSerijaPobeda(a);

	cout << rez << endl;

	return 0;
}