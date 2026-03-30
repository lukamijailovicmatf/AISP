#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

// ((3+4)*(5+2)) --------> 34+52+* 

bool jeOperator(char c) {
	return c == '+' || c == '*';
}

string prevedi(const string& izraz) {
	
	string postfiks;
	stack<char> operatori;
	
	for (char c : izraz) {
		if (isdigit(c))
			postfiks = postfiks + c;
		else if (c == ')') {
			postfiks = postfiks + operatori.top();
			operatori.pop();
		} else if (jeOperator(c))
			operatori.push(c);
	}
	
	return postfiks;
}

int main(){
	
	string izraz;
	cin >> izraz;
	
	string postfiksniIzraz = prevedi(izraz);
	
	cout << postfiksniIzraz << endl;
	
	return 0;
}