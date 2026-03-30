#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//              unique                erase
// 1 1 2 2 5 5  ------>  1 2 3 x x x  ----->  1 2 3

int brojRazlicitih(const vector<int>& a) {
	
	auto as = a;
	
	sort(begin(as), end(as));
	
	as.erase(unique(begin(as), end(as)), end(as));
	
	return as.size();
}

int main(){
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int broj = brojRazlicitih(a);
	
	cout << broj << endl;
	
	return 0;
}