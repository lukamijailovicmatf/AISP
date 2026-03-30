#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

int main() {
	
	char c;
	stack<char> stek;
	char r = 1;
	
	while (cin >> c) {
		if (c == '(' || c == '{' || c == '[') {
			stek.push(c);
		} else if (c == ')' || c == '}' || c == ']') {
			if (stek.empty()) {
				r = 0;
				break;
			} else {
				bool u1 = (stek.top() == '(' && c == ')');
				bool u2 = (stek.top() == '{' && c == '}');
				bool u3 = (stek.top() == '[' && c == ']');
				if (!(u1 || u2 || u3)) {
					r = 0;
					break;
				} else {
					stek.pop();
				}
			}
		}
	}
	
	// ako nesto postoji na steku onda je uparenost losa
	if (!stek.empty()) {
		r = 0;
	}
	
	if (r) {
		cout << "da" << endl;
	} else {
		cout << "ne" << endl;
	}
	
	return 0;
}