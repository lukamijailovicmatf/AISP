#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//  0   1 2 3 4 5 6   <-------> pozicije
// -10 -4 1 3 4 9 11  <-------> stari niz

//  |        |        <-------> iteratori
// -10 -5 -1 0 0 4 5  <-------> novi niz

int itiNaMestuI(const vector<int>& a) {
	
	int n = a.size();
	vector<int> b(n);
	
	for (int i = 0; i < n; i++)
		b[i] = a[i] - i;
		
	// prva pozicija u nizu b koja je >= 0
	auto it = lower_bound(begin(b), end(b), 0);
	
	if (it != end(b) && *it == 0)
		return distance(begin(b), it);
	else
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