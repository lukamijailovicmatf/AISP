#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//     i     j
// 1 2 3 4 5 6 7 8 9 10

void ispisiSegmentDatogZbira(const vector<int>& a, int trazeniZbir) {
	
	int n = a.size();
	
	for (int i = 0; i < n; i++) {
		int zbir = 0;
		for (int j = i; j < n; j++) {
			zbir = zbir + a[j];
			if (zbir == trazeniZbir)
				cout << i << " " << j << endl;
		}
	}
}

int main(){
	
	int z;
	cin >> z;
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	ispisiSegmentDatogZbira(a, z);
	
	return 0;
}