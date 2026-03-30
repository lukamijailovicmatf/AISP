#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;

int main(){
	
	string rec;
	cin >> rec;
	
	map<char, int> brojPojavljivanja;
	
	for (char c : rec)
		brojPojavljivanja[c]++;
		
	int maxPojavljivanja = 0;
	for (const auto& p : brojPojavljivanja)
		if (p.second > maxPojavljivanja)
			maxPojavljivanja = p.second;
			
	for (char c : rec)
		if (brojPojavljivanja[c] == maxPojavljivanja) {
			cout << c << endl << maxPojavljivanja << endl;
			break;
		}
	
	return 0;
}