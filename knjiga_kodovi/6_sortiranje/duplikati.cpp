#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//   j
//     i 
// 1 2 3 4 5 6 7 8 1 9 10

int brojRazlicitih(const vector<int>& a) {
	
	int broj = 0;
	int n = a.size();
	
	for (int i = 0; i < n; i++) {
		bool sadrzi = false;
		for (int j = 0; j < i; j++) {
			if (a[i] == a[j]) {
				sadrzi = true;
				break;
			}
		}
		if (!sadrzi)
			broj++;	
	}
	
	return broj;
}

int main(){
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int broj = brojRazlicitih(a);
	
	cout << broj << endl;
	
	return 0;
}