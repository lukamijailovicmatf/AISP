#include <iostream>
#include <algorithm>

using namespace std;

// broj brojeva u intervalu [a,b] deljivih brojem k
int brojDeljivihSaK(int a, int b, int k) {

	int nl = (a % k == 0) ? a / k : a / k + 1;
	int nd = b / k;
	int brojDeljivih = (nd >= nl) ? nd - nl + 1 : 0;

	return brojDeljivih;
}

int main(){

	// 31 53 5 => deljivi su: 31, 35, 40, 45, 50
	//                       [7               10]
	// 10 - 7 + 1 = 3 + 1 = 4

	// ---------------------------------------------------------------------

	// 30 60 3 => deljivi su: 30, 33, 36, 39, 42, 45, 48, 51, 54, 57, 60
	//                       [10                                      20]
	// 20 - 10 + 1 = 10 + 1 = 11

	int a;
	int b;
	int k;

	cin >> a;
	cin >> b;
	cin >> k;

	int rez = brojDeljivihSaK(a,b,k);

	cout << rez << endl;

	return 0;
}