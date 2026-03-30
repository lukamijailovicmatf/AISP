#include <iostream>
#include <algorithm>

using namespace std;

bool sadrzi(int a[], int n, int x) {
	
	int l = 0;
	int d = n - 1;
	
	while (l <= d) {
		int s = l + (d - l) / 2;
		if (x < a[s])
			d = s - 1;
		else if (x > a[s])
			l = s + 1;
		else
			return true;
	}
	
	return false;
}

int main(){
	
	int n;
	cin >> n;
	
	int a[n];                   
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int broj = 0;
	int x;
	
	while (cin >> x) {
		if (sadrzi(a, n, x))
			broj++;
	}
	
	cout << broj << endl;
	
	return 0;
}