#include <iostream>
#include <algorithm>

using namespace std;

// m*a0 + m*(m-1)/2 = n
// m*a0 = n - m*(m-1)/2
// a0 = (n - m*(m-1)/2)/m
int brojNacina(int n) {

	int nacini = 0;

	for (int m = 2; m + m*(m-1)/2 <= n; m++) {
		if ((n - m*(m-1)/2) % m == 0) {
			nacini++;
		}
	}

	return nacini;
}

int main(){

	int n;
	cin >> n;

	int rez = brojNacina(n);

	cout << rez << endl;

	return 0;
}