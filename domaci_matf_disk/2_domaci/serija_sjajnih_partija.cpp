#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	
	int p;
	cin >> p;
	
	// duzina serije sjajnih partija
	int k;
	cin >> k;
	
	int n;
	cin >> n;
	
	vector<int> poeni(n);
	for (int i = 0; i < n; i++) {
		cin >> poeni[i];
	}
	
	int brojSjajnihPartija = 0;
	for (int i = 0; i < n; i++) {
		if (poeni[i] >= p) {
			brojSjajnihPartija++;
			if (brojSjajnihPartija >= k) {
				break;
			}
		} else {
			brojSjajnihPartija = 0;
		}
	}
	
	if (brojSjajnihPartija >= k) {
		cout << "da" << endl;
	} else {
		cout << "ne" << endl;
	}
	
	return 0;
}