#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

using namespace std;

// -3 7 1 8 -5 2 9

//               |
//  0  1 2 3 4 5 6 pozicije
// -5 -3 1 2 7 8 9 sortirano

//      back  front
//        |     |
//        |     |
//        v     v
// dek1: -5 1 7 9  parne pozicije
// dek2: -3 2 8    neparne pozicije

//        back         front
//        |            |
//        |            |
//        v            v
// dek1: -5 1 7 9 8 2 -3

int main() {
	
	int n;
	cin >> n;
	
	vector<int> v(n);
	for (int i = 0; i < n; i++) {
		cin >> v[i];
	}
	
	sort(v.begin(), v.end());
	
	deque<int> dek1;
	deque<int> dek2;
	
	for (int i = 0; i < n; i++) {
		if (i % 2 == 1) {
			dek2.push_front(v[i]);
		} else {
			dek1.push_front(v[i]);
		}
	}
	
	while (!dek2.empty()) {
		dek1.push_front(dek2.front());
		dek2.pop_front();
	}
	
	while (!dek1.empty()) {
		cout << dek1.back() << " ";
		dek1.pop_back();
	}
	
	cout << endl;
	
	return 0;
}