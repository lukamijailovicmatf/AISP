#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//            i
//                  j
// 1 2 3 5 15 1 2 5

void ispisiSegmentDatogZbira(const vector<int>& a, int trazeniZbir) {
	
	int i = 0;
	int j = 0;
	int zbir = a[0];
	
	while (true) {
		if (zbir < trazeniZbir) {
			j++;
			if (j >= a.size())
				break;
			zbir = zbir + a[j];
		} else {
			if (zbir == trazeniZbir)
				cout << i << " " << j << endl;
				zbir = zbir - a[i];
				i++;
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