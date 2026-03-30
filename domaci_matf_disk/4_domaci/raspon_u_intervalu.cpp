#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

set<long long int> skup;

// funkcija koja dodaje zadatu vrednost u skup
void dodajUSkup(long long int vrednost) {
	skup.insert(vrednost);
}

void odrediRaspon(long long int u, long long int v) {

	auto a = skup.lower_bound(u);

	if (a == skup.end()) {
		cout << "0" << endl;
		return;
	}
	
	long long int ai = *a;
	
	auto b = skup.lower_bound(v);
	long long int bi;
	
	if (*b != v) {
		auto bp = b;
		bp--;
		bi = *(bp);
	} else {
		bi = *b;
	}
	
	long long int r = bi - ai;
	if (r < 0 || ai > v || bi < u)
		r = 0;
		
	cout << r << endl;
}

int main() {
	
	long long int brojOperacija;
	cin >> brojOperacija;
	
	// granice intervala
	long long int u;
	long long int v;
	
	// operacija 't' ili 'i'
	char c;
	
	for (long long int q = 0; q < brojOperacija; q++) {
		cin >> c;
		if (c == 't') {
			cin >> u;
			dodajUSkup(u);
		} else if (c == 'i') {
			cin >> u >> v;
			odrediRaspon(u, v);
		}
	}
	
	return 0;
}