#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int broj1x1Podstringova(const string& s) {

	int n = s.length();
	int broj = 0;

	for (int i = 0; i < n-1; i++) {
		if (s[i] == '1') {
			for (int j = i+1; j < n; j++) {
				if (s[j] == '1') {
					broj++;
				}
			}
		}
	}

	return broj;
}

int main(){

	// 010001001
	string s;
	cin >> s;

	int rez = broj1x1Podstringova(s);

	cout << rez << endl;

	return 0;
}