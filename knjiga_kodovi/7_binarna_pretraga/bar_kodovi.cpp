#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool sadrzi(const vector<int>& a, int x) {
	
	int n = a.size();
	
	for (int i = 0; i < n; i++) {
		if (a[i] == x)
			return true;
	}
	
	return false;
} 

int main(){
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int broj = 0;
	int x;
	
	while (cin >> x) {
		if (sadrzi(a,x))
			broj++;
	}
	
	cout << broj << endl;
	
	return 0;
}