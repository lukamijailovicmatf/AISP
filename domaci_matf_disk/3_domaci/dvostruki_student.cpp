#include <iostream>
#include <algorithm>
#include <set>
// #include <string>

using namespace std;

int main() {
	
	set<pair<string, string>> studenti;
	
	string ime;
	string prezime;
	
	while (cin >> ime) {
		cin >> prezime;
		if (studenti.find({ime, prezime}) == studenti.end()) {
			studenti.insert({ime, prezime});
		} else {
			cout << ime << " " << prezime << endl;
			break;
		}
	}
	
	return 0;
}