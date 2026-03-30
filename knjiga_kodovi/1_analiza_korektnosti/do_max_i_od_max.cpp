#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	// n = 5
	// 10 13 7 13 4

	// ukupan broj elemenata
	int n;
	cin >> n;

	// ucitavanje mase prvog predmeta
	int m;
	cin >> m;

	// najveca do sada ucitana masa
	int max = m;

	// zbir masa pre najvece do sada ucitane
	int zbirPreMax = 0;

	// zbir masa posle najvece do sada ucitane
	int zbirPosleMax = 0;

	for (int i = 1; i < n; i++) {
		// ucitavanje mase sledeceg predmeta
		cin >> m;
		if (m > max) {
			zbirPreMax = zbirPreMax + max + zbirPosleMax;
			max = m;
			zbirPosleMax = 0;
		} else {
			zbirPosleMax = zbirPosleMax + m;
		}
	}

	cout << zbirPreMax - zbirPosleMax << endl;

	return 0;
}