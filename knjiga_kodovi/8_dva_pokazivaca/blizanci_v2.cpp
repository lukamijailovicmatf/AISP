#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// i
// 1 14 28 33 45     <----------> as

// j
// 8 21 22 41 56 68  <----------> bs

// minRazlika = 4 (45 - 41)

int blizanci(const vector<int>& a, const vector<int>& b) {
	
	auto as = a;
	sort(begin(as), end(as));
	
	auto bs = b;
	sort(begin(bs), end(bs));
	
	int i = 0;
	int j = 0;
	int minRazlika = numeric_limits<int>::max();
	
	while (i < as.size() && j < bs.size()) {
		if (as[i] <= bs[j]) {
			minRazlika = min(minRazlika, bs[j] - as[i]);
			i++;
		} else {
			minRazlika = min(minRazlika, as[i] - bs[j]);
			j++;
		}
	}
	
	return minRazlika;
}

int main(){
	
	int m;
	cin >> m;
	
	vector<int> a(m);
	for (int i = 0; i < m; i++)
		cin >> a[i];
		
	int n;
	cin >> n;
	
	vector<int> b(n);
	for (int i = 0; i < n; i++)
		cin >> b[i];
		
	int razlika = blizanci(a, b);
	
	cout << razlika << endl;
	
	return 0;
}