#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int broj1x1Podstringova(const string& s) {

	int brojJedinica = 0;

	for (char c : s)
		if (c == '1')
			brojJedinica++;

	return brojJedinica * (brojJedinica - 1) / 2;
}

int main(){

	// 010001001
	string s;
	cin >> s;

	int rez = broj1x1Podstringova(s);

	cout << rez << endl;

	return 0;
}