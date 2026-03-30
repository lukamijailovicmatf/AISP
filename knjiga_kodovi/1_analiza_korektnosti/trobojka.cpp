#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// funkcija organizuje elemente vektora tako da se prvo nalaze elementi
// za koje vazi da su iz intervala (-Inf, A), nakon toga dolaze
// elementi iz intervala [A, B], i nakon toga elementi iz intervala
// (B, Inf)
void podelaNiza(vector<int>& niz, int A, int B) {
	
	// - u intervalu pozicija [0, l) su elementi iz intervala (-Inf, A)
	// - u intervalu pozicija [l, i) su elementi iz intervala [A, B]
	// - u intervalu pozicija [i, d) su jos neispitani elementi
	// - u intervalu pozicija [d, n) su elementi iz intervala (B, Inf)
	int l = 0;
	int i = 0;
	int d = niz.size();

	// dok god postoje neispitani elementi
	while (i < d) {
		if (niz[i] < A) {
			swap(niz[i++], niz[l++]);
		} else if (niz[i] <= B) {
			i++;
		} else {
			swap(niz[i], niz[--d]);
		}
	}
}

int main(){

	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int A;
	cin >> A;

	int B;
	cin >> B;

	podelaNiza(a, A, B);

	for (int e : a)
		cout << e << ' ';

	cout << endl;

	return 0;
}