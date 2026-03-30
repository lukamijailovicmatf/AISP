#include <iostream>
#include <algorithm>

using namespace std;

bool anagram(const string& s1, const string& s2) {
	
	string slova1;
	string slova2;
	
	copy_if(begin(s1), end(s1), back_inserter(slova1), ::islower);
	copy_if(begin(s2), end(s2), back_inserter(slova2), ::islower);
	
	sort(begin(slova1), end(slova1));
	sort(begin(slova2), end(slova2));
	
	return slova1 == slova2;
}

int main(){
	
	string niska1;
	getline(cin, niska1);
	
	string niska2;
	getline(cin, niska2);
	
	if (anagram(niska1, niska2))
		cout << "da" << endl;
	else
		cout << "ne" << endl;
	
	return 0;
}