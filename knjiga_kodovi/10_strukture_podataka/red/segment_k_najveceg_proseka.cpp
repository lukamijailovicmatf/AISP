#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

// k = 3
// n = 5
// 1.0  5.0  8.0  2.0  7.0

int main(){
	
	int k;
	cin >> k;
	
	int n;
	cin >> n;
	
	queue<double> q;
	
	double suma = 0.0;
	for (int i = 0; i < k; i++) {
		double x;
		cin >> x;
		q.push(x);
		suma = suma + x;
	}
	
	double maxSuma = suma;
	int maxPocetak = 0;
	
	for (int i = 1; i <= n - k; i++) {
		double x;
		cin >> x;
		suma = suma - q.front() + x;
		q.pop();
		q.push(x);
		if (suma > maxSuma) {
			maxSuma = suma;
			maxPocetak = i;
		}
	}
	
	cout << maxPocetak << endl;
	
	return 0;
}