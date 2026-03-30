#include <iostream>
#include <algorithm>
#include <queue>

// 6609 megabajta (vreme 7.30)
// 5522 megabajta (vreme 10.00)

using namespace std;

// n = 8 --------> broj djaka
// k = 3 --------> duzina razbrajalice

// 0 1 2 3 4 5 6 7
// 0 1 3 4 5 6 7
// 0 1 3 4 6 7
// 1 3 4 6 7
// 1 3 6 7
// 3 6 7
// 3 6
// 6

int josif(int n, int m) {
	
	queue<int> red;
	
	for (int i = 0; i < n; i++)
		red.push(i);
		
	while (red.size() > 1) {
		for (int i = 0; i < m - 1; i++) {
			red.push(red.front());
			red.pop();
		}
		red.pop();
	}
	
	return red.front();
}

int main(){
	
	int n;
	cin >> n;
	
	int m;
	cin >> m;
	
	int preostaliUcenik = josif(n, m);
	
	cout << preostaliUcenik << endl;
	
	return 0;
}