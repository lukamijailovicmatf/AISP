#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
	
	int broj = 0;
	int x;
	
	while (cin >> x) {
		if (binary_search(begin(a), end(a), x))
			broj++;
	}
	
	cout << broj << endl;
	
	return 0;
}