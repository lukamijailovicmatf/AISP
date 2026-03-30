#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// j
//         i
// 3 2 1 4 2 5 5 3 1

int neupareni(const vector<int>& a) {
	
	int n = a.size();
	
	for (int i = 0; i < n; i++) {
		bool uparen = false;
		for (int j = 0; j < n; j++)
			if (i != j && a[i] == a[j]) {
				uparen = true;
				break;
			}
		if (!uparen)
			return a[i];
	}
	
	throw "ne postoji neupareni element";
}

int main(){
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int neuparenElement = neupareni(a);
	
	cout << neuparenElement << endl;
	
	return 0;
}