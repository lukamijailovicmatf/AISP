#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
	
	string rec;
	cin >> rec;
	
	int brojPojavljivanja[26] = {0};
	
	// popunjavamo niz brojaca
	for (char c : rec)
		brojPojavljivanja[c - 'A']++;
		
	int maxPojavljivanja = 0;
	for (int i = 0; i < 26; i++)
		if (brojPojavljivanja[i] > maxPojavljivanja)
			maxPojavljivanja = brojPojavljivanja[i];
			
	for (char c : rec)
		if (brojPojavljivanja[c - 'A'] == maxPojavljivanja) {
			cout << c << endl << maxPojavljivanja << endl;
			break;
		}
	
	return 0;
}