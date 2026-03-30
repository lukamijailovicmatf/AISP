#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//    l   d
// -1 1 3 4 5 6

int brojParovaDatogZbira(const vector<int>& a, int s) {
	
	auto as = a;
	sort(begin(as), end(as));
	
	int brojParova = 0;
	int l = 0;
	int d = as.size() - 1;
	
	while (l < d) {
		if (a[l] + a[d] < s)
			l++;
		else if (a[l] + a[d] > s)
			d--;
		else {
			brojParova++;
			l++;
			d--;
		}
	}
	
	return brojParova;
}

int main(){
	
	int s;
	cin >> s;
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int brojParova = brojParovaDatogZbira(a, s);
	
	cout << brojParova << endl;
	
	return 0;
}