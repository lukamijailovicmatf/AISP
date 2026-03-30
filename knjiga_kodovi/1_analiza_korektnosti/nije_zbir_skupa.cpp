#include <iostream>
#include <algorithm>

using namespace std;

int main(){

	int n;
	cin >> n;

	// sabiranjem elemenata trenutnog skupa mogu se dobiti svi elementi
	// iz intervala [0, mozeDo]
	int mozeDo = 0;

	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (x > mozeDo + 1)
			break;
		mozeDo += x;
	}

	cout << mozeDo + 1 << endl;

	return 0;
}