#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int brojRazlicitih(const vector<int>& a) {
	
	auto as = a;
	
	sort(begin(as), end(as));
	
	int broj = 1;
	int n = a.size();
	
	for (int i = 1; i < n; i++){
		if (as[i] != as[i-1])
			broj++;
	}
	
	return broj;
}

int main(){
	
	int n;
	cin >> n;
	
	vector<int> a(n);
	for (int i = 0; i < n; i++)
		cin >> a[i];
		
	int broj = brojRazlicitih(a);
	
	cout << broj << endl;
	
	return 0;
}