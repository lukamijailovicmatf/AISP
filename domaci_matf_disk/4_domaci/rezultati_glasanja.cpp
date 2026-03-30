#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main() {
	
	map<string, int> kandidati;
	
	int k;
	cin >> k;
	
	int n;
	cin >> n;
	
	int plasiranih = 0;
	
	for (int i = 0; i < n; i++) {
		string ime;
		cin >> ime;
		kandidati[ime]++;
		if (kandidati[ime] == k)
			plasiranih++;
		cout << plasiranih << endl;
	}
	
	return 0;
}