#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main(){
	
	stack<string> istorija;
	string linija;
	
	while (getline(cin, linija)) {
		if (linija == "back") {
			if (!istorija.empty()) {
				istorija.pop();
			if (!istorija.empty())
				cout << istorija.top() << endl;
			else
				cout << "-" << endl;
			}
		} else {
			cout << linija << endl;
			istorija.push(linija);
		}
	}
	
	return 0;
}