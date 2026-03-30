#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	sort(begin(a), end(a));
	
	for (int element : a)
		cout << element << " ";
		
	cout << endl;
	
	return 0;
}