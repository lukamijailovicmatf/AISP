#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//  i  j k        i  j k
// -8 -5 7 4 1 -2 9 -3 2

int brojTrojkiZbiraNula(const vector<int>& a) {
	
	int brojTrojki = 0;
	int n = a.size();
	
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++)
				if (a[i] + a[j] + a[k] == 0)
					brojTrojki++;
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