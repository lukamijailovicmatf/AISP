#include <iostream>
#include <algorithm>
#include <vector> 

using namespace std;

// zbir = 5
// n = 6

// i j
// 1 4 3 6 -1 5

int brojParovaDatogZbira(const vector<int>& a, int s) {
	
	int n = a.size();
	int brojParova = 0;
	
	for (int i = 0; i < n-1; i++) {
		for (int j = i+1; j < n; j++) {
			if (a[i] + a[j] == s)
				brojParova++;
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
		
	int resenje = brojParovaDatogZbira(a, s);
	
	cout << resenje << endl;
	
	return 0;
}