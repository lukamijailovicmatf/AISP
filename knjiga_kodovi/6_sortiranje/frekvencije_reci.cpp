#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	
	string s;
	vector<string> reci;
	
	while (cin >> s)
		reci.push_back(s);
		
	sort(begin(reci), end(reci));
	
	int tekucaDuzina = 1;
	int maxDuzina = 1;
	string maxRec = reci[0];
	int n = reci.size();
	
	for (int i = 1; i < n; i++) {
		if (reci[i] == reci[i-1])
			tekucaDuzina++;
		else
			tekucaDuzina = 1;
		if (tekucaDuzina > maxDuzina) {
			maxDuzina = tekucaDuzina;
			maxRec = reci[i];
		}
	}
	
	cout << maxRec << " " << maxDuzina << endl;
	
	return 0;
}