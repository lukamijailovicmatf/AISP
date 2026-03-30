#include <iostream>
#include <algorithm>
#include <unordered_set>

using namespace std;

int main(){
	
	unordered_set<unsigned> a;
	
	int n;
	cin >> n;
	
	for (int i = 0; i < n; i++) {
		unsigned x;
		cin >> x;
		a.insert(x);
	}
	
	cout << a.size() << endl;
	
	return 0;
}