#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

// 6609 megabajta (vreme 7.30)

bool jeOperator(char c) {
	return c == '+' || c == '*';
}

int primeniOperator(char op, int op1, int op2) {
	
	int v = 0;
	
	switch (op) {
		case '+': v = op1 + op2; break;
		case '*': v = op1 * op2; break;
	}

	return v;
}

int vrednost(const string& izraz) {
	
	stack<int> stek;
	
	for (char c : izraz) {
		if (isdigit(c))
			stek.push(c - '0');
		else if (jeOperator(c)) {
			int op1 = stek.top();
			stek.pop();
			int op2 = stek.top();
			stek.pop();
			stek.push(primeniOperator(c, op1, op2));
		}
	}
	
	return stek.top();
}

int main(){
	
	string izraz;
	cin >> izraz;
	
	int vrednostIzraza = vrednost(izraz);
	
	cout << vrednostIzraza << endl;
	
	return 0;
}