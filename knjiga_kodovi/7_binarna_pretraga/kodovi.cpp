#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

// l       d 
// 1 3 5 6 7

//             s
//           d
//             l
// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20

bool sadrzi(int a[], int n, int x) {
	
	int l = 0;
	int d = n - 1;
	
	while (l <= d) {
		int s = l + (d - l) / 2;
		if (x <= a[s])
			d = s - 1;
		else
			l = s + 1;
	}
	
	return l < n && a[l] == x;
}

int main(){
	
	int n;
	cin >> n;	
	
	int a[n];
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int x;
	cin >> x;
		
	if (sadrzi(a, n, x)) {
		cout << "postoji" << endl;
	} else {
		cout << "ne postoji" << endl;
	}
	
	return 0;
}