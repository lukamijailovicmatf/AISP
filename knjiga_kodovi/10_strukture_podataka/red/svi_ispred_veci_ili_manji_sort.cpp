#include <iostream>
#include <algorithm>
#include <deque>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	deque<int> a;
	
	int x;
	cin >> x;
	a.push_back(x);
	
	for (int i = 1; i < n; i++) {
		cin >> x;
		if (x > a.back())
			a.push_back(x);
		else
			a.push_front(x);
	}
	
	for (int x : a)
		cout << x << " ";
	cout << endl;
	
	return 0;
}