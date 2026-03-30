#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//                    sort
// 3 2 1 4 2 5 5 3 1  ---->  1 1 2 2 3 3 4 5 5

int neupareni(const vector<int>& a) {
	
	int n = a.size();
	auto as = a;
	sort(begin(as), end(as));
	
	for (int i = 0; i < n-1; i += 2) {
		if (as[i] != as[i+1])
			return as[i];
	}
	
	if (n % 2 == 1)
		return as[n-1];
		
	throw "ne postoji neupareni element";
}

int main(){
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int neuparenElement = neupareni(a);
	
	cout << neuparenElement << endl;
	
	return 0;
}