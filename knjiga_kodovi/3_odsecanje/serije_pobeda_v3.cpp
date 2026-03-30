#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	// 1 1 -1 1 1 1 -1 -1 1 1 1 1
	//   i      j

	int n;
	cin >> n;

	int duzinaTekuce = 0;

	int duzinaNajduze = 0;

	for (int i = 0; i < n; i++) {

		int rezultat;
		cin >> rezultat;

		if (rezultat == 1) {
			duzinaTekuce++;
		} else {
			if (duzinaTekuce > duzinaNajduze)
				duzinaNajduze = duzinaTekuce;
			duzinaTekuce = 0;
		}
	}

	if (duzinaTekuce > duzinaNajduze)
		duzinaNajduze = duzinaTekuce;

	cout << duzinaNajduze << endl;

	return 0;
}