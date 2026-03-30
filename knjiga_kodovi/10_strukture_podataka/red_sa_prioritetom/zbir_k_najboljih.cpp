#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	int k;
	cin >> k;
	
	priority_queue<int, vector<int>, greater<int>> pq;
	
	// ucitavamo prvih k i ubacujemo u red
	for (int i = 0; i < k; i++) {
		int x;
		cin >> x;
		pq.push(x);
	}
	
	// ucitavamo ostale i azuriramo red
	for (int i = k; i < n; i++) {
		int x;
		cin >> x;
		if (x > pq.top()) {
			pq.pop();
			pq.push(x);
		}
	}
	
	// racunamo sumu reda
	int suma = 0;
	while (!pq.empty()) {
		suma = suma + pq.top();
		pq.pop();
	}
	
	cout << suma << endl;
	
	return 0;
}