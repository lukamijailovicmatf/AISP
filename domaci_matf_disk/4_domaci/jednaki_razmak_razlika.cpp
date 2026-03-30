#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

// niz: 1 6 -1 4 9 5 8 12

// dek: 8 12

int main() {
	
	int k;
	cin >> k;
	
	int n;
	cin >> n;
	
	int brojPozicija = 0;
	
	deque<int> dek;
	
	// prvih k elemenata niza dodajemo na kraj deka
	for (int i = 0; i < k; i++) {
		int x;
		cin >> x;
		dek.push_back(x);
	}
	
	// obradjujemo ostatak elemenata niza
	for (int i = k; i < n; i++) {
		int x;
		cin >> x;
		dek.push_back(x);
		if (!(dek.back() - (dek.front() + k)))
			brojPozicija++;
		dek.pop_front();
	}
	
	cout << brojPozicija << endl;
	
	return 0;
}