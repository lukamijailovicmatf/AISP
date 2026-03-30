#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	// ucitavamo broj koji treba rastaviti na proste cinioce
	int n;
	cin >> n;

	// prvi potencijalni prost cinilac je 2
	int f = 2;

	// dok se broj deljenjem sa svojim prostim ciniocima ne svede na 1
	while (n > 1) {
		// dok je n deljivo sa f
		while (n % f == 0) {
			// prijavljujemo pronadjeni prost cinilac i delimo broj njime
			cout << f << ' ';
			n = n / f;
		}
		// prelazimo na sledeceg kandidata
		f = f + 1;
	}

	cout << endl;

	return 0;
}