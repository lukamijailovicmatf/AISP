#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main(){
	
	int N;
	cin >> N;
	
	unordered_set<long long> duzine;
	
	for (int i = 0; i < N; i++) {
		int x1, y1, z1, x2, y2, z2;
		cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
		duzine.insert(((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2) + (z1 - z2) * (z1 - z2)));
	}
	
	cout << duzine.size() << endl;
	
	return 0;
}