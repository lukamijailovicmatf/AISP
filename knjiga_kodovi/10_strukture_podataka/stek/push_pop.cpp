#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>

using namespace std;

enum Naredba {
	PUSH,
	POP
};

bool PushPop(const vector<int>& push, const vector<int>& pop, int n, vector<Naredba>& naredbe) {
	
	stack<int> stek;
	naredbe.reserve(2*n);
	
	int push_i = 0;
	int pop_i = 0;
	
	while (push_i < n || pop_i < n) {
		if (!stek.empty() && stek.top() == pop[pop_i]) {
			naredbe.push_back(POP);
			stek.pop();
			pop_i++;
		} else if (push_i < n) {
			naredbe.push_back(PUSH);
			stek.push(push[push_i]);
			push_i++;
		} else {
			return false;
		}
	}
	
	return true;
}

int main(){
	
	int n;
	cin >> n;
	
	vector<int> push(n);
	for (int i = 0; i < n; i++)
		cin >> push[i];
		
	vector<int> pop(n);
	for (int i = 0; i < n; i++)
		cin >> pop[i];
		
	vector<Naredba> naredbe;
	bool pomocna;
	
	if (PushPop(push, pop, n, naredbe)) {
		for (Naredba e : naredbe) {
			if (e == 0)
				cout << "push" << endl;
			else
				cout << "pop" << endl;
		}
	} else {
		cout << "-" << endl;
	}
	
	return 0;
}
