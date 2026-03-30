#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int minRotiranogSortiranog(const vector<int>& a) {
	
	return *min_element(begin(a), end(a));
}

int main(){
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int min = minRotiranogSortiranog(a);
	
	cout << min << endl;
	
	return 0;
}