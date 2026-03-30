#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int najduzaSerijaPobeda(const vector<int>& a) {

	int n = a.size();

	int maxDuzina = 0;

	for (int i = 0; i < n; i++) {
		for (int j = i; j < n; j++) {
			bool samoPobede = true;
			for (int k = i; k <= j; k++) {
				if (a[k] != 1) {
					samoPobede = false;
					break;
				}
			}

			if (samoPobede) {
				maxDuzina = max(maxDuzina,j-i+1);
			}
		}
	}

	return maxDuzina;
}

int main(){

	// 1 1 -1 1 1 1 -1 -1
	//   i      j

	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int rez = najduzaSerijaPobeda(a);

	cout << rez << endl;

	return 0;
}