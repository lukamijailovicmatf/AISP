#include <iostream>
#include <algorithm>

using namespace std;

// broj brojeva u intervalu [a,b] deljivih brojem k
void brojDeljivihSaK(int a, int b, int k) {

	int brojDeljivih = 0;

	for (int i = a; i <= b; i++) {
		if (i % k == 0) {
			brojDeljivih++;
		}
	}

	return brojDeljivih;
}

int main(){

	// 30 53 5 => deljivi su: 30, 35, 40, 45, 50
	// 30 60 3 => deljivi su: 30, 33, 36, 39, 42, 45, 48, 51, 54, 57, 60

	int a;
	int b;
	int k;

	cin >> a;
	cin >> b;
	cin >> k;

	int rez = brojDeljivihSaK(a,b,k);

	brojDeljivihSaK(a,b,k);

	cout << rez << endl;

	return 0;
}