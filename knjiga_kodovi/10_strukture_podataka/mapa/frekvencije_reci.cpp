#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

int main(){
	
	string s;
	
	map<string, int> brojPojavljivanja;
	
	while (cin >> s)
		brojPojavljivanja[s]++;
		
	int maxPojavljivanja = 0;
	string maxRec;
	for (auto it = brojPojavljivanja.begin(); it != brojPojavljivanja.end(); it++)
		if (it->second > maxPojavljivanja || (it->second == maxPojavljivanja && it->first < maxRec)) {
			maxPojavljivanja = it->second;
			maxRec = it->first;
		}
		
	cout << maxRec << " " << maxPojavljivanja << endl;
	
	return 0;
}