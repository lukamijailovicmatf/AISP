#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

string stekUString(stack<char>& stek) {
	
	string str = "";
	
	while (!stek.empty()) {
		str = str + stek.top();
		stek.pop();
	}
	
	return str;
}

int main(){
	
	stack<char> levo;
	stack<char> desno;
	
	string naredbe;
	cin >> naredbe;
	
	int i = 0;
	while (i < naredbe.size()) {
		char naredba = naredbe[i++];
		if (naredba == '<') {
			if (!levo.empty()) {
				desno.push(levo.top());
				levo.pop();
			}
		} else if (naredba == '>') {
			if (!desno.empty()) {
				levo.push(desno.top());
				desno.pop();
			}
		} else if (naredba == 'i') {
			levo.push(naredbe[i++]);
		} else if (naredba == 'b') {
			if (!levo.empty()) {
				levo.pop();
			}
		} else if (naredba == 'd') {
			if (!desno.empty())
				desno.pop();
		}
	}	
	
	string str = stekUString(levo);
	reverse(begin(str), end(str));
	str = str + stekUString(desno);
	
	cout << str << endl;
	
	return 0;
}