#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//                    sort
// 18 6 25 11 4 1 16  ---->  1 4 6 11 16 18 25

void najblizeSobe(const vector<int>& a, int& soba1, int& soba2) {
	
	auto as = a;
	int min = 1;
	int n = a.size();
	
	sort(begin(as), end(as));
	
	for (int i = 2; i < n; i++) {
		if (as[i] - as[i-1] <= as[min] - as[min-1])
			min = i;
	}
	
	soba1 = as[min-1];
	soba2 = as[min];
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