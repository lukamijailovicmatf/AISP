#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long brojRastucihSegmenata(const vector<int>& a) {

	int n = a.size();

	long long brojRastucih = 0;

	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++)
			if (a[j] > a[j-1])
				brojRastucih++;
			else
				break;
	}

	return brojRastucih;
}

int main(){

	// poz: 0 1 2 3 . n-1
	// niz: 1 3 4 5 2 6
	// [1 3], [1 3 4], [1 3 4 5], [3 4], [3 4 5], [4 5], [2 6]

	int n;
	cin >> n;

	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];

	long long rez = brojRastucihSegmenata(a);

	cout << rez << endl;

	return 0;
}