#include <iostream>
#include <algorithm>

using namespace std;

// |
// xyz  <-------->  podniz

// |
// xaxxybyxyxzyzzb  <---------->  niz

bool jeMucajuciPodniz(const string& podniz, const string& niz, int n) {
	
	int i = 0;
	for (char c : podniz) {
		for (int k = 0; k < n; k++) {
			while (i < niz.size() && niz[i] != c)
				i++;
			if (i == niz.size())
				return false;
			i++;
		}
	}
	
	return true;
}

int najduziMucajuciPodniz(const string& podniz, const string& niz) {
	
	int d = 1;
	while (jeMucajuciPodniz(podniz, niz, d))
		d++;
	return d - 1;
}

int main(){
	
	string s;
	cin >> s;
	
	string t;
	cin >> t;
	
	int najduziMucajuci = najduziMucajuciPodniz(s, t);
	
	cout << najduziMucajuci << endl;
	
	return 0;
}