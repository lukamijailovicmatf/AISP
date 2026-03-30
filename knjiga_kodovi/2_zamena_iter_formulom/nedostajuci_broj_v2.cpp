#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	// 5
	// 0 4 2 5 1 => nedostaje 3

	int n;
	cin >> n;

	long long zbir = 0;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		zbir = zbir + x;
	}

	long long zbirSvih = ((long long)n) * (n+1) / 2;

	int nedostajuciBroj = zbirSvih - zbir;

	cout << nedostajuciBroj << endl;

	return 0;
}