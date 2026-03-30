#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool jePermutacija(vector<int>& a, vector<int>& b) {
	
	if (a.size() != b.size())
		return false;
		
	sort(begin(a), end(a));
	sort(begin(b), end(b));
	
	return a == b;
}

int main(){
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int m;
	cin >> m;
	
	vector<int> b(m);
	for (int i = 0; i < m; i++)
		cin >> b[i];
		
	if (jePermutacija(a,b))
		cout << "da" << endl;
	else
		cout << "ne" << endl;
		
	return 0;
}