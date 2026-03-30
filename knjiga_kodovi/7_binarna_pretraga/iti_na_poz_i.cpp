#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//  0  1 2 3 4 5  <-------> pozicije
// -3 -1 1 3 5 7  <-------> elementi

int itiNaMestuI(const vector<int>& a) {
	
	int n = a.size();
	
	for (int i = 0; i < n; i++) {
		if (a[i] == i)
			return i;
	}
	
	return -1;
}

int main(){
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int resenje = itiNaMestuI(a);
	
	if (resenje != -1) {
		cout << resenje << endl;
	} else {
		cout << "nema" << endl;
	}
	
	return 0;
}