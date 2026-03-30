#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//          s
// l
//                      d
// 11 13 15 19 24 1 3 8 9

int minRotiranogSortiranog(const vector<int>& a) {
	
	int n = a.size();
	int l = 0;
	int d = n - 1;
	
	while (l <= d) {
		int s = l + (d - l) / 2;
		if (a[0] > a[s])
			d = s - 1;
		else
			l = s + 1;
	}
	
	int min = l < n ? a[l] : a[0];
	return min;
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