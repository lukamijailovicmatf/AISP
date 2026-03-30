#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	
	string ulaz;
	getline(cin, ulaz);
	
	string izlaz = "";
	for (char c : ulaz) {
		if (c != ' ' && c != '\t') {
			izlaz.push_back(c);
		}
	}
	
	cout << izlaz << endl;
	
	return 0;
}