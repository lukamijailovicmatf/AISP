#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void najblizeSobe(const vector<int>& a, int& soba1, int& soba2) {
	
	int n = a.size();
	int min_i = a[0];
	int min_j = a[1];
	int d_min = abs(min_i - min_j);
	
	for (int i = 0; i < n; i++) {
		for (int j = i+1; j < n; j++) {
			int d_ij = abs(a[i] - a[j]);
			if (d_ij < d_min || (d_ij == d_min && min(a[i], a[j]) > min(min_i, min_j))) {
				min_i = a[i];
				min_j = a[j];
				d_min = d_ij;
			}
		}
	}
	
	soba1 = min(min_i, min_j);
	soba2 = max(min_i, min_j);
}

int main(){
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int soba_1;
	int soba_2;
	
	najblizeSobe(a, soba_1, soba_2);
	
	cout << soba_1 << " " << soba_2 << endl;
	
	return 0;
}