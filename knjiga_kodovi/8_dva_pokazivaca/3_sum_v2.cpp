#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//  i  l               d
// -8 -5 7 4 1 -2 9 -3 2

//  i  l               d
// -8 -5 -3 -2 1 2 4 7 9 

int brojTrojkiZbiraNula(const vector<int>& a) {
	
	auto as = a;
	sort(begin(as), end(as));
	
	int brojTrojki = 0;
	int n = as.size();
	
	for (int i = 0; i < n - 2; i++) {
		int l = i + 1;
		int d = n - 1;
		while (l < d) {
			if (as[i] + as[l] + as[d] < 0)
				l++;
			else if (as[i] + as[l] + as[d] > 0)
				d--;
			else {
				brojTrojki++;
				l++;
				d--;
			}
		}
	}
	
	return brojTrojki;
}

int main(){
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int brojTrojki = brojTrojkiZbiraNula(a);
	
	cout << brojTrojki << endl;
	
	return 0;
}