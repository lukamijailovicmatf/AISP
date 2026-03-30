#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
//    s  d 
// -------+++++++++
// l      s       d
int prviKojiNijeDeljiv(vector<long long>& a, long long k) {

	int n = a.size();
	int l = 0;
	int d = n-1;

	while (l <= d) {
		int s = l + (d - l) / 2;
		if (a[s] % k != 0) {
			d = s - 1;
		} else {
			l = s + 1;
		}
	}

	return l;
}

int main(){

	int n;
	cin >> n;

	vector<long long> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	int q;
	cin >> q;

	while (q--) {
		long long k;
		cin >> k;
		int rezultat = prviKojiNijeDeljiv(a, k);
		cout << rezultat << endl;
	}

	return 0;
}