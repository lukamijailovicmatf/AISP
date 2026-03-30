#include <iostream>
#include <algorithm>

using namespace std;

void objedini(int a[], int n, int b[], int m, int c[]) {
	
	int i = 0;
	int j = 0;
	int k = 0;
	
	while (i < n && j < m) {
		if (a[i] < b[j]) {
			c[k] = a[i];
			i++;
			k++;
		} else {
			c[k] = b[j];
			j++;
			k++;
		}
	}
	
	while (i < n) {
		c[k] = a[i];
		i++;
		k++;
	}
	
	while (j < m) {
		c[k] = b[j];
		j++;
		k++;
	}
}

int main(){
	
	int m;
	cin >> m;
	
	int a[m];
	for (int i = 0; i < m; i++)
		cin >> a[i];
	
	int n;
	cin >> n;
	
	int b[n];
	for (int i = 0; i < n; i++)
		cin >> b[i];
		
	int c[m + n];
	
	objedini(a, m, b, n, c);
	
	for (int x : c)
		cout << x << " ";
	cout << endl;
	
	return 0;
}