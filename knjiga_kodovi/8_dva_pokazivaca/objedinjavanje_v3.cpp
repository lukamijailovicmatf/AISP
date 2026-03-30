#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> objedini(const vector<int>& a, const vector<int>& b) {
	
	vector<int> c(a.size() + b.size());
	merge(a.begin(), a.end(), b.begin(), b.end(), c.begin());
	
	return c;
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
		
	vector<int> c = objedini(a, b);
	
	for (int x : c)
		cout << x << " ";
	cout << endl;
	
	return 0;
}