#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	// red sa prioritetom u koji smestamo elemente, koji ih pakuje u rastucem poretku
	// na primer: 1 1 3 6 8
	priority_queue<int, vector<int>, greater<int>> pq;
	
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		pq.push(x);
	}
	
	while (!pq.empty()) {
		cout << pq.top() << " ";
		pq.pop();
	}
	
	cout << endl;
	
	return 0;
}