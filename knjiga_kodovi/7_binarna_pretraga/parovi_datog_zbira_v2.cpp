#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// i j
// 1 4 3 6 -1 5

int brojParovaDatogZbira(const vector<int>& a, int s) {
	
	auto as = a;
	sort(begin(as), end(as));
	
	int n = as.size();
	int brojParova = 0;
	
	for (int i = 0; i < n - 1; i++) {
		if (binary_search(next(begin(as), i + 1), end(as), s - as[i]))
			brojParova++;
	}
	
	return brojParova;
}

int main(){
	
	int s;
	cin >> s;
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int resenje = brojParovaDatogZbira(a, s);
	
	cout << resenje << endl;
	
	return 0;
}