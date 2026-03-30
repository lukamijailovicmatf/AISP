#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// 1234567 -> 123 + 7654 -> 1237654

// x = 123
// cifre = [7, 6, 5, 4]

// x = x * 10 + cifre[i]
// 123 * 10 + 7 = 1230 + 7 = 1237
// 1237 * 10 + 6 = 12370 + 6 = 12376
// 12376 * 10 + 5 = 123760 + 5 = 123765
// 123765 * 10 + 4 = 1237650 + 4 = 1237654

int main(){
	
	int x;
	cin >> x;
	
	vector<char> cifre(4);
	
	for (int i = 0; i < 4; i++) {
		cifre[i] = x % 10;
		x = x / 10;
		// cout << (int)cifre[i] << " ";
	}
	
	for (int i = 0; i < 4; i++) {
		x = x * 10 + cifre[i];
	}
	
	cout << x << endl;
	
	return 0;
}