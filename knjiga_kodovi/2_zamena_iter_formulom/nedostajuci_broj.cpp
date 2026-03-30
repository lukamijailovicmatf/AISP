#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){

	// 5
	// 0 4 2 5 1 => nedostaje 3

	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	// x setamo kroz petlju da bismo pokupili svaki element [0, n]
	for (int x = 0; x <= n; x++) {
		if (find(begin(a), end(a), x) == end(a)) {
			cout << x << endl;
			break;
		}
	}

	return 0;
}