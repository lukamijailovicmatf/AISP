#include <iostream>
#include <algorithm>

using namespace std;

int main(){
	
	string str = "";
	
	string naredbe;
	cin >> naredbe;
	
	int i = 0;
	auto it = begin(str);
	
	while (i < naredbe.size()) {
		char naredba = naredbe[i++];
		if (naredba == '<') {
			if (it > begin(str))
				it--;
		} else if (naredba == '>') {
			if (it < end(str))
				it++;
		} else if (naredba == 'i') {
			char c = naredbe[i++];
			it = str.insert(it, c);
			it++;
		} else if (naredba == 'b') {
			if (it > begin(str)) {
				it--;
				it = str.erase(it);
			}
		} else if (naredba == 'd') {
			if (it < end(str))
				it = str.erase(it);
		}
	}
	
	cout << str << endl;
	
	return 0;
}