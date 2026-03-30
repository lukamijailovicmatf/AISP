#include <iostream>
#include <algorithm>
#include <stack>

using namespace std;

// zdravo		      dan
// svete	=====>	  dobar
// dobar              svete
// dan                zdravo

int main(){
	
	stack<string> s;
	string linija;
	
	while (getline(cin, linija))
		s.push(linija);
		
	cout << "---------------------" << endl;
		
	while (!s.empty()) {
		cout << s.top() << endl;
		s.pop();
	}
	
	return 0;
}