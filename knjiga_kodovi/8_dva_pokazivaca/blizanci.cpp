#include <iostream>
#include <algorithm>
#include <vector>
#include <limits>
#include <cmath>

using namespace std;

int blizanci(const vector<int>& a, const vector<int>& b) {
	
	int minRazlika = numeric_limits<int>::max();
	
	for (int x1 : a)
		for (int x2 : b)
			minRazlika = min(minRazlika, abs(x1 - x2));
			
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
	for (int i = 0; i < m; i++)
		cin >> b[i];
		
	int razlika = blizanci(a, b);
	
	cout << razlika << endl;
	
	return 0;
}