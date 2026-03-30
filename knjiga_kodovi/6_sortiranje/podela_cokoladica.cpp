#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>

using namespace std;

//                   sort             |
// 3 8 1 17 4 7 12 9 ---->  1 3 4 7 8 9 12 17

int minRazlika(vector<int>& a, int k) {
	
	int n = a.size();
	int min = numeric_limits<int>::max();
	
	sort(begin(a), end(a));
	
	for (int i = 0; i < n - k + 1; i++) {
		int razlika = a[i+k-1] - a[i];
		if (razlika < min)
			min = razlika;
	}
	
	return min;
}

int main(){
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int k;
	cin >> k;
	
	int minimalnaRazlika = minRazlika(a, k);
	
	cout << minimalnaRazlika << endl;
	
	return 0;
}